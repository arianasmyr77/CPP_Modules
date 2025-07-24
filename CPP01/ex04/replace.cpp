/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:39:48 by marvin            #+#    #+#             */
/*   Updated: 2025/07/24 23:39:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>
#include <iostream>

Replace::Replace(const std::string& filename, const std::string& s1, const std::string& s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

bool Replace::process() {
    if (_s1.empty()) {
        std::cerr << "Error: s1 must not be empty." << std::endl;
        return false;
    }

    std::string content;
    if (!readFile(content)) {
        std::cerr << "Error: Could not read input file." << std::endl;
        return false;
    }

    std::string replaced = replaceString(content);

    if (!writeFile(replaced)) {
        std::cerr << "Error: Could not write to output file." << std::endl;
        return false;
    }

    return true;
}

bool Replace::readFile(std::string &outContent) const {
    std::ifstream inFile(_filename.c_str());
    if (!inFile)
        return false;

    std::string line;
    while (std::getline(inFile, line)) {
        outContent += line;
        outContent += '\n';
    }

    // Remove trailing newline (optional)
    if (!outContent.empty() && outContent[outContent.length() - 1] == '\n') {
        outContent.erase(outContent.length() - 1);
    }

    return true;
}

std::string Replace::replaceString(const std::string& content) const {
    std::string result;
    std::string::size_type pos = 0;
    std::string::size_type found;

    while ((found = content.find(_s1, pos)) != std::string::npos) {
        result.append(content.substr(pos, found - pos));
        result.append(_s2);
        pos = found + _s1.length();
    }

    result.append(content.substr(pos));
    return result;
}

bool Replace::writeFile(const std::string& content) const {
    std::ofstream outFile((_filename + ".replace").c_str());
    if (!outFile)
        return false;

    outFile << content;
    return true;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:39:51 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/24 23:39:51 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <string>

class Replace {
public:
    Replace(const std::string& filename, const std::string& s1, const std::string& s2);
    bool process();

private:
    std::string _filename;
    std::string _s1;
    std::string _s2;

    bool readFile(std::string& outContent) const;
    std::string replaceString(const std::string& content) const;
    bool writeFile(const std::string& content) const;
};

#endif


#endif
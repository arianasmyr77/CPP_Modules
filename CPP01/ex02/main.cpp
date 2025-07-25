/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:03:55 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/22 17:03:55 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string  &stringREF = str;

    std::cout << "Memory address of the string:     " << &str << std::endl;
    std::cout << "Memory address of the pointer:    " << stringPTR << std::endl;
    std::cout << "Memory address of the refference: " << &stringREF << std::endl;

    std::cout << "\033[36m_______________________________________________" 
    << "\033[0m" << std::endl;

    std::cout << "Value of the string: " << str << std::endl;
    std::cout << "Value of the pointer: " << *stringPTR << std::endl;
    std::cout << "Value of the refference: " << stringREF << std::endl;
    return (0);
}

/* Why don’t we use *ptr to get the memory address?
Good observation. The key is:

Expression	Meaning
ptr	The address stored in the pointer
*ptr	The value at that address
&ptr	The address of the pointer itself

In your code:
cpp
Copy
Edit
std::string* ptr = &str;
std::cout << ptr;     // shows the address ptr holds: same as &str
std::cout << *ptr;    // dereferences: shows value at that address ("HI...")
You use ptr (no *) when you want to print the memory address the pointer holds.
You use *ptr when you want to access the actual value at that address.





Think of:

ptr as the mailbox number (address)

*ptr as the letter inside (value)

If you want to go to the house, use the address: ptr
If you want to read the letter, open it: *ptr*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:57:36 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/02 18:28:06 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

#ifndef SIZE
# define SIZE 8
#endif

#ifndef PAD
#define PAD 10
#endif

class PhoneBook{
    int         index;
    
    Contact     contacts[SIZE];
    bool        displayContact(int index);
    void        displayAllContacts(void);
    void        printLine(void);
    void        printHeader(void);
    std::string printColumn(std::string text);
public:
    PhoneBook();
    void        addContact(void);
    void        search(void);
};

#endif
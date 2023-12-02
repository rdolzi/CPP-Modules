/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:57:29 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/01 21:22:28 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <string>

//  A saved contact can’t have empty fields.
class Contact{
    int         index;
    bool        is_empty;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    
    public:
        Contact();
        
        int         getIndex(void);
        Contact     &setIndex(int index);

        bool        isEmpty(void);
        void        setNotEmpty(void);
        
        std::string getFirstName(void);
        Contact     &setFirstName(void);
        
        std::string getLastName(void);
        Contact     &setLastName(void);

        std::string getNickname(void);
        Contact     &setNickname(void);

        std::string getPhoneNumber(void);
        Contact     &setPhoneNumber(void);

        std::string getDarkestSecret(void);
        Contact     &setDarkestSecret(void);
};

#endif
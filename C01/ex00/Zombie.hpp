/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:04:36 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/05 23:46:37 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie{
    std::string name;
    
    public:
        void announce(void);
        Zombie(void);
        ~Zombie(void);
        Zombie(std::string name);
        std::string getName(void);
        void setName(std::string name);
};

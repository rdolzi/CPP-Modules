#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
    // Define pointers to member functions
    typedef void (Harl::*MemberFunctionPointer)(void);

    struct LevelFunctionPair
    {
        std::string level;
        MemberFunctionPointer functionPointer;
    };

    // Define pairs of level strings and associated member functions
    LevelFunctionPair levelFunctionPairs[] = {
        {std::string("DEBUG"), &Harl::debug},
        {std::string("INFO"), &Harl::info},
        {std::string("WARNING"), &Harl::warning},
        {std::string("ERROR"), &Harl::error},
        {std::string(""), 0} // End marker
    };

    // Find the appropriate member function using the level parameter
    for (const LevelFunctionPair *pair = levelFunctionPairs; pair->level != ""; ++pair)
    {
        if (level == pair->level)
        {
            // Call the member function using the pointer
            (this->*pair->functionPointer)();
            return;
        }
    }

    // If the level is not found, print an "Unknown level" message
    std::cout << "Unknown level: " << level << std::endl;
}
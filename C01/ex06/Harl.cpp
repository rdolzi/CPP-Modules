#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n"
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\n"
    << "I cannot believe adding extra bacon costs more money.\n"
    << " You didn’t put enough bacon in my burger!\n"
    << " If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n"
    << "I think I deserve to have some extra bacon for free.\n" 
    << "ve been coming for years whereas you started working here since last month.\n"
    << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n"
    << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level)
{
    // Define pointers to member functions
    typedef void (Harl::*MemberFunctionPointer)(void);

    enum LogLevel
    {
        DEBUG,
        INFO,
        WARNING,
        ERROR,
        UNKNOWN
    };

    struct LevelFunctionPair
    {
        std::string level;
        MemberFunctionPointer functionPointer;
        LogLevel log;
    };

    // Define pairs of level strings and associated member functions
    LevelFunctionPair levelFunctionPairs[] = {
        {std::string("DEBUG"), &Harl::debug, DEBUG},
        {std::string("INFO"), &Harl::info, INFO},
        {std::string("WARNING"), &Harl::warning, WARNING},
        {std::string("ERROR"), &Harl::error, ERROR},
        {std::string(""), nullptr, UNKNOWN} // End marker
    };

    // Find the appropriate member function using the level parameter
    MemberFunctionPointer selectedFunction = nullptr;
    LogLevel selectedLogLevel = UNKNOWN;

    for (const LevelFunctionPair *pair = levelFunctionPairs; pair->level != ""; ++pair)
    {
        if (level == pair->level)
        {
            selectedFunction = pair->functionPointer;
            selectedLogLevel = pair->log;
            break;
        }
    }

    // Use a switch statement to call the member function if found, otherwise print an "Unknown level" message
    switch (selectedLogLevel)
    {
    case DEBUG:
        (this->*(&Harl::debug))();
    case INFO:
        (this->*(&Harl::info))();
    case WARNING:
        (this->*(&Harl::warning))();
    case ERROR:
        (this->*(&Harl::error))();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ] " << std::endl;
        break;
    }
}
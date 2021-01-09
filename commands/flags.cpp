#include "flags.h"

void print_flags(const std::vector<std::string> &flags, std::string sep)
{
    for (auto flag : flags)
        std::cout << flag << sep;
    std::cout << std::endl;
};

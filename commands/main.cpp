#include "ls.h"
#include "parent_import.h"

int main(int argc, char** argv)
{
    ListFiles ls;
    std::string input = ls.get_command(argc, argv);
    std::cout << input << std::endl;

    return 0;
}

#include "ls.h"
#include "parent_import.h"

int main(int argc, char** argv)
{
    ListFiles ls;
    ls.get_command(argc, argv);

    return 0;
}

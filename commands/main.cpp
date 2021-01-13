#include "ls.h"
#include "types.h"

int main(int argc, char** argv)
{
    ListFiles ls;
    vec_str* flags = ls.get_command(argc, argv);

    ls.format_output(flags);

    return 0;
}

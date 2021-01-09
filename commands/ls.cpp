#include "ls.h"
#include "parent_import.h"
#include <vector>
#include "flags.h"
#include "types.h"

void ListFiles::get_command(int num_flags, char** p_flags)
{
    vec_str flags;

    for(int flg = 0; flg < num_flags; ++flg)
        flags.push_back(p_flags[flg]);
    print_flags(flags, " ");
};

void ListFiles::format_output()
{
    vec_str current_files;
};
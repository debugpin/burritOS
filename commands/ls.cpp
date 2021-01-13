#include <vector>
#include "ls.h"
#include "flags.h"

vec_str* ListFiles::get_command(int num_flags, char** p_flags)
{
    vec_str flags;
    vec_str* p_vec = &flags;

    for(int flg = 0; flg < num_flags; ++flg)
        flags.push_back(p_flags[flg]);
    
    return p_vec;
};

void ListFiles::format_output(vec_str* flags)
{
    vec_str current_files;
};

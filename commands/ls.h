#include <string>
#include <vector>
#include <iostream>
#include "types.h"

class ListFiles
{
    public:
    ListFiles(){};
    vec_str* get_command(int num_flags, char** p_flags);
    void format_output(vec_str* flags);
    void output();
};

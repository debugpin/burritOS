#include <iostream>
#include "types.h"

class ListFiles
{
    public:
    ListFiles(){};
    void get_command(int num_flags, char** p_flags);
    void format_output();
    void output();
};

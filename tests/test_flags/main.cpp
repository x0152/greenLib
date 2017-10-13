#include <iostream>
#include "flags.h"

using namespace std;

enum{
    FLAG1 = 2,
    FLAG2 = 4
};

int main(){
    bool error = false;

    Flags<FLAG16> flags;

    flags.SetFlag(FLAG1);

    error |= !flags.IsFlag(FLAG1);
    error |= flags.IsFlag(FLAG2);

    flags.ResetFlag(FLAG1);

    error |= flags.IsFlag(FLAG1);

    return error;
}

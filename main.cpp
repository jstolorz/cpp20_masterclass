#include "lessons/Section8.h"

int main() {

    unsigned char var {0b01001001};
    //Section8::section8();
    Section8::use_options_v0(true, false, true, false, true, true, false, true);
    Section8::use_options_v1(var);
    return 0;
}

#include <string>
#include <vector>
#include <algorithm>

#include "jupiter.h"

#define MY_NAME "Europa"
#define FRIEND "Tatooine"

std::string _europa_private(std::string input) {
    std::string ret = "Europa found out that " + input + " is ";
    if (!is_jupiter_moon(input)) {
        ret += "NOT ";
    }
    ret += "a moon of Jupiter.";
    return ret;
}

/* Check if itself is a moon of jupiter and returns its name */
std::string europa_name() {
    return _europa_private(MY_NAME);
}


/* Does the same thing but for it's imaginary friend */
std::string europa_new_friend() {
    return _europa_private(FRIEND);
}

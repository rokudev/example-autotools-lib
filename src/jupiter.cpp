#include <string>
#include <vector>
#include <algorithm>

#include "jupiter.h"

#define JUPITER_MOONS { "io", "europa", "ganymede", "callisto" }

/* Is the given string a moon of Jupiter? */
bool is_jupiter_moon(std::string input) {
    static const std::vector<std::string> moons = JUPITER_MOONS;
    return std::find(moons.begin(), moons.end(), input) != moons.end();
}


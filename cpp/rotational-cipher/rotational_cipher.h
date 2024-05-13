#pragma once

#include <string>

namespace rotational_cipher {
    std::string rotate(std::string text, int key);
     int findIndex(char a, int key);
}  // namespace rotational_cipher

#include "secret_handshake.h"

namespace secret_handshake {
    std::vector<std::string> commands(unsigned int num){
        std::vector<std::string> code;
        if (num & 0b00001)  code.emplace_back("wink");
        if (num & 0b00010)  code.emplace_back("double blink");
        if (num & 0b00100)  code.emplace_back("close your eyes");
        if (num & 0b01000)  code.emplace_back("jump");
        if (num & 0b10000) std::reverse(begin(code), end(code));

        return code;
    }

}  // namespace secret_handshake

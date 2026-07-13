#pragma once
#include "types.h"
#include <array>

class Bus{
public:
    byte read(word);
    void write(word,byte);
private:
    std::array<byte, 65536>memoria;//nome temporario
};

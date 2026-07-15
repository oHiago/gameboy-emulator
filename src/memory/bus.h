#pragma once
#include "utils/types.h"
#include <array>

class Bus{
public:
    byte read(word endereco);
    void write(word endereco,byte valor);
private:
    std::array<byte, 65536>memoria;//nome temporario
};

#pragma once
#include "utils/types.h"
#include "memory/bus.h"
#include <vector>
#include <fstream>
#include <string>

class Cartridge{
public:
    bool carregar(std::string caminho);
    byte read(word endereco);
private:
    std::vector<byte>rom;   
};
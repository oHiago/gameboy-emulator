#include <array>
#include "memory/bus.h"
#include "utils/types.h"
#include "cartridge/cartridge.h"

byte Bus::read(word endereco){
    return memoria[endereco];
}

void Bus::write(word endereco, byte valor){
    memoria[endereco] = valor;
}

void Bus::conectarCartridge(Cartridge* cartucho){
    this-> cartridge = cartucho;
}
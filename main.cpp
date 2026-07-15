#include <iostream>
#include "memory/bus.h"
#include "cartridge/cartridge.h"
#include "utils/types.h"

int main(){
    Bus barramento;
    Cartridge cartucho;
    barramento.write(4444,100);
    if (!cartucho.carregar("../tests/roms/cpu_instrs.gb")){
        std::cout<<"Erro ao carregar cartucho"<<std::endl;
        return 1;
        }
    else{
        std::cout<<"Cartucho carregado com sucesso"<<std::endl;
    }
    cartucho.read(0x0104);
    std::cout << static_cast<int>(barramento.read(4444)) << "\n";
    std::cout << static_cast<int>(cartucho.read(0x0104)) << "\n";
    return 0;
}
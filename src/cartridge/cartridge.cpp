#include "utils/types.h"
#include "memory/bus.h"
#include "cartridge/cartridge.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

bool Cartridge::carregar(std::string caminho){
    std::ifstream arquivo(caminho,std::ios::binary | std::ios::ate);

    if(!arquivo.is_open()){
        std::cerr<<"Falha ao abrir arquivo"<<"\n";
        return false;
    }

    std::streamsize tamanho = arquivo.tellg();
    arquivo.seekg(0, std::ios::beg);

    rom.resize(tamanho);

    if (arquivo.read(reinterpret_cast<char*>(rom.data()),tamanho)){
        std::cout<<"Leitura completa"<<tamanho<<"\n";
    }

    arquivo.close();
    return true;
}

byte Cartridge::read (word endereco){
    return rom[endereco];
}
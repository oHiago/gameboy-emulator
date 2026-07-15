#include <array>
#include "memory/bus.h"
#include "utils/types.h"

byte Bus::read(word endereco)
{
    return memoria[endereco];
}

void Bus::write(word endereco, byte valor)
{
    memoria[endereco] = valor;
}
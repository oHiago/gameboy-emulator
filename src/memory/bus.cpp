#include <array>
#include "bus.h"
#include "types.h"

byte Bus::read(word endereco)
{
    return memoria[endereco];
}

void Bus::write(word endereco, byte valor)
{
    memoria[endereco] = valor;
}
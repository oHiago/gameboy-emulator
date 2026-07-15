#include <iostream>
#include "memory/bus.h"
#include "utils/types.h"

int main(){
    Bus barramento;
    barramento.write(4444,100);

    std::cout << static_cast<int>(barramento.read(4444)) << "\n";
    return 0;
}
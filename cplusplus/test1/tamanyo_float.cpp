#include <iostream>
#include <limits>

/*
El rango de números que puede representar un float
Puedes usar la biblioteca <limits> para obtener estos valores:
*/

int main() {
    std::cout << "Máximo float: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Mínimo float (positivo más pequeño): " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Máximo exponente: " << std::numeric_limits<float>::max_exponent10 << std::endl;
    std::cout << "Mínimo exponente: " << std::numeric_limits<float>::min_exponent10 << std::endl;
    return 0;
}

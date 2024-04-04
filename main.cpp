#include <iostream>
#include "Prueba.h"
#include "Prueba2.h"

int main() {

    Prueba n1 = (2);
    Prueba n2 = (4);
    Prueba n3 = (5);

    std::cout<<n1.getnum()<<std::endl;
    std::cout<<n2.getnum()<<std::endl;
    std::cout<<n3.getnum()<<std::endl;

    Prueba2 n4 = (34);

    std::cout<<n4.retornar()<<std::endl;

    return 0;
}

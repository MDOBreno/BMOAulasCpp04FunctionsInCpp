//
//  main.cpp
//  BMOAulasCpp04FunctionsInCpp
//
//  Created by Breno Medeiros on 24/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>

int Multiplicar(int a, int b){          //Tradicional
    return a * b;
}
int Multiplicar(){                      //Sem parametros
    return 5 * 8;
}
void MultiplicarVoid(int a, int b){     //Tradicional
    std::cout << (a * b) << std::endl;
}

void MultiplicarEImprimir(int a, int b) {
    int resultado = Multiplicar(a, b);
    std::cout << resultado << std::endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int resultado1 = Multiplicar(3, 2);
    std::cout << resultado1 << std::endl;
    
    int resultado2 = Multiplicar(8, 5);
    std::cout << resultado2 << std::endl;
    
    int resultado3 = Multiplicar(90, 45);
    std::cout << resultado3 << std::endl;
    
    MultiplicarEImprimir(3, 2);
    MultiplicarEImprimir(8, 5);
    MultiplicarEImprimir(90, 45);
    
    return 0;
}

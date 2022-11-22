// 2022.11.22_Proyecto015_recursividadMCD.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rafael Flores Recursividad MCD

#include <iostream>


void mcd(int a, int b) {
    if (a == 0) {
        std::cout << b;
    }
    else {
        mcd(b % a, a);
    }
}

int main()
{
    int a, b;
    std::cout << "Ingresa 2 numeros\n";
    std::cin >> a;
    std::cin >> b;
    mcd(a, b);
}

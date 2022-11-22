// 2022.11.21_Proyecto 014.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rafael Flores Galvan, Recursividad Potencia 

#include <iostream>



void pow(int n1, int n2, int b) {
    int r = n1;
    if (n2 == 1) {
        std::cout << r << std::endl;
    }else { pow(b * n1, n2 - 1, b); }
}

int main(){
    int n1 = 0, n2 = 0, b = 0;
    std::cout << "Give me a number followed by a power\n";
    std::cin >> n1;
    std::cin >> n2;
    b = n1;
    pow(n1, n2, b);

}


// 2022.11.29_Proyecto018_Suma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Rafael Flores Suma recursividad 

#include <iostream>

void sum(int n, int res) {
    if (n == 0) {
        std::cout << res;
    }
    else { sum(n - 1, res = res + n); }
}
  

int main(){   
    int n = 0,res = 0;
    std::cout << "Ingrese el numero\n"; 
    std::cin >> n;
    sum(n, res);
 }



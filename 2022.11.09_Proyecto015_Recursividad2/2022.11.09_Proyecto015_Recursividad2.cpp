// 2022.11.09_Proyecto015_Recursividad2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Recursividad 2 

#include <iostream>


int mcd(int a, int b) {
	if (b == 0) return a;
	return mcd(b,a%b);
}


int main()
{
	int a, b;
	std::cout << "inserte 2 numeros\n";
	std::cin >> a;
	std::cin >> b;
	mcd(a, b);
	std::cout << 
}

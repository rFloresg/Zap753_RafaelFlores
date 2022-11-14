/* 2022.11.09_Proyecto014_Recursividad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
Rafael Flores Galvan 
Veremos recursividad*/

#include <iostream>

void convert(int num,int c,int ar[]){
	ar[c] = num % 2;	
	if (c>0) {
		convert(num / 2, c-1, ar);
	}
	else {
		for (int x = 0; x < 8; x++) {
			std::cout << ar[x];
		}
	}
}


int main() {

	int a, c = 7;
	int ar[8];
	do {
		std::cout << "Dame un numero menor a 1023 y mayor a 0\n";
		std::cin >> a;
		if (a > 1023) {
			std::cout << "\nEse no va\n";
		}
	} while (a > 1023);

	convert(a,c,ar);
	std::cout << std::endl << std::endl;
}
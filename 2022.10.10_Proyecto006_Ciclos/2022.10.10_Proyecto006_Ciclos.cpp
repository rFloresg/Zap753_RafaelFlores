/* 2022.10.10_Proyecto006_Ciclos.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
Rafael Flores Galvan
Practica de ciclos 
*/

#include <iostream>
#include <Windows.h>


int main(){
	
	bool move = true;
	int c = 0;

	while(move) {
		std::cout << "#" << c << std::endl;
		c++;
		if (c == 10) { move = false; }
		Sleep(777);}
	c = 0;

	do{std::cout << "DO #" << c << std::endl;
		c++;
		Sleep(777);
	} while (c <= 10);

	for (c = 0; c <= 10; c++) {
		std::cout << "FOR #" << c << std::endl;
		Sleep(777);
	}
}


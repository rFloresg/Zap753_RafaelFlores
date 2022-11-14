/* 2022.10.17_Proyecto008_ContadorAnidados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
Rafael Flores Galvan
Anidamos instrucciones*/

#include <iostream>
#include <Windows.h>

int main() {


	for (int i = 0; i <=9; i++) {
		for (int j = 0; j <=9; j++) {
			std::cout << "i(" << i << "), k(" << j << ")" << std::endl;
			Sleep(777);
		}
	}

}
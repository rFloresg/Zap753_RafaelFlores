/* 2022.24.10_Proyecto009_Array.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
Rafael Flores Galvan
Practica de arreglos*/

#include <iostream>
#include <string>
#include <Windows.h>


int main()
{
	std::string GameName[5];
	int GameYr[5];
	std::string GameAutor[5];

	std::cout << "Game Library!\n";

	for (int c = 0; c < 2; c++) {
		std::cout << "Enter Game Name:\n";
		std::getline (std::cin, GameName[c]);
		std::cout << "Enter Game Year:\n";
		std::cin >> GameYr[c];
		std::cin.ignore();
		std::cout << "Enter Game Autor:\n";
		std::getline(std::cin, GameAutor[c]);
		std::cout << "\nThanks! Next game!\n";
		Sleep(777);
		system("CLS");
	}
	for (int c = 0; c < 2; c++) {
		std::cout << "\nGame No. " << c + 1 << ":\n";
		std::cout << "Name: " << GameName[c] << std::endl;
		std::cout << "Year: " <<GameYr[c] << std::endl;
		std::cout << "Autor: " <<GameAutor[c] << std::endl;
	}
}
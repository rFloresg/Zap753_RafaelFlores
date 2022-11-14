/* 2022.11.07_Proyecto013_Objetos.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
Rafael Flores Galvan
Objetos */

#include <iostream>
#include <time.h>

struct players{
	int def;
	int hp;
	float atk;
	long speed;
}player;
int main()
{	
	srand(time(0));
	players Flores; 
	Flores.atk = rand() % 50;
	Flores.hp = rand() % 50;
	Flores.def = rand() % 50;
	Flores.speed = rand() % 50;
	
	players Julio;
	Juls.atk = rand() % 50;
	Juls.hp = rand() % 50;
	Juls.def = rand() % 50;
	Juls.speed = rand() % 50;

	if (Flores.atk < Juls.atk) {
		std::cout << "Juls poderoso";
	}
}
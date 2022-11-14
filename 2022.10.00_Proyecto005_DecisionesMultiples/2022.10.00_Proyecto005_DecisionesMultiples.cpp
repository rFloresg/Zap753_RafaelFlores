/*2022.10.00_Proyecto005_DecisionesMultiples.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
Rafael Flores Galvan
Practica de Switch y While*/

#include <iostream>
#include <string>
#include <cmath>

int main(){
	
	int sel = 0, num1 = 0, num2 = 0, temp = 0;
	float div1 = 0, div2 = 0, divTemp;
	
	std::cout << "Choose an option" << std::endl << "0) Add\n1) Substract\n2) Multiply\n3) Divide\n4)Power\n";
	std::cin >> sel;
	
	switch(sel){
		case 0:
			std::cout << "Enter 2 numbers" << std::endl;
			std::cin >> num1;
			std::cin >> num2;
			temp = num1 + num2;
			std::cout << temp;
			break;
		case 1:
			std::cout << "Enter 2 numbers" << std::endl;
			std::cin >> num1;
			std::cin >> num2;
			temp = num1 - num2;
			
			break;
		case 2:
			std::cout << "Enter 2 numbers" << std::endl;
			std::cin >> num1;
			std::cin >> num2;
			temp = num1 * num2;
			std::cout << temp;
			break;
		case 3:
			std::cout << "Enter 2 numbers" << std::endl;
			std::cin >> div1;
			std::cin >> div2;
			divTemp = div1 / div2;
			std::cout << divTemp;
			break;
		case 4: 
			std::cout << "Enter 2 numbers" << std::endl;
			std::cin >> div1;
			std::cin >> div2;
			divTemp= pow(div1, div2);
			std::cout <<  divTemp;
			break;
		default:
			std::cout << "That's not part of the options dude" << std::endl;
			break;}
}


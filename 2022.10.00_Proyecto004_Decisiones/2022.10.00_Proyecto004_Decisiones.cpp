/* 2022.10.00_Proyecto004_Decisiones.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí. /
Rafael Flores Galvan 
Practica de decisiones*/

#include<iostream>
#include<string>

int main(){

	bool login = false;
	int cont = 0;
	std::string name = "Rafa", inputName = "", password = "Minecraft", inputPass = "";



	std::cout << "Sys status: " << login << std::endl;
	std::cout << "Enter your username" << std::endl;
	std::getline(std::cin, inputName);
	if (name == inputName) {
		std::cout << "Username is correct" << std::endl;
		cont++;} else { std::cout << "Incorrect information" << std::endl; }
	std::cout << "Input your password" << std::endl;
	std::getline(std::cin, inputPass);
	if(password == inputPass) {
		std::cout << "Correct password" << std::endl;
		cont++;}
	if (cont < 2) {
		std::cout << "Incorrect information...." << std::endl;}
		login = false;
	if (cont == 2) {
		std::cout << "Login succesful" << std::endl;
		login = true;}
	std::cout << "System status: " << login << std::endl;

}
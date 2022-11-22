// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rafael Flores, adivina quien 

#include <iostream>
#include <string>

int main()
{
    int height = 0, hair = 0, human = 0, OrangeSuit = 0, Grandpa = 0;
    std::cout << "Adivina quien!\nPersonajes:\nGoku\nVegeta\nGohan\nKrilin\nYamcha\nRoshi\nTienShinHan\nPrimera pregunta: Tu personaje es alto?\n(1 si, 0 no)\n";
    std::cin >> height;
    if (height == 1) {
        system("CLS");
        std::cout << "Entendido, siguiente: Tu personaje es humano?!\n";
        std::cin >> human;
        if (human == 1) {
            std::cout << "Entendido, tu personaje tiene pelo?\n";
            std::cin >> hair;
            if (hair == 1) {
                std::cout << "En ese caso, tu personaje es: Yamcha";

            }
            else if (hair == 0) {
                std::cout << "En ese caso, tu personaje es TienShienHan";
            }
        }
        else if (human == 0) {
            std::cout << "Tu personaje usa un traje naranja?\n"; std::cin >> OrangeSuit;
            if (OrangeSuit == 1) {
                std::cout << "Tu personaje es abuelo?\n"; std::cin >> Grandpa;
                if (Grandpa == 1) {
                    std::cout << "Tu personaje es goku!";
                }
                else if (Grandpa == 0) {
                    std::cout << "Tu personaje es gohan!";
                }

            }
            else {
                std::cout << "Tu personaje es vegeta!";
            }

        }

    }
    else if (height == 0) {
        std::cout << "Tu personaje usa un traje naranja?\n";
        std::cin >> OrangeSuit;
        if (OrangeSuit == 1) {
            std::cout << "Tu personaje es krilin!";
        }
        else {
            std::cout << "Tu personaje es Roshi";
        }
    }



}
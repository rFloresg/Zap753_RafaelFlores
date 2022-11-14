/*2022.09.28_Proyecto002_OperadoresArtimeticos.cpp :  comienza y termina ahí.
Rafael Flores Galvan
Este programa muestra le uso de las operaciones aritmeticas*/ 


#include <iostream>
#include <string>
#include <cmath>


int main(){

    
    double doubNumber1, doubNumber2, tempAnswer;
    float floNumber1, floNumber2; 

    //Add
    std::cout.precision(12);
    std::cout << "Oh no! Your father just dropped your brand new PS5, \nquick we need to add 2 numbers in order to get the technitians phone number!" << std::endl;
    std::cout << std::endl << "Input random number!" << std::endl;
    std::cin >> floNumber1;
    std::cout << "Input a second number!" << std::endl;
    std::cin >> floNumber2;
    tempAnswer = floNumber1 + floNumber2;
    std::cout << "Quick! Call: " << tempAnswer << std::endl;
    //Sub
    std::cout << "Good job! Now, your mom needs helps with the bills!\n\nEnter a number to substract!" << std::endl;
    std::cin >> floNumber1;
    std::cout << "Nice, next number please!" << std::endl;
    std::cin >> floNumber2;
    tempAnswer = floNumber1 - floNumber2;
    std::cout << "Your mom still owes: " << tempAnswer << std::endl << std::endl;
    //Mult
    std::cout << "Guess what! Your just jumped off the window, quick\n\nEnter a number to multiply the speed of light!!" << std::endl;
    std::cin >> floNumber1;
    std::cout << "Nice, next number please!" << std::endl;
    std::cin >> floNumber2;
    tempAnswer = floNumber1 * floNumber2;
    std::cout << "Your cat will smash the ground at: " << tempAnswer << "MPH\n\n" << std::endl;
    //Div
    std::cout << "You wanna to share cookies w/ ur friends! \n\nEnter the number of cookies!" << std::endl;
    std::cin >> floNumber1;
    std::cout << "Nice, enter the number of friends!" << std::endl;
    std::cin >> floNumber2;
    tempAnswer = floNumber1 /floNumber2;
    std::cout << "That'd be: " << tempAnswer << " cookies per friend!\n\n" << std::endl;
    //Pow
    std::cout << "Okay lets show you reaaaal power!\n\nEnter A RANDOM NUMBER!" << std::endl;
    std::cin >> floNumber1;
    std::cout << "O<, A SECOND NUMBER!" << std::endl;
    std::cin >> floNumber2;
    tempAnswer = pow(floNumber1, floNumber2);
    std::cout << "Sheesh, LOOK AT THIS POWER: " << tempAnswer << " that's quite big!\n\n" << std::endl;
    //Sqrt
    std::cout << "Wanna see a root?\n\n Gimme a number mate" << std::endl;
    std::cin >> floNumber1;
    tempAnswer = sqrt(floNumber1);
    std::cout << "The Square root is " << tempAnswer << " nice" << std::endl;
}


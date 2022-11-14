//Rafael Flores
/*Aqui se conocera la syntasis para declarar variables
Solicitar, recibir y mostrar valores*/

#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

int main()
{
    int Age, HappyCheck;
    float HappyLevel;
    double PhoneNumber;
    char sex;
    std::string name;


    printf("Male or Female? (input M or F)\n");
    scanf_s("%c", &sex);
    std::cin.ignore();
    printf("Hello User! What's your name?\n");
    std::getline(std::cin, name);
    printf("Are you happy? (yes or no)\n");
    scanf_s("%d", &HappyCheck);
    printf("From 1.0 to 10.0, how happy are you?\n");
    scanf_s("%f", &HappyLevel);
    printf("What's your age?\n");
    scanf_s("%d", &Age);
    printf("Enter your phone number\n");
    scanf_s("%lf", &PhoneNumber);
    printf("%s is a %c\n HappyCheck = %d Happiness level of %f your age: %d btw your Phone number is: %lf ", name.c_str(), sex, HappyCheck, HappyLevel, Age, PhoneNumber);
}
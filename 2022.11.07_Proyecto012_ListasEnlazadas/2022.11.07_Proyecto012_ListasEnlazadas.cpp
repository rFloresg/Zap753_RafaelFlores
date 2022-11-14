/* 2022.11.07_Proyecto012_ListasEnlazadas.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
Rafael Flores Galvan 
Listas enlazadas */

#include <iostream>


class node {
    public:
        int age;
        std::string name;
        node* next; 
};


int main()
{
    node* Iker = NULL; 
    node* Tadeo = NULL;
    node* Jose = NULL; 
     
    Iker = new node();
    Tadeo = new node();
    Jose = new node();
    
    Iker->age = 18;
    Iker->name = "Iker";
    Iker->next - Tadeo;

    Tadeo->age = 18;
    Tadeo->name = "Tadeo";
    Tadeo->next = Jose;

    Jose->age = 18;
    Jose->name = "Jose";
    Jose->next = NULL;


}10
 

// 2022.11.29_Proyecto017_Producto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Rafael Flores Producto con recursividad

#include<iostream>


int mult(int n1, int n2) {
    if (n1 == 0 || n2 == 0){
        return 0;}
    
    if (n2 == 1){
        return n1;}

    if (n1 == 1){
        return n2;}
    
    else{
        return n1 + mult(n1, n2 - 1);}
}

int main(){
    int n1, n2;
    std::cout << "Ingrese 2 numeros\n";
    std::cin >> n1; std::cin >> n2;
    std::cout << "El producto es "<< mult(n1, n2) << std::endl;}


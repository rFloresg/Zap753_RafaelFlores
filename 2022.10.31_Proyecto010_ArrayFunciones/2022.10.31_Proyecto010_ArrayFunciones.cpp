/* 2022.10.31_Proyecto010_ArrayFunciones.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
Rafael Flores Galvan
PRactica de arrays y funcion sizeof*/

#include <iostream>
#include <cstdlib>



int main()
{
    int age1[3][3];
    int age2[5][5];
    int age3[10][10];
    int random = 0, r = 0, c = 0;
    srand(time(0));

//Matriz 3*3
    for (r = 0; r < sizeof(age1) / sizeof(age1[0]); r++) {
        for (c = 0; c < sizeof(age1[0]) / sizeof(age1[0][0]); c++) {
            random = rand() % 11;
            age1[r][c] = random;
        }
    }
        for (r = 0; r < sizeof(age1) / sizeof(age1[0]); r++) {
            for (c = 0; c < sizeof(age1[0]) / sizeof(age1[0][0]); c++) {
                
                std::cout << age1[r][c] << " ";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

//Martz 5*5
      for (r = 0; r < sizeof(age2) / sizeof(age2[0]); r++) {
        for (c = 0; c < sizeof(age2[0]) / sizeof(age2[0][0]); c++) {
            random = rand() % 11;
            age2[r][c] = random;
        }
    }
        for (r = 0; r < sizeof(age2) / sizeof(age2[0]); r++) {
            for (c = 0; c < sizeof(age2[0]) / sizeof(age2[0][0]); c++) {
                
                std::cout << age2[r][c] << " ";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

//Matriz 10*10
        for (r = 0; r < sizeof(age3) / sizeof(age3[0]); r++) {
            for (c = 0; c < sizeof(age3[0]) / sizeof(age3[0][0]); c++) {
                random = rand() % 11;
                age3[r][c] = random;
            }
        }
        for (r = 0; r < sizeof(age3) / sizeof(age3[0]); r++) {
            for (c = 0; c < sizeof(age3[0]) / sizeof(age3[0][0]); c++) {

                std::cout << age3[r][c] << " ";
            }
            std::cout << std::endl;
        }
}


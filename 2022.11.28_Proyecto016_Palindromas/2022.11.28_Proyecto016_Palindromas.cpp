// 2022.11.28_Proyecto016_Palindromas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Rafael Flores Palindromas 

#include<iostream>
#include<string>
#include<algorithm>


void pal(std::string word, int InPos, int FinPos) {
    if (InPos >= FinPos) {
        std::cout << "\nPalindroma!\n";
        exit(0);
    }
    if (word[InPos] == word[FinPos]) {
        pal(word, InPos + 1, FinPos - 1);
    }
    else { std::cout << "No Palindroma"; }
}

int main()
{
    std::string word;
    std::cout << "Introduce una palabra" << std::endl;;
    std::getline(std::cin, word);
    word.erase(remove_if(word.begin(), word.end(), isspace), word.end());
    //std::cout << word;
    pal(word, 0, word.size() - 1);

}

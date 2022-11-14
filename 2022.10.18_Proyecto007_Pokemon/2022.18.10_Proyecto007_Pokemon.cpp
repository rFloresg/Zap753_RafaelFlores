/* 2022.10.18_Proyecto007_Pokemon.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
Rafael Flores Galvan
Juego tipo pokemon*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>



int main() {
    int HeroSel = 0, Enemy = 0;
    std::string HeroName[3] = { "Krillin", "TienShinHan", "Roshi" };
    int PlayerHP = 100, EnemyHP = 100, PlayerMov = 0, EnemyMov = 0;
    float  PlayerATK = 0, EnemyATK = 0, PlayerDEF = 0, EnemyDEF = 0;

    std::cout << "Select a hero!\n1)Krillin (15 ATK // .8 DEF)\n2)TienShinHan (17 ATK // .9 DEF)\n3)Roshi (13 ATK // .7 DEF)\n";
    std::cin >> HeroSel;

    switch (HeroSel) {
    case 1:
        PlayerATK = 16, PlayerDEF = .6;
        EnemyATK = 22, EnemyDEF = .7;
        break;
    case 2:
        PlayerATK = 17, PlayerDEF = .5;
        EnemyATK = 28, EnemyDEF = .7;
        break;
    case 3:
        PlayerATK = 13; PlayerDEF = .3;
        EnemyATK = 20, EnemyDEF = .7;
    default:
        break;
    }
    if (HeroSel == 1 || HeroSel == 2 || HeroSel == 3) {
        do {
            srand(time(0));
            Enemy = rand() % 3;
        } while (HeroSel - 1 == Enemy);
        std::cout << "You've selected: " << HeroName[HeroSel - 1] << std::endl;
        std::cout << "You're opponent is: " << HeroName[Enemy] << std::endl;
        Sleep(2222);
        system("CLS");
        std::cout << "Let's Go!!!";
        system("CLS");

        do {
            system("CLS");
            EnemyMov = 0, PlayerMov = 0;
            std::cout << HeroName[HeroSel - 1]<< " " << PlayerHP << "\n" << HeroName[Enemy] <<  " " << EnemyHP << std::endl << "Input your next movement:\n1)Attack\n2)Defend\n";
            std::cin >> PlayerMov;

            srand(time(0));
            EnemyMov = 1 + rand() % 2;
            if (PlayerMov == 1 && PlayerMov == EnemyMov) {
                PlayerHP = PlayerHP - EnemyATK;
                EnemyHP = EnemyHP - PlayerATK;
                std::cout << "Oh wow, both players  attacked!\n";
                Sleep(1200);
            }

            if (PlayerMov == 2 && PlayerMov == EnemyMov) {
                std::cout << "Nothing has happened, both players took cover!\n";
            }

            if (PlayerMov == 1 && PlayerMov != EnemyMov) {
                EnemyHP = EnemyHP - (PlayerATK * EnemyDEF);
                std::cout << HeroName[HeroSel - 1] << " Attacked! " << HeroName[Enemy] << " Took cover!\n";
                Sleep(1200);

            }

            if (PlayerMov == 2 && PlayerMov != EnemyMov) {
                PlayerHP = PlayerHP - (EnemyATK * PlayerDEF);
                std::cout << HeroName[Enemy] << " Attacked! " << HeroName[HeroSel - 1] << " Took cover!\n";
                Sleep(1200);

            }

        } while (PlayerHP > 0 && EnemyHP > 0);

        if (PlayerHP < 1) {
            system("CLS");
            Sleep(777);
            std::cout << "YOU LOSE";
            Sleep(777);
        }
        if (EnemyHP < 1) {
            system("CLS");
            Sleep(777);
            std::cout << "YOU WIN";
            Sleep(777);
        }
    }
    else { std::cout << "That's not part of the options....Reboot and try again!"; }
}

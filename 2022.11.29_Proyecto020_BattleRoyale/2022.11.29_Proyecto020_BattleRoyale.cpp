// 2022.11.29_Proyecto020_BattleRoyale.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include <time.h>

class Game{
	public:
		bool Ongoing = true;
		int Shots = 0;
		int Deaths = 0;
		int RemainingP = 20;
}game;


class Players{
	public:
		std::string name;
		int HP = 0;
		int Luck = 0;
		int Atk = 0;
		bool lives = true;
}pl[20];


void Battle();


int main() {
	pl[1].name = "Rafa", pl[2].name = "Betsa", pl[3].name = "Julio",pl[4].name = "Arnulfo", pl[5].name = "Pepe", pl[6].name = "Dani", pl[7].name = "Alan", pl[8].name = "Yess";
	pl[9].name = "Pol", pl[10].name = "Miau", pl[11].name = "Kike", pl[12].name = "Iker", pl[13].name = "JuanFer", pl[14].name = "Fer";
	pl[15].name = "Cat", pl[16].name = "Joel", pl[17].name = "Pompa", pl[18].name = "DD", pl[19].name = "Pepe88";
	std::cout << "What's your name?\n";
	std::cin >> pl[0].name; 
	std::cout << "And the players are:\n\n";
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		pl[i].HP = 75 + rand() % 30;
		pl[i].Atk = 20 + rand() % 40;
		pl[i].Luck = 1 + rand() % 4;
	}
	for (int i = 0; i < 20; i++) {
		std::cout << i + 1 << ". " << pl[i].name <<"  /  HP: "<< pl[i].HP<<" ~~ Atk: "<<pl[i].Atk<<" ~~ Luck: "<<pl[i].Luck << std::endl; }
	system("Pause");
	system("CLS");
	std::cout << "In your marks, get set.....!\n";
	Sleep(2500);
	system("CLS");
	std::cout << "\tGOOOOOO!\t";
	std::cout << "\n\nPlayers remaining: " << game.RemainingP << std::endl;
	do {
		Battle();
		if (game.RemainingP < 2) { game.Ongoing = false; }
	} while (game.Ongoing);
	for (int i = 0; i < 20; i++) {
		if (pl[i].HP > 0) { std::cout << "\nGAME'S OVER\n\nWINNER: " << pl[i].name; }
	}
	
}



void Battle() {
	int p1 = rand()%20, p2 = rand()%20;
	if (pl[p1].lives == true && pl[p2].lives == true && p1 != p2) {
		std::cout << "\n\nPlayers remaining: " << game.RemainingP << std::endl;

		if (pl[p1].Luck > pl[p2].Luck) {
			
			std::cout << "\nPlayer: " << pl[p1].name << " vs Player: " << pl[p2].name << std::endl;
			pl[p2].HP = pl[p2].HP - (pl[p1].Atk / pl[p2].Luck);
			std::cout << "Woah, " << pl[p1].name << " Did some dmg to: " << pl[p2].name << std::endl;
			if (pl[p2].HP <= 0) { pl[p2].lives = false; game.RemainingP = game.RemainingP - 1; std::cout << "Player: " << pl[p2].name << " has been eliminated!"; }
			if(pl[p2].lives == true){
				pl[p1].HP = pl[p1].HP - (pl[p2].Atk / pl[p1].Luck);
				std::cout << "Ayo, " << pl[p2].name << " Landed a hit back on: " << pl[p1].name << std::endl;
				if (pl[p1].HP <= 0) { pl[p1].lives = false; game.RemainingP = game.RemainingP - 1; std::cout << "Player: " << pl[p1].name << " has been eliminated!"; }
			}
			Sleep(500);
		}
		else {
			std::cout << "\nPlayer: " << pl[p1].name << " vs Player: " << pl[p2].name << std::endl;
			pl[p1].HP = pl[p1].HP - (pl[p2].Atk / pl[p1].Luck);
			std::cout << "Woah, " << pl[p2].name << " Did some dmg to: " << pl[p1].name << std::endl;
			if (pl[p1].HP <= 0) { pl[p1].lives = false; game.RemainingP = game.RemainingP - 1; std::cout << "Player: " << pl[p1].name << " has been eliminated!"; }
			if (pl[p1].lives == true) {
				pl[p2].HP = pl[p2].HP - (pl[p1].Atk / pl[p2].Luck);
				std::cout << "Ayo, " << pl[p1].name << " Landed a hit back on: " << pl[p2].name << std::endl;
				if (pl[p2].HP <= 0) { pl[p2].lives = false; game.RemainingP = game.RemainingP - 1; std::cout << "Player: " << pl[p2].name << " has been eliminated!"; }
			}			
			Sleep(500);
		}
	}
}

// Radek (c) 2017
//

#include "stdafx.h"
#include "AMazeing.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void EndThis() {
	//Closing code
	cout << "type any value to end app..." << endl;
	string EndThisShit;
	cin >> EndThisShit;
}

int main()
{
	int DarkMaze[3][3];

	DarkMaze[0][0] = { 1 };
	//	DarkMaze[0][1] = { 1 };
	//	DarkMaze[0][2] = { 1 };
	//	DarkMaze[1][0] = { 1 };
	//	DarkMaze[1][1] = { 1 };
	//	DarkMaze[1][2] = { 1 };
	//	DarkMaze[2][0] = { 1 };
	//	DarkMaze[2][1] = { 1 };
	//	DarkMaze[2][2] = { 1 };

	//bad attempt to make some useable comment, it useless anyway 
	if (DarkMaze[0][0] == 1) {
		cout << "You have entered the Dark Maze" << endl; 
		system("pause");

		cout << "You have met " << EnemyName << endl << "You can attack it by typing 1 or 2" << endl << "1 - Sword (27-45 dmg)" << endl << "2 - SpiderKiller 1 time use (97 dmg)" << endl << "Or you can run by typing 3 (loosing 20% of power)" << endl;
		bool canUseSpiderKiller = 1;
		int Activity1;

		while (EnemyHealth > 0) {
			cout << "Chose your weapon" << endl;
			cin >> Activity1;
			if (Activity1 == 1) {
				srand(time(NULL));
				double a = rand() % 27 + 18;

				Player att;
				Player *p1 = &att;

				p1->attack(a);

				canBeAttacked = 1;

				cout << "You have " << PlayerHealth << " hp" << endl;
				system("pause");
			}
			if (Activity1 == 2 && canUseSpiderKiller == 1) {
				double b = 97;

				Player att;
				Player *p1 = &att;

				p1->attack(b);
				canUseSpiderKiller = 0;
				canBeAttacked = 1;

				cout << "You have " << PlayerHealth << " hp" << endl;
				system("pause");

			}
			if (Activity1 == 2 && canUseSpiderKiller == 0) {
				cout << "You dont have SpiderKiller anymore" << endl;
			}
			if (Activity1 == 3) {
				cout << "You are fearful idiot" << endl << "You have to fight " << EnemyName << " anyway" << endl;
				PlayerPower = PlayerPower * 0.8;
				canBeAttacked = 0;
				system("pause");

			}
			if (EnemyHealth <= 0) { cout << "You have deafeten " << EnemyName << endl; 
			DarkMaze[0][0] = { 0 }; 
			cout << "You have found Silver Sword, it'll be good for slaying monsters" << endl;
			}
			if (EnemyHealth > 0 && PlayerHealth > 0 && canBeAttacked == 1) {
				cout << "Now " << EnemyName << " attacks you!" << endl;
				srand(time(NULL));
				double c = rand() % 30 + 1;

				Spider s;
				Enemy *e1 = &s;

				e1->attack(c);

			}
			if (PlayerHealth <= 0) { cout << "YOU HAVE DIED!" << endl; EnemyHealth = 0; }
		};
	};
	if (DarkMaze[0][0] == 0) {
		cout << "Now you can go:" << endl << "1 - Right way, its kinda darker, but its Dark Maze anyway." << endl << "2 - Left way, the worst way." << endl << "3 - Just go straight forward" << endl;

		bool CanUseSilverSword = 1;
		bool DidWentStr = 0;
		int Activity2;
		int UsesOfSilverSword = 4;
		cin >> Activity2;

		if (Activity2 == 3) {
			cout << "You have went straight" << endl << "there is nothing" << endl << "You must go back" << endl << "Choose your way again" << endl;
			DidWentStr = 1;
			cin >> Activity2;

		}
		if (Activity2 == 2) {
				cout << ":(" << endl;
				cout << "You have met Stephan the Elder Dragon" << endl;
				cout << "You can attack it by typing 1 or 2" << endl << "1 - Sword (27-45 dmg)" << endl << "2 - Silver Sword 4 time use (230 dmg)" << endl << "Or you can run by typing 3 (loosing 10% of power)" << endl;

				int Activity3;
				EnemyHealth = 10000;
				EnemyName = "Stephan the Elder Dragon";


				cout << "Choose what you wanna do" << endl;
				cin >> Activity3;
					if (Activity3 == 1 || Activity3 == 2) {
						

							if (Activity3 == 1) {
								srand(time(NULL));
								double d = rand() % 27 + 18;

								Player att;
								Player *p1 = &att;

								p1->attack(d);

								canBeAttacked = 1;

								cout << "You have " << PlayerHealth << " hp" << endl;
								system("pause");
							}
							if (Activity3 == 2 && CanUseSilverSword == 1) {
								double f = 230;

								Player att;
								Player *p1 = &att;

								p1->ssAttack(f);

							}
							if (EnemyHealth > 0 && PlayerHealth > 0 && canBeAttacked == 1) {
								cout << "Now " << EnemyName << " attacks you!" << endl;
								srand(time(NULL));
								double e = rand() % 150 + 100;

								Spider s;
								Enemy *e1 = &s;

								e1->attack(e);

							}
							canBeAttacked = 1;
							if (PlayerHealth <= 0) { cout << "YOU HAVE DIED!" << endl; canBeAttacked = 0; }

					};
					if (Activity3 == 3 && DidWentStr == 0) {
						cout << "You are idiot, now you can go right or straight, type 1 or 3" << endl;
						PlayerPower = PlayerPower * 0.9;
						canBeAttacked = 0;
						cin >> Activity2;

					}
					if (Activity3 == 3 && DidWentStr != 0) {
						cout << "You are idiot, now you must go right way" << endl;
						PlayerPower = PlayerPower * 0.9;
						canBeAttacked = 0;
						Activity2 = 1;
						system("pause");
					}
				}
		if (Activity2 == 1) { 
			int Activity4;
			cout << "You are in big hall" << endl << "but its dark anyway" << endl; 
			system("pause");
			cout << "You see an old guy" << endl << "He says he can heal you" << endl << "What will you do?" << endl << endl << "1 - Ask him for healing" << endl << "2 - Attack him with you badass Silver Sword (230 dmg)" << endl;
			cin >> Activity4;
			if (Activity4 == 1) {
				cout << "Old guy heals you for" << endl << "'Go with peace' says old guy" << endl;
				double g = 15;

				Healer hel;
				Healer *p1 = &hel;

				p1->healing(g);
				cout << "You have " << PlayerHealth << " hp now" << endl;
			}
			if (Activity4 == 2) {
				cout << "idiiiiot"; //WRITE CODE FOR THIS FIGHT WITH HEALER
			}
		
		
		
		} //WORKING ON THIS PART

			
	};

	EndThis();
	return 0;

};
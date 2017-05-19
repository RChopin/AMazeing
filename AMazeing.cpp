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
	/*
	srand(time(NULL));
	float a = rand() % 10 + 1;

	Spider s;
	Enemy *e1 = &s;

	e1->attack(a);



	cout << PlayerHealth << " hp" << endl;
	system("pause");

	e1->attack(3);

	cout << PlayerHealth << " hp" << endl;
	*/
	//string EnemyName = "Capitan Spider";
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
			cout << "You are fearful idiot" << endl << "You have to fight spider anyway" << endl;
			PlayerPower = PlayerPower * 0.8;
			canBeAttacked = 0;
			system("pause");
			
		}
		if (EnemyHealth <= 0) { cout << "You have deafeten " << EnemyName << endl; }
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


	EndThis();
	return 0;
};
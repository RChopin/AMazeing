#pragma once
#include <iostream>
#include <string>
using namespace std;


bool canAttack = 1;
bool canBeAttacked = 1; 
double PlayerHealth = 100;
double EnemyHealth = 100;
double PlayerPower = 1;
string EnemyName = "Capitan Spider";



class Enemy {
public:
	virtual void attack(double AttackDmg) {}
};

class Spider : public Enemy {
public:
	void attack(double AttackDmg) {
		if (PlayerHealth > 0) { PlayerHealth -= AttackDmg; };
		cout << EnemyName << " attacked you, causing " << AttackDmg << " damage" << endl;
		cout << "You have " << PlayerHealth << " hp left" << endl;

	}
};

class Player : public Enemy {
public:
	void attack(double AttackDmg) {
		if (EnemyHealth > 0) { EnemyHealth -= (AttackDmg * PlayerPower); };
		cout << "You have attacked "<< EnemyName << ", causing " << AttackDmg*PlayerPower << " damage" << endl;
		cout << EnemyName << " have " << EnemyHealth << " hp left" << endl;

	}
};
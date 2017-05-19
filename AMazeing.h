#pragma once
#include <iostream>
#include <string>
using namespace std;


bool canAttack = 1;
bool canBeAttacked = 1; 
float PlayerHealth = 100;



class Enemy {
public:
	virtual void attack(float AttackDmg) {}

	//string EnemyName;

	
};

class Spider : public Enemy {
public:
	string EnemyName;
	void attack(float AttackDmg) {
		if (PlayerHealth >= AttackDmg) { PlayerHealth -= AttackDmg; };
		cout << EnemyName << " attacked you, causing " << AttackDmg << " damage" << endl;
		cout << "You have " << PlayerHealth << " hp left" << endl;

	}
};
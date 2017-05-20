#pragma once
#include <iostream>
#include <string>
using namespace std;


bool canAttack = 1;
bool canBeAttacked = 1; 
bool CanUseSilverSword = 0;
double PlayerHealth = 100;
double EnemyHealth = 100;
double PlayerPower = 1;
int UsesOfSilverSword = 4;
string EnemyName = "Capitan Spider";


class Enemy {
public:
	virtual void attack(double AttackDmg) {}
};

class Spider : public Enemy {
public:
	void attack(double AttackDmg) {
		if (PlayerHealth > 0) { PlayerHealth -= AttackDmg; };
		if (PlayerHealth < 0) { PlayerHealth = 0; };
		cout << EnemyName << " attacked you, causing " << AttackDmg << " damage" << endl;
		cout << "You have " << PlayerHealth << " hp left" << endl;
	}
};

class Player : public Enemy {
public:
	void attack(double AttackDmg) {
		if (EnemyHealth > 0) { EnemyHealth -= (AttackDmg * PlayerPower); };
		cout << "You have attacked " << EnemyName << ", causing " << AttackDmg*PlayerPower << " damage" << endl;
		cout << EnemyName << " have " << EnemyHealth << " hp left" << endl;
	}
	void ssAttack(double AttackDmg) {
		if (EnemyHealth > 0) { EnemyHealth -= (AttackDmg * PlayerPower); };
		cout << "You have attacked " << EnemyName << ", causing " << AttackDmg*PlayerPower << " damage" << endl;
		cout << EnemyName << " have " << EnemyHealth << " hp left" << endl;
		--UsesOfSilverSword;
		if (UsesOfSilverSword > 0) {
			cout << "You can use Silver Sword " << UsesOfSilverSword << " more times" << endl;
		}
		else {
			CanUseSilverSword = 0;
			cout << "You can't use Silver Sword anymore" << endl << endl;
		}
	}
};

class Rat : public Enemy {
public:
	void attack(double AttackDmg) {
		if (EnemyHealth > 0) { EnemyHealth -= (AttackDmg * PlayerPower); };
		cout << "You have attacked " << EnemyName << ", causing " << AttackDmg*PlayerPower << " damage" << endl;
		cout << EnemyName << " have " << EnemyHealth << " hp left" << endl;
	}
};
class Healer : public Enemy {
public:
	void attack(double AttackDmg) {
		if (EnemyHealth > 0) { EnemyHealth -= (AttackDmg * PlayerPower); };
		cout << "You have attacked " << EnemyName << ", causing " << AttackDmg*PlayerPower << " damage" << endl;
		cout << EnemyName << " have " << EnemyHealth << " hp left" << endl;
	}
	void healing(double HealingHP) {
		PlayerHealth += HealingHP;
	}
};
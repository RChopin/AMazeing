// Radek (c) 2017
//

#include "stdafx.h"
#include "AMazeing.h"
#include <iostream>
#include <ctime>
using namespace std;

void EndThis() {
	//Closing code
	cout << "type any value to end app..." << endl;
	string EndThisShit;
	cin >> EndThisShit;
}

int main()
{
	
	srand(time(NULL));
	float a = rand() % 10 + 1;

	Spider s;
	Enemy *e1 = &s;

	e1->attack(a);



	cout << PlayerHealth << "hp" << endl;
	system("pause");

	e1->attack(3);

	cout << PlayerHealth << "hp" << endl;



	EndThis();
	return 0;
};
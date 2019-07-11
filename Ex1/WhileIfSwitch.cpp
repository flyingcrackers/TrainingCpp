#include <iostream>
#include <string>

using namespace std;

int main() {
	string inputString;
	int storeInt = 0;
	while (true) {
		cout << "Input among choices: " << endl
			<< "flying" << endl
			<< "crackers" << endl
			<< "legendary" << endl
			<< "potato" << endl << endl;
		cout << "Choice: ";
		cin >> inputString;
		if (inputString == "flying") {
			storeInt = 1;
		}
		else if (inputString == "crackers") {
			storeInt = 2;
		}
		else if (inputString == "legendary") {
			storeInt = 3;
		}
		else if (inputString == "potato") {
			storeInt = 4;
		}
		else if (inputString == "exit") {
			break;
		}

		switch (storeInt) {
			case 1:
				cout << "Onlyfast - After every 8 yards Chou moves, his next basic attack will deal 180% of normal damage and shortly slow the target." << endl << endl;
				break;
			case 2:
				cout << "Jeetkunedo - Chou punches forward up to 3 times in a row.Each punch deals 180(+70 % Total Physical ATK) points of Physical Damage The first 2 attacks reduce target's movement speed 60%, the 3rd attack knocks nearby enemies into the air. The 3rd attack resets the cooldown of Shunpo." << endl << endl;
				break;
			case 3:
				cout << "Shunpo - Chou dashes a short distance, becoming immune to CC effects during the dash.After the dash, Chou increases his Physical Penetration by 15 points and obtains a Shield that can absorb 200(+150 % Extra Physical ATK) points of damage for 2s." << endl << endl;
				break;
			case 4:
				cout << "Thewayofdragon - Chou casts a roundhouse kick to knock back the target and deals 400(+200 % Extra Physical ATK) points of Physical Damage.Use the skill again to chase up the enemy in the air, dealing at least 400(+200 % Extra Physical ATK) points of Physical Damage." << endl << endl;
				break;
			default:
				cout << "Please choose among the choices." << endl << endl;
		}
	}
	system("pause");
}

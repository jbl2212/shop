#include<iostream>
using namespace std;
string inventory[10];
int main() {
	
	int room = 1;
	string input;

	cout << "You wake up in your cold dark and boreing room its time to get to work cleaning" << endl;

	do {
		cout << "heres your items:" << endl;
		for (int i = 0; i < 5; i++)
			cout << inventory[i] << endl;
		cout << endl << endl; 
		switch (room) {
		case 1:
			cout << "You are in room 1. you can go North." << endl;
			cin >> input;
			if (input == "N")
				room = 2;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 2:
			cout << "you are in room 2. You can go South, West, or you can go East" << endl;
			cin >> input;
			if (input == "S")
				room = 1;
			else if (input == "E")
				room = 4;
			else if (input == "W")
				room = 3;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 3:
			cout << "you are in room 3. You can go East." << endl;
			cin >> input;
			if (input == "E")
				room = 2;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 4:
			cout << "you are in room 4. You can go North or West ." << endl;
			cin >> input;
			if (input == "W")
				room = 2;
			else if (input == "N")
				room = 5;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 5:
			cout << "you are in room 5. You can go south" << endl;
			cin >> input;
			if (input == "S")
				room = 4;
			shop()

			else
				cout << "sorry, not an option." << endl;
			break;
		}

	} while (input != "q");
} 



void shop() {
	string input;
	do {

		cout << "welcome to my totally liscend bootle- i mean legit shop" << endl;
		cout << "press 'e' for ewok crisps, 'c' for level 2 key card, 'b' newish boots" << endl;
		cout << "press 'q' to quit" << endl;
		cin >> input; 
		if (input == "e") {
			inventory[0] = "ewok crisps";
		}
		else if (input == "c") {
			inventory[1] = "level 2 key card";
		}
		else if (input == "b") {
			inventory[2] = "newish boots";
		}
	} while (input != "q");
}

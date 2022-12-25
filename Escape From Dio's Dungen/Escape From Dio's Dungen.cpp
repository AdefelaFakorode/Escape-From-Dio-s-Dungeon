
#include <iostream>
using namespace std;

void showmenu() {
	cout << "****** Escape From Dio's Dungeon ******\n";
	cout << "	    1. Play Game\n";
	cout << "	    2. Quit Game\n";
}
void difficulty() {
	cout << "Choose a level of difficulty\n";
	cout << "	    1. Easy ♥ x 3\n";
	cout << "	    2. Normal ♥ x 2\n";
	cout << "	    3. Hard ♥ x 1\n";
}
void Chapter1() {
	char next = 'x';
	cout << "Please press 'x' to continue...\n";
	cin >> next;

	if (next == 'x')
		cout << "Chapter 1: Exodus\n";
	else
		cout << "Invalid Input";
}
void pressX() {
	char next = 'x';
	cout << "Please press 'x' to continue...\n";
	cin >> next;

	if (next == 'x')
		cout << "You are an adventurer trapped in Dio's Dungeon, find a way out with your life intact!\n";
	else
		cout << "Invalid Input";

}
void pressXscenerio1() {
	char next = 'x';
	cout << "Please press 'x' to continue...\n";
	cin >> next;

	if (next == 'x')
		cout << "You wake up and find yourself in a caged cell with a gaurd in front of the cell door...\n" << "You notice that the gaurd didn't take your pocket knife concealed around your ankle.\n" << "Along side you , across the room is a kid around the age of 14.\n" << "Before you could say a word to him...a gaurd barges into the cell and tries to take the kid away.\n" << "You have 2 choices...either leave the kid to be taken away...or help him...\n" << endl << "Which do you choose?\n" << "1. Leave the kid to be taken away.\n" << "2. Save the kid.\n";
	else
		cout << "Invalid Input";
}
void pressXscenerio2() {
	char next = 'x';
	cout << "Please press 'x' to continue...\n";
	cin >> next;

	if (next == 'x')
		cout << "Still under going maintnence\n";
	else
		cout << "Invalid Input";
}

void pressXscenerio3() {
	char next = 'x';
	cout << "Please press 'x' to continue...\n";
	cin >> next;

	if (next == 'x')
		cout << "While helping the kid you get into a fist fight with the gaurd...\n " << "You remeber you still have your pocker knife on you.";
	else
		cout << "Invalid Input";
}

int main()
{
	int choice;
	int number;


	showmenu();

	cout << "Option: ";
	cin >> choice;
	system("cls");

	do {
		switch (choice) // Difficulty
		{
		case 1:
			difficulty();
			cout << "Option: ";
			cin >> choice;
			system("cls");
			do {
				switch (choice) {

				case 1:
					cout << "You chose Easy.\n";
					pressX();
					Chapter1();
					pressXscenerio1();
					cout << endl << "Option: ";
					cin >> choice;


					do {
						switch (choice)
						{
						case 1:
							cout << "You chose to let the kid get taken away.\n";
							return 0;

						case 2:
							cout << "You chose to help the kid.\n";
							return 0;
						}

					} while (choice < 2);
					if (choice > 3) {
						cout << "Invalid Input\n";
						return 0;

					}

					return 0;

				case 2:
					cout << "Normal Mode is currently unavailable, select another difficulty.\n";
					return 0;

				case 3:
					cout << "Hard Mode is currently unavailable, select another difficulty.\n";
					return 0;
				}
				while (choice < 3);
				if (choice > 3) {
					cout << "Invalid Input.\n";
					difficulty();
					return 0;
				}

			} while (choice < 3);

			{

			}// sss



		case 2:
			cout << "GoodeBye!\n";
			return 0;
		}
	} while (choice < 2);


	// If you choose to "Quit Game"
	if (choice > 2)
	{
		cout << "Invalid Input.\n";
	}
	system("pause>0");
}

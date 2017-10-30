//Dice Roller 3.0 revision

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {

	int maxDie = 99;
	int numberDie, playerDie, sidesDie; //declares two int types, one for the number of die and one for the number side
	string yesNo;
	srand(time(0)); //seed random number generator based on time
  int randomNumber = rand(); //generates random number
	int xRolls = 1;

	do {

		cout <<"How many sides to the die?\n";
		cin >> sidesDie;
		cout <<"How many die?\n";
		cin >> playerDie;

		if (playerDie > maxDie){
      cout << "\n\nYou can only have a maximum of 99 die.";
			cout << "\nHow many die?\n";
      cin >> playerDie;
		}

		if (xRolls < playerDie){
			numberDie = (randomNumber % sidesDie) + 1;
			cout << numberDie;

		}else
			cout <<"Would you like to roll again?\n\n";
		  cin >> yesNo;

	}while
		(yesNo == "yes" || yesNo == "Yes" || yesNo == "yEs" || yesNo ==
    "yeS" ||yesNo == "YeS" || yesNo == "YEs" ||  yesNo == "yES"
    || yesNo == "YES");

		cout << "Cya next time!\n\n\n";

		//keeping the screen open
	  cout <<"Press Enter Key to Exit";
		cin.ignore(std::cin.rdbuf()->in_avail() +4);

		return 0;
}

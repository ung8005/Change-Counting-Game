//EXAM 1 PRACTICE 
//**********************************************************************
// File name:   main.cpp
// Author:      Ashley Ung 
// Date:        September 21, 2020
// Assignment:  Change Counting Game
// Purpose:     Change Counting Game  
// Computer OS: MacOS
//**********************************************************************

#include <iostream> 
using namespace std; 

int main () {
	
	const int PENNIES_IN_DOLLAR = 100;
	const int NICKELS_IN_DOLLAR = 20; 
	const int DIMES_IN_DOLLAR = 50;
	const int QUARTERS_IN_DOLLAR = 25; 
	
	double totalValue; 
	int pennies;
	int nickels; 
	int dimes; 
	int quarters; 
	int dollars = 0.0;
	
	cout << "The goal of this game is for you to enter the number off"
			 <<	" coins required to make exactly one dollar. " << endl;
	
	cout << "Enter the number of pennies: ";
	cin >> pennies; 
	cout << "Enter the number of nickels: ";
	cin >> nickels; 
	cout << "Enter the number of dimes: ";
	cin >> dimes;
	cout << "Enter the number of quarters: ";
	cin >> quarters; 
	
	//Convert pennies to dollars 
	dollars = pennies / PENNIES_IN_DOLLAR; 
	pennies = pennies % PENNIES_IN_DOLLAR; 
	
	//Convert nickels to dollars 
	dollars = dollars + (nickels / NICKELS_IN_DOLLAR);
	nickels = nickels % NICKELS_IN_DOLLAR; 
	
	//Convert dimes to dollars 
	dollars = dollars + (dimes / DIMES_IN_DOLLAR);
	dimes = dimes % DIMES_IN_DOLLAR;
	
	//Convert quarters to dollars 
	dollars = dollars + (quarters / QUARTERS_IN_DOLLAR);
	quarters = quarters % QUARTERS_IN_DOLLAR;
	
	//Calculate total value by adding total dollars 
	totalValue = dollars;
	cout << "The total value is: " << totalValue << endl;
	
	if (dollars == 1) {
		cout << "Congrats, you just won the game!" << endl;
	}
	else if (dollars >= 1) { 
		cout << "The total value was more than one dollar.";
	}
	else {
		cout << "The total value was less than one dollar.";
	}

	return 0;

}

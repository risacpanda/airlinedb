/*App.cpp
 *
 * The app.cpp file contains the main
 * and asks the user for input on finding, adding,
 * removing, and listing information about each flight and
 * passenger
 *
 * 
 * Assignment 2
 */

#include "Passenger.h"
#include "Passenger.cpp"
#include "OrderedLinkedList.h"
#include "LinkedList.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//4 Ordered Linked List with Flight1 = 100, Flight2 = 200, Flight3 = 300, Flight4 = 400
	OrderedLinkedList<Passenger> Flight1, Flight2, Flight3, Flight4;

	char userInput;
	string flightNum, first, surname, home, phone;
	bool found;

	cout << "***DELTA AIRLINES***" << endl;
	cout << "Please choose an operation: " << endl;
	cout << "A(ADD) | S(SEARCH) | D(DELETE | L(LIST) | Q(QUIT) " << endl;
	cin >> userInput;
	while (userInput != 'Q') {
		//Add a passenger
		if (userInput == 'A') {
			cout << "Enter flight number " << endl;
			cin >> flightNum;
			cout << "Enter first name: " << endl;
			cin >> first;
			cout << "Enter last name: " << endl;
			cin >> surname;
			cout << "Enter address: " << endl;
			cin >> home;
			cout << "Enter phone: " << endl;
			cin >> phone;
			//to insert in the corresponding flight list
			if (flightNum == "100") {
				Flight1.insert(first, surname, home, phone);
			}
			if (flightNum == "200") {
				Flight2.insert(first, surname, home, phone);
			}
			if (flightNum == "300") {
				Flight3.insert(first, surname, home, phone);
			}
			if (flightNum == "400") {
				Flight4.insert(first, surname, home, phone);
			}
		}

		//Search for a passenger
		if (userInput == 'S') {
			cout << "Enter last name: " << endl;
			cin >> surname;
			cout << "Enter first name: " << endl;
			cin >> first;
			cout <<"Flight number: " <<endl;
			cin >> flightNum;
			//search for passenger's info based on which flight
			if (flightNum == "100") {
				Flight1.search(first, surname);
			}
			if (flightNum == "200") {
				Flight2.search(first, surname);
			}
			if (flightNum == "300") {
				Flight3.search(first, surname);
			}
			if (flightNum == "400") {
				Flight4.search(first, surname);
			}

		}
		//Delete a passenger
		if (userInput == 'D') {
			cout << "Enter flight number " << endl;
			cin >> flightNum;
			cout << "Enter last name: " << endl;
			cin >> surname;
			cout << "Enter first name: " << endl;
			cin >> first;
			//deletes passenger from certain flight
			if (flightNum == "100") {
				Flight1.remove(first, surname);
			}
			if (flightNum == "200") {
				Flight2.remove(first, surname);
			}
			if (flightNum == "300") {
				Flight3.remove(first, surname);
			}
			if (flightNum == "400") {
				Flight4.remove(first, surname);
			}
			cout << "The passenger is deleted.";
		}
		//List passengers in a certain flight
		if (userInput == 'L') {
			cout << "Enter flight number " << endl;
			cin >> flightNum;
			if (flightNum == "100") {
				Flight1.list();
			}
			if (flightNum == "200") {
				Flight2.list();
			}
			if (flightNum == "300") {
				Flight3.list();
			}
			if (flightNum == "400") {
				Flight4.list();
			}
		}
	}
}

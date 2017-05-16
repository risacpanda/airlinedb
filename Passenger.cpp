/*
 * Passenger.cpp
 *
 *  Created on: May 13, 2017
 * This cpp file contains info
 * about the Passenger
 * Risa Chan
 * Assignment 2
 */

#include "Passenger.h"
#include <string>
#include <iostream>
using namespace std;

//Default constructor
Passenger::Passenger() {
	firstName = "";
	lastName = "";
	address = "";
	phoneNum = "";
}

//Constructor that takes passenger info and stores them
Passenger::Passenger(string first, string last, string home, string phone) {
	firstName = first;
	lastName = last;
	address = home;
	phoneNum = phone;
}

//Sets first name of passenger
void Passenger::setFirstName(string first) {
	firstName = first;
}

//Sets last name of passenger
void Passenger::setLastName(string last) {
	lastName = last;
}

//sets address of passenger
void Passenger::setAddress(string home) {
	address = home;
}

//sets phone number of passenger
void Passenger::setPhone(string phone) {
	phoneNum = phone;
}

//returns first name of passenger
string Passenger::getFirstName() {
	return firstName;
}

//returns last name of passenger
string Passenger::getLastName() {
	return lastName;
}

//returns address of passenger
string Passenger::getAddress() {
	return address;
}

//returns phone number of passenger
string Passenger::getPhone() {
	return phoneNum;
}

void printPassenger(Passenger &p) {
	cout<< p.firstName<< " " << p.lastName << endl;
	cout <<p.address<< endl;
	cout <<p. phoneNum << endl;
}

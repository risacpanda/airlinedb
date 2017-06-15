/*The header file of Passenger
 * 
 * Assignment 2
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_
#include <string>
using namespace std;

class Passenger {
protected:
	string firstName;
	string lastName;
	string address;
	string phoneNum;
public:
	Passenger();
	Passenger(string first, string last, string home, string phone);
	void setFirstName(string);
	void setLastName(string);
	void setAddress(string);
	void setPhone(string);
	string getFirstName();
	string getLastName();
	string getAddress();
	string getPhone();
	friend void printPassenger(Passenger &p);
};

#endif /* PASSENGER_H_ */

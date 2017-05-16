/*
 * LinkedList.h
 *This header file
 *contains the basic
 *linked list
 *
 *Risa Chan
 *Assignment 2
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <iostream>
#include "Passenger.h"
using namespace std;

template<class T>
struct node {
	T data;
	node<T> *next;
};

template <class T>
class LinkedList
{
protected:
	node<T>* head; //points to the front of the list
public:
	LinkedList();
	void list();
	void insert(T&, T&, T&, T&);
	void search(T&, T&);
	void remove(T&, T&);
	void destroylist();
	virtual ~LinkedList();
};

//constructor
template<class T>
LinkedList<T>::LinkedList()
{
	head = NULL;
}

//lists the contacts
template <class T>
void LinkedList<T>::list()
{
	node<T>* p = head;
    while (p!= NULL)
    {
		cout << p->firstName << " " << p->lastName <<" " << p->phoneNum <<endl;
		p = p->next;
	}
}

//to insert a new contact
template <class T>
void LinkedList<T>::insert(T& name, T& surname, T& home, T& phone) {
	node<T>* temp = new node<T>;
		temp->firstName = name;
		temp->lastName = surname;
		temp->phoneNum = phone;
		if (head == NULL)
		{
			head = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
}

//to search for a contact
template <class T>
void LinkedList<T>::search(T& name, T& surname)
{
	node<T>* p;
	p = head;
	while (p != NULL && p->firstName != name && p->lastName != surname)
	{
		p = p-> next;
	}
	if (p!=NULL)
	{
		cout << "Phone Number: " << p->phoneNum << endl;
	}
	if (p == NULL)
	{
		cout << "Not Found" << endl;
	}
}

//to remove a contact
template <class T>
void LinkedList<T>::remove(T& name, T& surname)
{
	node<T>*p, *q;
	//empty list
	if (head == NULL)
	{
		cout<<"List is empty"<<endl;
	}
	else
	{
		//first contact or only contact
		if(head-> firstName == name & head->lastName == surname)
		{
			p  = head;
			head = head->next;
			delete p;
		}
		else
		{
			p = head;
			q = head->next;
			//traversing the list
			while(q!=NULL && q->firstName != name && q->lastName != surname)
			{
				p = q;
				q = q->next;
			}
			//reached end of list with no contact found
			if (q == NULL)
			{
				cout <<"Contact not found"<<endl;
			}
			//delete contact
			else
			{
				p->next = q->next;
				delete q;
			}
		}
	}
}

//destroys the list
template <class T>
void LinkedList<T>::destroylist(){
	node<T>* p;
	while (head != NULL)
	{
		p = head;
		head = head->next;
		delete p;
	}
}

//destructor
template <class T>
LinkedList<T>::~LinkedList()
{
	destroylist();
}


#endif /* LINKEDLIST_H_ */

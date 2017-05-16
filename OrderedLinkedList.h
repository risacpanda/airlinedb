/*
 * OrderedLinkedList.h
 *This header file inherits from
 *LinkedList.h and turns it into an ordered Linked List by
 * Last Name in alphabetical order
 *
 * Risa Chan
 * Assignment 2
 */

#ifndef ORDEREDLINKEDLIST_H_
#define ORDEREDLINKEDLIST_H_
#include "LinkedList.h"
#include "Passenger.h"
#include <iostream>
using namespace std;

template <class T>
class OrderedLinkedList : public LinkedList<T>  {
		void insert(T&, T&, T&, T&);
		void search(T&, T&);
		void remove(T&, T&);
	};

	//to insert a new contact
	template <class T>
	void OrderedLinkedList<T>::insert(T& name, T& surname, T& home, T& phone)
	{
		node<T>* temp = new node<T>;
					node<T>* last;
					node<T>* current;
					temp-> firstName = name;
					temp-> lastName = surname;
					temp-> address = home;
					temp-> phoneNum = phone;

					if (head == NULL)
					{
						head = temp;
					}
					else
					{
						current = head;
						last = head;
						while (current != NULL && current -> lastName < surname) {
							last = current;
							current = current -> next;
						}
						//insert in the front
						if (current == head) {
							temp -> next = head;
							head = temp;
						}
						else {
							//insert between last and current or at end of list
							last -> next = temp;
							temp -> next = current;
						}
					}
	}

	//to search for a contact
	template <class T>
	void OrderedLinkedList<T>::search(T& name, T& surname)
	{
		node<T>* p;
		p = head;
		while (p != NULL && p->firstName != name && p->lastName != surname)
		{
			p = p-> next;
		}
		if (p!=NULL)
		{
			cout <<"First name: " << p->firstName << endl;
			cout <<"Last name: " << p-> lastName << endl;
		    cout <<"Address: " << p-> address << endl;
			cout << "Phone Number: " << p->phoneNum << endl;
		}
		if (p == NULL)
		{
			cout << "Passenger not Found" << endl;
		}
	}

	//to remove a contact
	template <class T>
	void OrderedLinkedList<T>::remove(T& name, T& surname)
	{
		node<T>*p, *q;
		//empty list
		if (head == NULL)
		{
			cout<<"Flight is empty"<<endl;
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
				//reached end of list with no passenger found
				if (q == NULL)
				{
					cout <<"Passenger not found"<<endl;
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

#endif /* ORDEREDLINKEDLIST_H_ */

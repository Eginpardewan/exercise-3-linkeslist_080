#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};

class CircularLinkedList {
private:
	Node* Last;
public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void addNode();
	bool search(int rillno, Node** previous, Node** current);
	bool listEmpty();
	bool delNode();
	void traverse();
};

void CircularLinkedList::addNode() {
	int nim;
	string na;
	cout << "\nEnter the rollnumber of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the student: ";
	cin >> na;
	Node* newNode = new Node();
	newNode->rollNumber = nim;
	newNode->name = na;
}


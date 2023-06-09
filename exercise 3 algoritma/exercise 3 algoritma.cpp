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

/*insert a node in the beginning of a double - linked list*/
if (LAST == NULL || nim <= LAST->rollNumber) {
	if (LAST != NULL && nim == LAST->rollNumber) {
		cout << "\nDuplicate number not allowed" << endl;
		return;
	}
	newNode->next = LAST; //step 3
	if (LAST != NULL)
		LAST->rollNumber = newNode; //step 4
	newNode->rollNumber = NULL; //step 5
	LAST = newNode; //step 6
	return;
}

bool CircularLinkedList::search(int rollno, Node** Dio, Node** Arya) {
	*Dio = LAST->next;
	*Arya = LAST->next;
	while (*Arya != LAST) {
		if (rollno == (*Arya)->rollNumber) {
			return true;
		} *
			Dio = *Arya;
		*Arya = (*Arya)->next;
	}
	if (rollno == LAST->rollNumber) {
		return true;
	}
	else {
		return false;
	}
}

bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}


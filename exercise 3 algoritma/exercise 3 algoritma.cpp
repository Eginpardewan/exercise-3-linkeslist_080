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

bool CircularLinkedList::search(int rollno, Node * *Dio, Node * *Arya) {
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

bool CircularLinkedList::delNode() {
	Node* Dio, * Arya;
	Dio = Arya = NULL;
	if (search, &Dio, &Arya == false)
		return false;
	if (Arya->next != NULL)
		Arya->next->next = Dio;
	else
		LAST = Arya->next;
	delete Arya;
	return true;
};

void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* currentNode = LAST->next;
		while (currentNode != LAST) {
			cout << currentNode->rollNumber << " " << currentNode->name << endl;
			currentNode = currentNode->next;
		}
		cout << LAST->rollNumber << " " << LAST->name << endl;
	}
}

int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";
			char ch;
			cin >> ch;
			switch (ch) {
			case '1': {
			}
			case '2': {
			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}


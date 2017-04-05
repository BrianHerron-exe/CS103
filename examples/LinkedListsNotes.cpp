#include <iostream>

using namespace std;

struct intItem(){
	int val;
	intItem* next;

};

class ListInt{
public:
	ListInt();
	~ListInt();
	


}

struct List(){

public:
	push_back(int v);

private:
	item* head;


}


////////////

to go through a linkedlist:

	item* temp = head;

	for(int i=0 ; i < n ; i++){
		temp = temp->next;
	}
	//now temp points to the nth element in the linkedlist
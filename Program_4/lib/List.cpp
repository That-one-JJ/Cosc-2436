#include <iostream>
#include <cstdlib>
#include <string>
#include "List.h"
using namespace std;

List::List(){
    //default constructor
    mySize = 0;
    first = NULL;
}

List::List( const List &source )
: mySize(source.mySize)
{
    Node * n = new Node();
    Node * tmp = new Node();
	Node * prev = new Node();	
	n = source.first;
    first = n;
	tmp = first;

    while (tmp != NULL ) {
        prev = tmp;
		n = n->next;
		tmp = tmp->next;
		tmp = n;
	}
}


List::~List(){
    Node * f = new Node();
    f = first;
    Node * current =  new Node(f->data);

    while (current != NULL)
    {
        Node * delval = new Node();
        delval = current;
        current = f->next;    
        delete(delval);
    }
    delete(current);
    delete(first);
}

const List & List::operator=(const List & rightside )
:mySize = rightside.mySize;

Node * n = new Node();
{
    n = rightside.first;
    Node * tmp = new Node();
	Node * prev = new Node();    
	first = n;
	tmp = first;

    while (n != NULL ) {
        prev = tmp;
	tmp = tmp->next;
	n = n->next;		
	tmp = n;

    	}
return * this;
}
int List::getSize() const{
    return mySize;
}

bool List::empty( ) const{
    if (mySize != 0)
        return 0;
    else
        return 1;
}

void List::insert(ElementType dataVal, int index ){
    if (0 <=index, index <= mySize, mySize > 0){
        Node * newNode = new Node(dataVal);
        Node * prev = new Node();
        Node * curr = new Node();
        curr = first;
        for( int i = 0; i < index; i ++){
			if(curr != NULL){
				prev = curr;
            	curr = curr->next;
            	}
			}
        prev->next = newNode;
        newNode->next = curr;
        mySize += 1;
    }
    else if (0 <=index, index <= mySize, mySize == 0){
        Node * newNode = new Node(dataVal);
        first = newNode;
        mySize += 1;
    }
}

void List::erase(int index){
    if (0 <=index, index <= mySize){
        Node * prev = new Node();
        Node * curr = new Node();
        Node * delval = new Node();
        curr = first;
        for( int i = 0; i < index; i ++){
            prev = curr;
            curr = curr->next;
            }
        delval = curr;
        curr = curr->next;
        delete delval;
        prev->next = curr;
        mySize -= 1;
    }
}    

void List::display(ostream & out) const
{
    Node * curr = new Node();
    curr = first;
    for (int i = 0; i < mySize; i++){
      out << curr->data << "  ";
      curr = curr->next;
    }
}

//--- Definition of output operator
ostream & operator<< (ostream & out, const List & aList)
{
   aList.display(out);
   return out;
}

int List::find( ElementType value) const{
    int index = 0;
    ElementType rvalue;
	ElementType lvalue;
	lvalue = value;
    Node * n = new Node();    
	n = first;
	rvalue = n->data;
	int error = 0;	
   	while(lvalue != rvalue){

		rvalue = n->data;
		if (n != NULL && (lvalue != rvalue)){
				

			n = n->next;
			index += 1;
		}

		if ((n == NULL) && (lvalue != rvalue)){
			error = 1;
			break;
		}
    }
    if(error == 0)
		cout <<  endl << "The first occurence of item " << value 
        << " is at index position " << index;
	else if(error == 1)
		cout << endl << "Your item is not present in the list" << endl;
}





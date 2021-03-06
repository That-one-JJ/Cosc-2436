/*-- DList.h --------------------------------------------------------------
 
  This header file defines the data type List for processing lists.
  Basic operations are:
     Constructor
     Destructor
     Copy constructor
     Assignment operator
     empty:    Check if list is empty
     insert:   Insert an item
     erase:    Remove an item
     display:  Output the list
     << :      Output operator
-------------------------------------------------------------------------*/

#include <iostream>

#ifndef DLIST
#define DLIST

typedef int ElementType;
class List
{
 public:
 /******** Function Members ********/
   /***** Class constructor *****/
   List(int maxSize = 1024);
   /*----------------------------------------------------------------------
     Construct a List object.

     Precondition:  maxSize is a positive integer with default value 1024.
     Postcondition: An empty List object is constructed; myCapacity ==
         maxSize (default value 1024); myArray points to a dynamic
         array with myCapacity as its capacity; and mySize is 0.
   -----------------------------------------------------------------------*/

   /***** Class destructor *****/
   ~List();
   /*----------------------------------------------------------------------
     Destroys a List object.

     Precondition:  The life of a List object is over.
     Postcondition: The memory dynamically allocated by the constructor
         for the array pointed to by myArray has been returned to the heap.
   -----------------------------------------------------------------------*/

   /***** Copy constructor *****/
   List(const List & origList);
   /*----------------------------------------------------------------------
     Construct a copy of a List object.

     Precondition:  A copy of origList is needed; origList is a const
         reference parameter. 
     Postcondition: A copy of origList has been constructed.
   -----------------------------------------------------------------------*/

      /***** Copy constructor *****/
   List( int newCapacity, const List & origList );
   /*----------------------------------------------------------------------
     Construct a copy of a List object into an array with a bigger user
     set capacity.

     Precondition:  A copy of origList is needed; origList is a const
         reference parameter. The user's wanted capicty is also needed.
         If the newcapacity is less than or equal to the original capacity,
         The operation is not performed.
     Postcondition: A copy of origList has been constructed.
   -----------------------------------------------------------------------*/
    
   int getSize( ) const;
   /*----------------------------------------------------------------------
     Return the size of the list

     Precondition:  None.
     Postcondition: The return value is the number of elements in the list
         (the list size).
   -----------------------------------------------------------------------*/

   int getCapacity( ) const;
   /*----------------------------------------------------------------------
     Return the capacity of the list

     Precondition:  None.
     Postcondition: The return value is the maximum number of elements that the      list can hold
         (the list capacity).
   -----------------------------------------------------------------------*/


   void setCapacity( int newCapacity);
   /*----------------------------------------------------------------------
     Change the capacity of the list

     Precondition:  None.
     Postcondition: The list's current capacity is changed to newCapacity
         (but not less than the number of items already in the list).
   -----------------------------------------------------------------------*/    

   /***** Assignment operator *****/
   const List & operator=(const List & rightHandSide);
   /*----------------------------------------------------------------------
     Assign a copy of a List object to the current object.

     Precondition: none 
     Postcondition: A copy of rightHandSide has been assigned to this
         object. A const reference to this list is returned.
   -----------------------------------------------------------------------*/



   /***** empty operation *****/
   bool empty() const;
   //--- See Figure 6.1 for documentation

   /***** insert and erase *****/
   void insert( ElementType item, int pos);
   //--- See Figure 6.1 for documentation (replace CAPACITY with myCapacity)

   void erase(int pos);
   //--- See Figure 6.1 for documentation

    void addrandint(int num_ofints);
    //-- adds random integers into the list

   /***** output *****/
   void display(ostream & out) const;
   //--- See Figure 6.1 for documentation

 private:
 /******** Data Members ********/
   int mySize;                // current size of list
   int myCapacity;            // capacity of array
   ElementType * myArray;     // pointer to dynamic array

}; //--- end of List class

//------ Prototype of output operator
ostream & operator<< (ostream & out, const List & aList);

#endif



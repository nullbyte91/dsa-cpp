/*
Header file - list 
List is a sequence container which takes constant time in inserting and removing elements. List in STL is implemented as Doubly Link List.

The elements from List cannot be directly accessed. For example to access element of a particular position ,you have to iterate from a known position to that particular position.

Declaration:
list <int> LI;

Member function:
begin( ): It returns an iterator pointing to the first element in list.Its time complexity is O(1).
end( ): It returns an iterator referring to the theoretical element(doesn’t point to an element) which follows the last element.Its time complexity is O(1).
empty( ): It returns whether the list is empty or not.It returns 1 if the list is empty otherwise returns 0.Its time complexity is O(1).
assign( ): It assigns new elements to the list by replacing its current elements and change its size accordingly.It time complexity is O(N).
back( ): It returns reference to the last element in the list.Its time complexity is O(1).
erase( ): It removes a single element or the range of element from the list.Its time complexity is O(N).
front( ): It returns reference to the first element in the list.Its time complexity is O(1).
push_back( ): It adds a new element at the end of the list, after its current last element. Its time complexity is O(1).
push_front( ): It adds a new element at the beginning of the list, before its current first element. Its time complexity is O(1).
remove( ): It removes all the elements from the list, which are equal to given element. Its time complexity is O(N).
pop_back( ): It removes the last element of the list, thus reducing its size by 1. Its time complexity is O(1).
pop_front( ): It removes the first element of the list, thus reducing its size by 1. Its time complexity is O(1).
insert( ): It insert new elements in the list before the element on the specified position. Its time complexity is O(N).
reverse ( ): It reverses the order of elements in the list. Its time complexity is O(N).
size( ): It returns the number of elements in the list. Its time complexity is O(1).
*/

#include <iostream>
#include <cstdio>
#include <list>
#define MAX_SIZE 10

using namespace std;

int
main(int argc, char** argcv){
    // craete a empty list 
    list <int> l1;

    // create a iterator for int datatype list
    list <int>::iterator it;

    for (int i=0; i<MAX_SIZE; i++){
        l1.push_back(i);
    }
    
    cout << "Elements in the list l1\n";
    
    for (it=l1.begin(); it != l1.end(); it++){
        cout << *(it) << " ";
    }
    putchar('\n');
    
    for (int i=0; i<MAX_SIZE; i++){
        l1.pop_back();
    }

    if (l1.empty()){
        cout << "Stack is empty\n";
    }


    return 0;
}
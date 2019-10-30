/*
Header file - stack
Stack is a container which follows the LIFO (Last In First Out) order and the elements are inserted and 
deleted from one end of the container. The element which is inserted last will be extracted first.

Declaration:
stack <int> s;

Member function:
push( ) : Insert element at the top of stack. Its time complexity is O(1).
pop( )  : removes element from top of stack. Its time complexity is O(1).
top( )  : access the top element of stack. Its time complexity is O(1).
empty( ): checks if the stack is empty or not. Its time complexity is O(1).
size( ) : returns the size of stack. Its time complexity is O(1).

Limitation:
Stack stl implementation can traversal/iterate
*/

#include <iostream>
#include <stdio.h>
#include <stack>
#define MAX_SIZE 5

using namespace std;

int
main(int argc, char** argcv){
    stack <int> s;

    for (int i=0; i<MAX_SIZE; i++){
        s.push(i);
    }

    cout << "Stack - Size:" << s.size() << endl;

    for (int i=0; i<MAX_SIZE; i++){
        cout << s.top() << " ";
        s.pop();
    }
    putchar('\n');
    
    if (s.empty()){
        cout << "Stack is empty\n";
    }

    return 0;
}
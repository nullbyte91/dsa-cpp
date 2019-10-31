/*
Header file - unordered_set
An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so 
that the insertion is always randomized. All operations on the unordered_set takes constant time O(1) on 
an average which can go up to linear time O(n) in worst case which depends on the internally used hash function, 
but practically they perform very well and generally provide a constant time lookup operation.
The unordered_set can contain key of any type – predefined or user-defined data structure but when we define 
key of type user define the type, we need to specify our comparison function according to which keys will be compared.

Declaration:
unsorted_set <int> uset;

Member function:
push( ) : Insert element at the top of stack. Its time complexity is O(1).
pop( )  : removes element from top of stack. Its time complexity is O(1).
top( )  : access the top element of stack. Its time complexity is O(1).
empty( ): checks if the stack is empty or not. Its time complexity is O(1).
size( ) : returns the size of stack. Its time complexity is O(1).
*/

#include <iostream>
#include <unordered_set>
#include <cstdio>
#define MAX_SIZE 10

using namespace std;

int
main(int argc, char** argcv){
    unordered_set <int> uset;

    for (int i =0 ; i<MAX_SIZE; i++){
        uset.insert(i);
    }

    int key = 4;

    if (uset.find(key)  == uset.end()){
        cout << "Key not found";
    } else {
        cout << "Key found : " << key << endl;
    }

    unordered_set <int>::iterator it;

    for (it=uset.begin(); it != uset.end(); it++){
        cout << *(it) << endl;
    }
    putchar('\n');
    return 0;
}
/*
Header file - utility 
Stack is a container which follows the LIFO (Last In First Out) order and the elements are inserted and 
deleted from one end of the container. The element which is inserted last will be extracted first.

Declaration:
pair <int, char> p1;
*/

#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int
main(int argc, char** argcv){
    pair <char, int> pair1;

    pair1 = make_pair('a', 1);
    cout << pair1.first << " " << pair1.second << endl;
    return 0;
}
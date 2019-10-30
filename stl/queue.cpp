/*
Header file - queue 
Queue is a container which follows FIFO order (First In First Out) . 
Here elements are inserted at one end (rear ) and extracted from another end(front) .

Declaration:
queue <int> q;

Member function:
push( ): inserts an element in queue at one end(rear ). Its time complexity is O(1).
pop( ): deletes an element from another end if queue(front). Its time complexity is O(1).
front( ): access the element on the front end of queue. Its time complexity is O(1).
empty( ): checks if the queue is empty or not. Its time complexity is O(1).
size( ): returns the size of queue. Its time complexity is O(1).

Limitation:
Queue stl implementation can traversal/iterate
*/

#include <iostream>
#include <cstdio>
#include <queue>
#define MAX_SIZE 5

using namespace std;

int
main(int argc, char** argcv){
    queue <int> q;

    for (int i=0; i<MAX_SIZE; i++){
        q.push(i);
    }

    cout << "Size of the Queue:" << q.size() << endl;
    
    for (int i=0; i<MAX_SIZE; i++){
        cout << q.front() << " ";
        q.pop();
    }
    putchar('\n');

    if (q.empty()){
        cout << "Queue is empty\n";
    }

    return 0;
}

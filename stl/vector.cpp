/*
Header file - vector 
Vectors are sequence containers that have dynamic size. In other words, vectors are dynamic arrays. 
Just like arrays, vector elements are placed in contiguous storage location so they can be accessed 
and traversed using iterators. To traverse the vector we need the position of the first and last 
element in the vector which we can get through begin() and end() or we can use indexing from 0 to size(). 
Let us see how to construct a vector.
The elements from List cannot be directly accessed. For example to access element of a particular position ,
you have to iterate from a known position to that particular position.

Declaration:
vector<int> a;

Member function:
at(): Returns the reference to the element at a particular position (can also be done using ‘[ ]’ operator). Its time complexity is O(1).
back(): Returns the reference to the last element. Its time complexity is O(1).
begin(): Returns an iterator pointing to the first element of the vector. Its time complexity is O(1).
clear(): Deletes all the elements from the vector and assign an empty vector. Its time complexity is O(N) where N is the size of the vector.
empty(): Returns a boolean value, true if the vector is empty and false if the vector is not empty. Its time complexity is O(1).
end(): Returns an iterator pointing to a position which is next to the last element of the vector. Its time complexity is O(1).
erase(): Deletes a single element or a range of elements. Its time complexity is O(N + M) where N is the number of the elements erased and M is the number of the elements moved.
front(): Returns the reference to the first element. Its time complexity is O(1).
insert(): Inserts new elements into the vector at a particular position. ts time complexity is O(N + M) where N is the number of elements inserted and M is the number of the elements moved .
pop_back(): Removes the last element from the vector. Its time complexity is O(1).
push_back(): Inserts a new element at the end of the vector. Its time complexity is O(1).
resize(): Resizes the vector to the new length which can be less than or greater than the current length. Its time complexity is O(N) where N is the size of the resized vector.
size(): Returns the number of elements in the vector. Its time complexity is O(1).
*/


#include <iostream>
#include <vector>

using namespace std;

int
main(int argc, char** argcv){
    vector <int> v;
    vector <int>::iterator it;
    v.push_back(5);
    while(v.back() > 0)
        v.push_back(v.back() - 1);
    for(it = v.begin(); it != v.end();++it)
        cout << *it << ' ';
    cout << endl;
    for(int i = 0;i < v.size();++i)
        cout << v.at(i) << ' ';
    cout << endl;
    while(!v.empty())
    {
        cout << v.back() << ' ';
        v.pop_back();
    }
    cout << endl;
    return 0;
}
/*
Header file - set 
Sets are containers which store only unique values and permit easy look ups. 
The values in the sets are stored in some specific order (like ascending or descending). 
Elements can only be inserted or deleted, but cannot be modified. We can access and traverse set elements using iterators just like vectors.

Declaration:
set <int> set1;

Member function:
begin(): Returns an iterator to the first element of the set. Its time complexity is O(1).
clear(): Deletes all the elements in the set and the set will be empty. Its time complexity is O(N) where N is the size of the set.
count(): Returns 1 or 0 if the element is in the set or not respectively. Its time complexity is O(logN) where N is the size of the set.
empty(): Returns true if the set is empty and false if the set has at least one element. Its time complexity is O(1).
end(): Returns an iterator pointing to a position which is next to the last element. Its time complexity is O(1).
erase(): Deletes a particular element or a range of elements from the set. Its time complexity is O(N) where N is the number of element deleted.
find(): Searches for a particular element and returns the iterator pointing to the element if the element is found otherwise it will return the iterator returned by end(). Its time complexity is O(logN) where N is the size of the set.
insert(): insert a new element. Its time complexity is O(logN) where N is the size of the set.
size(): Returns the size of the set or the number of elements in the set. Its time complexity is O(1).
*/

#include <iostream>
#include <set>
#include <cstdio>

using namespace std;

int
main(int argc, char** argcv){
    set <int> set1;
    int a[] = {6, 7, 8, 9, 1, 2, 3, 4, 0};
    int len = sizeof(a)/sizeof(a[0]);

    cout << "Before inserting to set container\n";
    for (int i=0; i<len; i++){
        cout << a[i] << " ";
    }
    putchar('\n');

    for (int i=0; i<len; i++){
        set1.insert(a[i]);
    }

    cout << "After inserting to set container\n";
    set <int>::iterator it;

    for (it=set1.begin(); it!=set1.end(); it++){
        cout << *(it) << " ";
    }
    
    putchar('\n');

    return 0;
}

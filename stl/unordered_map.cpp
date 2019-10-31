/*
Header file - unordered_map 
unordered_map is an associated container that stores elements formed by combination of key value and a mapped value. 
The key value is used to uniquely identify the element and mapped value is the content associated with the key. 
Both key and value can be of any type predefined or user-defined.
Internally unordered_map is implemented using Hash Table, the key provided to map are hashed into indices of hash 
table that is why performance of data structure depends on hash function a lot but on an average the cost of search, 
insert and delete from hash table is O(1).

Declaration:
unordered_map<string, int> umap;

Member function:
at(): This function in C++ unordered_map returns the reference to the value with the element as key k.
begin(): Returns an iterator pointing to the first element in the container in the unordered_map container
end(): Returns an iterator pointing to the position past the last element in the container in the unordered_map container
bucket(): Returns the bucket number where the element with the key k is located in the map.
bucket_count: bucket_count is used to count the total no. of buckets in the unordered_map. No parameter is required to pass into this function.
bucket_size: Returns number of elements in each bucket of the unordered_map.
count(): Count the number of elements present in an unordered_map with a given key.
equal_range: Return the bounds of a range that includes all the elements in the container with a key that compares equal to k.
*/

#include <iostream>
#include <cstdio>
#include <unordered_map>

using namespace std;

int
main(int argc, char** argcv)
{
    unordered_map <string, int> mp;

    // Insert value by [] operator
    mp["a"] = 1;
    mp["b"]= 2;

    // Insert value by insert function
    mp.insert(make_pair("c", 3));

    // create a iterator
    unordered_map <string, int>::iterator it;
    // Search the Key
    if (mp.find("b") == mp.end()){
        cout << "Key not found " << endl;
    } else {
        it = mp.find("b");
        cout << "key found and the value" << it->second;
    }

    for (it=mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl; 
    }
    putchar('\n');
    
    return 0;
}

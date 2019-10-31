/*
Header file - map 
Maps are containers which store elements by mapping their value against a particular key. 
It stores the combination of key value and mapped value following a specific order. 
Here key value are used to uniquely identify the elements mapped to it. 
The data type of key value and mapped value can be different. Elements in map are always in sorted order by their corresponding 
key and can be accessed directly by their key using bracket operator ([ ]).

In map, key and mapped value have a pair type combination,i.e both key and mapped value can be accessed using pair 
type functionalities with the help of iterators.

Declaration:
map <char ,int > mp;
mp[‘b’]  = 1;
mp[‘a’] = 2;

Member function:
Note: N is the number of elements in map.
Some Member Functions of map:
at( ): Returns a reference to the mapped value of the element identified with key.Its time complexity is O(logN).
count( ): searches the map for the elements mapped by the given key and returns the number of matches.As map stores each element with unique key, then it will return 1 if match if found otherwise return 0.Its time complexity is O(logN).
clear( ): clears the map, by removing all the elements from the map and leaving it with its size 0.Its time complexity is O(N).
begin( ): returns an iterator(explained above) referring to the first element of map.Its time complexity is O(1).
end( ): returns an iterator referring to the theoretical element(doesn’t point to an element) which follows the last element.Its time complexity is O(1).
empty( ): checks whether the map is empty or not. It doesn’t modify the map.It returns 1 if the map is empty otherwise returns 0.Its time complexity is O(1).
erase( ): removes a single element or the range of element from the map.
find( ): Searches the map for the element with the given key, and returns an iterator to it, if it is present in the map otherwise it returns an iterator to the theoretical element which follows the last element of map.Its time complexity is O(logN).
insert( ): insert a single element or the range of element in the map.Its time complexity is O(logN), when only element is inserted and O(1) when position is also given.
*/

#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int
main(int argc, char** argcv){
    map <char, int> mp;

    mp.insert(pair<char, int> ('a', 1));
    mp.insert(pair<char, int> ('b', 2));
    mp.insert(pair<char, int> ('c', 3));

    map <char, int>::iterator it;
    it = mp.find('a');
    cout << "Search Key: "<<it->first << " " << "Value:" << it->second << endl;
    
    for (it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

        if(mp.empty())
    {
        cout<<"Map is empty"<<endl;
    }
    else
    {
        cout<<"Map is not empty"<<endl;
    }
    return 0;
}
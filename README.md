# dsa-c-
Data structure C++ implementation

### Difference Between Vector and list in STL Lib:
List stores elements at non contiguous memory location and Internally its uses a double linked list.

Vector stores elements at contiguous memeory location like an array.

1. Insertion and Deletion:
Insertion and Deletion in List is very efficient as compared to vector because to insert an element in list at start, end or middle, internally just a couple of pointers are swapped.

Whereas, in vector insertion and deletion at start or middle will make all elements to shift by one. Also, if there is insufficient contiguous memory in vector at the time of insertion, then a new contiguous memory will be allocated and all elements will be copied there.

So, insertion and deletion in list is much efficient than vector in c++

2. Random Access:
As List is internally implemented as doubly linked list, therefore no random access is possible in List. It means, to access 15th element in list we need to iterate through first 14 elements in list one by one.

Whereas, vector stores elements at contiguous memory locations like an array. Therefore, in vector random access is possible i.e. we can directly access the 15th element in vector using operator [] i.e.

Constructors:
```c++
vector<T> v;              Make an empty vector.                                     O(1)
vector<T> v(n);           Make a vector with N elements.                            O(n)
vector<T> v(n, value);    Make a vector with N elements, initialized to value.      O(n)
vector<T> v(begin, end);  Make a vector and copy the elements from begin to end.    O(n)
```

Accessors:
```c++
v[i]          Return (or set) the I'th element.                        O(1)
v.at(i)       Return (or set) the I'th element, with bounds checking.  O(1)
v.size()      Return current number of elements.                       O(1)
v.empty()     Return true if vector is empty.                          O(1)
v.begin()     Return random access iterator to start.                  O(1)
v.end()       Return random access iterator to end.                    O(1)
v.front()     Return the first element.                                O(1)
v.back()      Return the last element.                                 O(1)
v.capacity()  Return maximum number of elements.                       O(1)
```

Modifiers:
```c++
v.push_back(value)         Add value to end.                                                O(1) (amortized)
v.insert(iterator, value)  Insert value at the position indexed by iterator.                O(n)
v.pop_back()               Remove value from end.                                           O(1)
v.assign(begin, end)       Clear the container and copy in the elements from begin to end.  O(n)
v.erase(iterator)          Erase value indexed by iterator.                                 O(n)
v.erase(begin, end)        Erase the elements from begin to end.
```

Containers and Adapters in C++?
A container is a specific data structure that contains data, usually in an unbounded amount. Each container type has limitations on how to access, add, or remove data efficiently.

Below are a few examples of containers using STL classes.

Sequence Containers
Here are the sequence containers, meaning the data is reliably ordered (that is, there is a front and a back to them. I do NOT mean that they automatically sort themselves!).

A vector is a bit like a flexibly-sized array. Vectors are random-access, meaning you can access any element with integer index in constant time (just like an array). You can add or remove from the end of the array in (nearly) constant time as well. Anywhere else, though, and you're probably looking at having to recopy potentially all of the elements.
A deque, or double-ended queue, is like a vector but you can add to the front or the back. You can still access elements in constant time, but deque elements are not guaranteed to be contiguous in memory like vectors or arrays.
A list is a linked list, meaning data which are linked together by pointers. You have constant-time access to the beginning and the end, but in order to get anywhere in the middle you need to iterate through the list. You can add elements anywhere in the list in constant time, though, if you already have a pointer to one of the nearby nodes.
Associative Containers
These are associative containers, meaning that elements are no longer ordered but instead have associations with each other used for determining uniqueness or mappings:

A set is a container with unique elements. You can only add one of each element to a set; any other additions are ignored.
A multiset is like a set, but you can put more than one of an element in. The multiset keeps track of how many of each kind of element are in the structure.
A map, also known as an associative array, is a structure in which you insert key-value pairs; then you can look up any value by supplying the key. So it's a bit like an array that you can access with a string index (key), or any other kind of index. (If you insert another key-value pair and the key already exists, then you just overwrite the value for the original key.)
A multimap is a map that allows for insertion of multiple values for the same key. When you do a key lookup, you get back a container with all the values in it.
Container Adapters
Container adapters, on the other hand, are interfaces created by limiting functionality in a pre-existing container and providing a different set of functionality. When you declare the container adapters, you have an option of specifying which sequence containers form the underlying container. These are:

A stack is a container providing Last-In, First-Out (LIFO) access. Basically, you remove elements in the reverse order you insert them. It's difficult to get to any elements in the middle. Usually this goes on top of a deque.
A queue is a container providing First-In, First-Out (FIFO) access. You remove elements in the same order you insert them. It's difficult to get to any elements in the middle. Usually this goes on top of a deque.
A priority_queue is a container providing sorted-order access to elements. You can insert elements in any order, and then retrieve the "lowest" of these values at any time. Priority queues in C++ STL use a heap structure internally, which in turn is basically array-backed; thus, usually this goes on top of a vector.
See this reference page for more information, including time complexity for each of the operations and links to detailed pages for each of the container types.
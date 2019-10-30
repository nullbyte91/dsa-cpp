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
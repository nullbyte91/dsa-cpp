1. Checking if the number is even or odd without using the % operator:
Although this trick is not much better than using % operator but is sometimes efficient (with large numbers). Use & operator:

```c
if (num & 1) 
   cout << "ODD"; 
else
   cout << "EVEN"; 
```

2. Fast Multiplication or Division by 2:
Multiplying by 2 means shifting all the bits to left and dividing by 2 means shifting to the right.

```c
n = n << 1;   // Multiply n with 2 
n = n >> 1;   // Divide n by 2 
```

3. Swapping of 2 numbers using XOR:
This method is fast and doesn’t require the use of 3rd variable.

```c
// A quick way to swap a and b 
a ^= b; 
b ^= a; 
a ^= b;
```

4. Avoiding use of strlen():

```c
// Use of strlen() can be avoided by: 
for (i=0; s[i]; i++) 
{ 
} 
// loop breaks when the character array ends. 
```
5. Use of emplace_back() instead of push_back():
C++17 emplace_back will return a reference to element that was just created in the vector where as push_back does not return anything, so you could preform some chaining if you wanted.

But the traditional words of wisdom is that push_back may construct a temporary object which then will need to get moved into the vector v whereas emplace_back just forwards the argument and construct it directly in place with no copies or moves needed.

So emplace_back can potentially be faster then push_back if you pass it something that needs to get constructed first.

Here is an example where we have a vector of strings and we pass it a sting literal (const char*)
```c++
vector<string> words;
words.push_back("push_back")
```
Since push_back requires a object of type string the string literal “push_back” gets passed to the string class constructor first so the code is really
```c++
vector<string> words;
words.push_back(string("push_back"));
```
which in this case it has to make a temporary object which is then passed in to push_back.

Where as with emplate_back there is no need for a temporary object
```c++
vector<string> words;
words.emplace_back("emplace_back");
```
6. Inbuilt GCD function: C++ has inbuilt GCD function and there is no need to explicitly code it. Syntax: __gcd(x, y);

7. Using Inline functions: We can create inline functions and use them without having to code them up during the contest. Examples: (a) function for sieve, (b) function for palindrome.

8. Maximum size of the array: We must be knowing that the maximum size of array declared inside the main function is of the order of 10^6 but if you declare array globally then you can declare its size upto 10^7.

9. Calculating the most significant digit: To calculate the most significant digit of any number log can be directly used to calculate it.
```c
Suppose the number is N then 
Let double K = log10(N);
now K = K - floor(K);
int X = pow(10, K);
X will be the most significant digit.
```

10. Calculating the number of digits directly: To calculate number of digits in a number, instead of looping you can efficiently use log :
```c++
Number of digits in N =floor(log10(N)) + 1;
```

11. Efficient trick to know if a number is a power of 2 sing the normal technique of division the complexity comes out to be O(logN), but it can be solved using O(v) where v are the number of digits of number in binary form.
```c++
/* Function to check if x is power of 2*/
bool isPowerOfTwo (int x) 
{ 
/* First x in the below expression is 
	for the case when x is 0 */
return x && (!(x&(x-1))); 
} 
```

12. Using the auto keyword to declare datatypes can save a lot of time during programming contests.
When a variable is defined as auto, compiler can determing the datatype on its own.

```c++
auto a = 100; // a will become 'int'
auto b = 1LL; // b will become 'long long'
auto c = 1.0; // c will become 'double'
auto d = "variable"; // d will become 'string'
```

13. The watch macro is one of the most useful tricks ever
```c++
#define watch(x) cout << (#x) << " is " << (x) << endl
```

14. Fast I/O for Competitive Programming:

```c++
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

To use STL lib:
```
#include <bits/stdc++.h>
```



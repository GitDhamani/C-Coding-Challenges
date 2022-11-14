# CPP-Coding-Challenges
Solving Interesting Problems with C++ and the Standard Template Library (STL).

Here is where I've put my solutions to the interesting Problems I've solved using C++. There's usually many ways to solve a problem and I do like to explore as many as I can think of. Some examples are just where I have found the implementation really elegant and the code very efficient. In some cases I have bench marked the code to see how different algorithms compete in solving it.

Here is a quick summary of some of the more interesting snippets:

<b>Fibonacci Sequences</b>: I initially found that producing the Fibonacci Sequences using recursion was fairly straight forward but I was unhappy with the time taken (45 ms) to produce the first 10 digits. I suspected this was due to the way the Fib function was being called so frequently that the time taken to push and pop the stack frames became significant. So in my second attempt I wrapped my algorithm into a single function and found I could reproduce the first 10 digits of the sequence in just 6ms, almost ten times faster. I used my own bench marking tool to detect how long each algorithm had taken.

<b>Operator Overloading</b>: I find working with the Insertion Operator (<<) very convenient and so often I like to overload it so my classes can work with it, especially to display entire vectors or arrays. The implementation usually consists of making the operator a friend of the class and then using a Range Based For loop to iterate through whichever Container is passed to the Function. If I'm only dealing with one type of container I can just hard code the type in, otherwise I can use a templated function.

<b>Number Conversions</b>: I particular like to convert between number systems, such as Decimal, Hexadecimal, Binary and Octal. The easiest way is to adjust the output stream format to display numbers in either of those formats, as it is a built in option and part of the standard library. However I have many other implementations to provide a rounded offering of solutions in this regard. 

<b>Lambdas</b>: One of my favourite parts of the Standard Library for C++17/20. I find using them very convenient and so I've showcased a few uses cases on how they can be used, especially with the STL Algorithms to efficiently sort and find data within containers.

<b>STL Containers/Algorithms</b>: Lots of use cases on the STL Containers and how to use them with the built in Algorithms. 

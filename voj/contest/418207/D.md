D - Factorial! You Must be Kidding!!!
Arif has bought a super computer from Bongobazar. Bongobazar is a place in Dhaka where second
hand goods are found in plenty. So the super computer bought by him is also second hand and has
some bugs. One of the bugs is that the range of unsigned long integer of this computer for C/C++
compiler has changed. Now its new lower limit is 10000 and upper limit is 6227020800. Arif writes
a program in C/C++ which determines the factorial of an integer. Factorial of an integer is defined
recursively as:
f actorial(0) = 1
f actorial(n) = n ∗ f actorial(n − 1).
Of course one can manipulate these expressions. For example, it can be written as
f actorial(n) = n ∗ (n − 1) ∗ f actorial(n − 2)
This definition can also be converted to an iterative one.
But Arif knows that his program will not behave rightly in the super computer. You are to write
program which will simulate that changed behavior in a Normal Computer.
Input
The input file contains several lines of input. Each line contains a single integer n. No integer has more
than six digits. Input is terminated by end of file.
Output
For each line of input you should output a single line. This line will contain a single integer n! if the
value of n! fits within the unsigned long integer of Arif’s computer. Otherwise the line will contain one
of the following two words
Overflow! (When n! > 6227020800)
Underflow! (When n! < 10000)
Sample Input
2
10
100
Sample Output
Underflow!
3628800
Overflow!
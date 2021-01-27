H - Titanic

It is a historical fact that during the legendary voyage of "Titanic" the wireless telegraph machine had delivered 6 warnings about the danger of icebergs. Each of the telegraph messages described the point where an iceberg had been noticed. The first five warnings were transferred to the captain of the ship. The sixth one came late at night and a telegraph operator did not notice that the coordinates mentioned were very close to the current ship's position.

Write a program that will warn the operator about the danger of icebergs!
Input
The input messages are of the following format:
Message #<n>.

Received at <HH>:<MM>:<SS>. 

Current ship's coordinates are 

<X1>^<X2>'<X3>" <NL/SL> 

and <Y1>^<Y2>'<Y3>" <EL/WL>.

An iceberg was noticed at 

<A1>^<A2>'<A3>" <NL/SL> 

and <B1>^<B2>'<B3>" <EL/WL>.

===

Here <n> is a positive integer, <HH>:<MM>:<SS> is the time of the message reception, <X1>^<X2>'<X3>" <NL/SL> and <Y1>^<Y2>'<Y3>" <EL/WL> means "X1 degrees X2 minutes X3 seconds of North (South) latitude and Y1 degrees Y2 minutes Y3 seconds of East (West) longitude."
Output
Your program should print to the output file message in the following format:
The distance to the iceberg: <s> miles.

Where <s> should be the distance between the ship and the iceberg, (that is the length of the shortest path on the sphere between the ship and the iceberg). This distance should be printed up to (and correct to) two decimal digits. If this distance is less than (but not equal to!) 100 miles the program should print one more line with the text:
DANGER!
Sample Input
Message #513.
Received at 22:30:11. 
Current ship's coordinates are 
41^46'00" NL 
and 50^14'00" WL.
An iceberg was noticed at
41^14'11" NL 
and 51^09'00" WL.
===
Sample Output
The distance to the iceberg: 52.04 miles.
DANGER!
Hint
For simplicity of calculations assume that the Earth is an ideal sphere with the diameter of 6875 miles completely covered with water. Also you can be sure that lines in the input file break exactly as it is shown in the input samples. The ranges of the ship and the iceberg coordinates are the same as the usual range for geographical coordinates, i.e. from 0 to 90 degrees inclusively for NL/SL and from 0 to 180 degrees inclusively for EL/WL.
# F - Simple Addition

Lets define a simple recursive function $F(n)$, where
$$
F(n) = p(x) =
n%10, if (n%10) > 0
0, if n = 0
F(n/10), Otherwise
$$
Lets define another function $S(p, q)$,
$$S(p, q) = \sum^q_{i=p}{F(i)}$$

In this problem you have to Calculate $S(p, q)$ on given value of p and q.
## Input
The input file contains several lines of inputs. Each line contains two non negative integers $p$ and $q$
$(p ≤ q)$ separated by a single space. $p$ and $q$ will fit in 32 bit signed integer. In put is terminated by a
line which contains two negative integers. This line should not be processed.
## Output
For each set of input print a single line of the value of $S(p, q)$.
## Sample Input
1 10
10 20
30 40
-1 -1
## Sample Output
46
48
52
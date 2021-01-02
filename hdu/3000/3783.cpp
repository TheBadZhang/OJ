/* HDU3783 ZOJ */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    int z = 0, o = 0, j = 0;
    while((c = getchar()) != EOF) {
        if(c == 'E') break;
        else if(c == '\n') {
            while(z || o || j) {
                if(z) z--, putchar('Z');
                if(o) o--, putchar('O');
                if(j) j--, putchar('J');
            }
            putchar('\n');

            z = o = j = 0;
        } else {
            if(c == 'Z') z++;
            else if(c == 'O') o++;
            else if(c == 'J') j++;
        }
    }

    return 0;
}
/* HDU3788 ZOJ问题 */

#include <bits/stdc++.h>

using namespace std;

const int N = 1000 + 1;
char s[N];

int main()
{
    while(~scanf("%s", s)) {
        int len = strlen(s);
        int pz = -1, i;
        for(i = 0; s[i] != 'j' && i < len; i++)
            if(s[i] == 'z') pz = i;
        int pj = len - 1 - i;
        int po = i - 1 - pz;

        if(pj == pz * po && po > 0)
            printf("Accepted\n");
        else
            printf("Wrong Answer\n");
    }

    return 0;
}
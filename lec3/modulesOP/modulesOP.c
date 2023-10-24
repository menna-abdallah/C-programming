#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = -7;
    int y = 3;
    int mod;
    // negative % positive >> negative
    mod = x%y;
    printf("%d mod %d = %d\n",x,y, mod);
    // positive % negative >> positive
    x = 7;
    y = -3;
    mod = x%y;
    printf("%d mod %d = %d\n",x,y, mod);
    // negative % negative >> negative
    x = -7;
    y = -3;
    mod = x%y;
    printf("%d mod %d = %d\n",x,y, mod);
    return 0;
}

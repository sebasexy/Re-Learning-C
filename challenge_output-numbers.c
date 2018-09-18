#include <stdio.h>

int main()
{
    int i;
    int j = -10;

    for(i = 1; i <= 20; i++)
    {
        printf("%d\n", i);
    }

    while(j <= 10)
    {
        printf("%d\n", j+=2);
    }

    return 0;
}


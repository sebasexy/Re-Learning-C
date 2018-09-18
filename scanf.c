#include <stdio.h>

int main()
{
    int a;

    printf("Type 1, 2 or 3: \n");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("Red\n");
            break;
        case 2:
            printf("Green\n");
            break;
        case 3:
            printf("Blue\n");
            break;
        default:
            printf("Input is invalid\n");
            break;

    }

    return 0;
}
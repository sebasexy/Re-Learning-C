#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char* toLowerCase(char* c)
{
    int i;
    int len = strlen(c);
    char * res = (char *)malloc(sizeof(char) * len);

    for(i = 0; i < len; i++)
    {
        if(*(c + i) >= 'A' && *(c + i) <= 'Z')
        {
            *(res + i) = *(c + i)+32;
        }else{
            *(res + i) = *(c+i);
        }
    }
    
    *(res + len) = '\0';
    return res;
}

int main()
{
    char* c = "ABcd";
    char* res;
    res = toLowerCase(c);
    printf("%s\n", res);


    /*
    char test = 'a';
    char test2 = 'z';
    char uTest = 'A';
    char uTest2 = 'Z';

    printf("ASCII value of %c = %d\n", test, test);
    printf("ASCII value of %c = %d\n", test2, test2);
    printf("ASCII value of %c = %d\n", uTest, uTest);
    printf("ASCII value of %c = %d\n", uTest2, uTest2);
    */

    return 0;
}
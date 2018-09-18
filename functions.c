#include <stdio.h>

int sum(int, int, int*);

int main(){
    
    int a, b, x;

    a = 10;
    b = 15;

    x = 100;

    sum(a,b, &x);
    printf("%d\n", x);
}

int sum(int a, int b, int *x){
    printf("%d\n", a+b);
    *x += 1;
}
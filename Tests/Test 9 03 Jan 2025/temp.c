#include <stdio.h>

void foo(int a, int b) {
    int c = a + b;
   
}

void main() {
    int x = 5, y = 10;
    x=foo(x, y);
    printf("%d", x);
    
}
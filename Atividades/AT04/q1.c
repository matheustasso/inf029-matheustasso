#include <stdio.h>

int plus (int a1, int b1)
{
    return a1 + b1;
}

int main() {
    int first, second, final;

    printf("Primeiro valor ");
    scanf("%d", &first);
    
    printf("Segundo valor ");
    scanf("%d", &second);
    
    final = plus (first, second);

    printf("Result: %d", final);

    return 0;
}
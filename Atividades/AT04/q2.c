#include <stdio.h>

int subtraction (int a, int b, int c)
{
    return a - b - c;
}

int main() {
    int first, second, third, result;

    printf("Primeiro valor: ");
    scanf("%d", &first);
    
    printf("Segundo valor: ");
    scanf("%d", &second);
    
    printf("Terceiro valor: ");
    scanf("%d", &third);

    result = subtraction(firt, second, third);
    printf("Result: %d", result);

    return 0;
}
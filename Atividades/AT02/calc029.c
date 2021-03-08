#include <stdio.h>
#include <stdlib.h>

int main(void){
	
    int input;
    float a, b, c;
    int continua = 1;
    

    while(continua != 0){
	    
        puts("\nSelecione uma das operaçoes para dois num:\n");
        puts("0 - Exit\n");
        puts("1 - Soma\n");
        puts("2 - Subt\n");
        puts("3 - Multi\n");
        puts("4 - Div\n");
    
        scanf("%d", &input);

        if(input == 0){
    
	    continua = 0;
            return 0;
    
        }
    
        puts("\nSelecione dois valores int:\n");
        scanf("%f", &a);
        scanf("%f", &b);

        switch (input){

           // case 0:
           // return 0;
           // break;

            case 1 :
            c = a + b;
            printf ("%.2f", c);
            break;
    
            case 2 :
            c = a - b;
            printf ("%.2f", c);
            break;
    
            case 3 :
            c = a * b;
            printf ("%.2f", c);
            break;
    
            case 4 :
            c = a / b;
            printf ("%.2f", c);
            break;
    
            default :
            printf ("Error\n");

        }

        
    }

}
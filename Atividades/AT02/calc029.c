#include <stdio.h>
#include <stdlib.h>

int main(void){
	
    int input;
    float x, y, z;
    int go = 1;
    

    while(go != 0){

        puts("\nSelecione uma das operaçoes para dois num:\n");
        	puts("0 - Exit\n");
        	puts("1 - Soma\n");
        	puts("2 - Subt\n");
        	puts("3 - Multi\n");
        	puts("4 - Div\n");
   
        scanf("%d", &input);

        if(input == 0){
	    go = 0;
            return 0;
        }
    
        puts("\nSelecione dois valores int:\n");
        scanf("%f", &x);
        scanf("%f", &y);

        switch (input){
            case 1 :
		    z = x + y;
		    printf ("%.2f", z);
		    break;
    
            case 2 :
		    z = x - y;
		    printf ("%.2f", z);
		    break;
    
            case 3 :
		    z = x * y;
		    printf ("%.2f", z);
		    break;
    
            case 4 :
		    z = x / y;
		    printf ("%.2f", z);
		    break;
    
            default :
            printf ("Error\n");

        }

        
    }

}

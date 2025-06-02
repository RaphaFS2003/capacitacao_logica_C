/*
    Complete o código para que imprima os 10 primeiros números pares usando um loop.
*/

#include <stdio.h>

int main() {
    int i=0,cont=0;

    printf("Os 10 primeiros números pares são:\n");
    
    // Implemente a lógica:
    while(cont < 10){
        if(i%2 == 0)
            printf(" %2d: %2d\n", ++cont,i);
            
        i++;
    }


    return 0;
}
#include<stdio.h>  
#include<stdlib.h>

int main() {
 	int TAB_SIZE = 100;
    int LINE_SIZE = 10;
    int tab[TAB_SIZE];
    
    for(int i = 0 ; i < TAB_SIZE ; i++) tab[i] = i;
 
    for(int i = 0 ; i < TAB_SIZE ; i++) {
        if((i+1) % LINE_SIZE == 0) { 
            printf("%2d\n", tab[i]); 
        }
        else {                      
            printf("%2d,", tab[i]); 
        }
    }
    
	return 0;
}

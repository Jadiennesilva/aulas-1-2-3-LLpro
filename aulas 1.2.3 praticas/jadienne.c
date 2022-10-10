#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	   setlocale(LC_ALL, "Portuguese_Brazil");
 
        
        int n1, n2, media;
        
        printf("programa para calcular média final\n\n");
        
        printf("primeira nota: ");
        scanf("%d" , &n1);
        
        printf("segunda nota: ");
        scanf("%d" , & n2);
        
        
        media = (n1*2 + n2*3)/5;
        
        printf("a média é %d" , media);
        
        




	return 0;
}

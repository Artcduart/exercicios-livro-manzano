#include <stdio.h> 

 
 

int main () { 

    int N; 

    float R; 

 
 

    scanf("%d", &N); 

 
 

    R = N - 2 * (N / 2); 

 
 

    if (R>0) { 

        printf("Impar", R); 

 
 

    } else { 

        printf("Par", R); 

    } 

 
 

} 
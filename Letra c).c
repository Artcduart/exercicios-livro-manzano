#include <stdio.h>

int main() {
  int N1, N2, N3, N4, MD;

  scanf ("%d%d%d%d", &N1, &N2, &N3, &N4);

  MD = (N1 + N2 + N3 + N4) / 4;
 
    if (MD >= 5) {
    printf("O valor de MD e: %d", MD);
    printf ("\nAprovado");

      
  }else{ 

  printf("Reprovado");
    

  
  printf("O valor de MD e %d", MD);

  }
  
  return 0;

}
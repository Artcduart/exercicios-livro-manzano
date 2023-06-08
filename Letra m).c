#include <stdio.h> 

 
 

int main() { 

    char nome[100]; 

    char sexo; 

 
 

    printf("Informe o nome: "); 

    scanf("%s", nome); 

 
 

    printf("Informe o sexo (M/F): "); 

    scanf(" %c", &sexo); 

 
 

    if (sexo == 'M') { 

        printf("Ilmo. Sr. %s\n", nome); 

    } else if (sexo == 'F') { 

        printf("Ilma. Sra. %s\n", nome); 

    } else { 

        printf("Sexo informado invalido\n"); 

    } 

 
 

    return 0; 

}
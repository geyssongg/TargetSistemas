/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100];
    printf("Digite a palavra a ser invertida: ");
    scanf("%s", palavra);
    int len = strlen(palavra);
    int k = len-1;
    
    char palavraInversa[len];
    
    
    for (int i = 0 ; i < len ; i++){
        palavraInversa[k] = palavra[i];
        k = k-1;
    }
    
    printf("Palavra original: %s" , palavra);
    printf("\nPalavra inversa: %s" , palavraInversa);
    
}

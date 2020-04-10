#include <stdio.h> 
#include <string.h>
#define TAM 100

int espaco(char s[]){ 
 
    int cont = 0, i, j; 
    for (i = 0; s[i]; i++){ //contar os espaços do comprimento total
        if (s[i] == ' ') cont++; 
    }
    while (s[i-1] == ' '){ 
       cont--; 
       i--; 
    } 

    int novoC = i + cont * 2 + 1; //novo comprimento
    int aux = novoC - 1; 
   
    s[aux--] = '\0'; 
 
    for (j = i - 1; j >= 0; j--){ 
        if (s[j] == ' '){ 
            s[aux] = '2'; 
            s[aux - 1] = '3'; 
            s[aux - 2] = '&'; 
            aux = aux - 3; 
        }else{ 
            s[aux] = s[j];
            aux--; 
        } 
    } 
  
    return novoC; 
} 
  
int main( void ){ 
    char entrada[TAM] = "User is not allowed   "; 
    int saida = espaco(entrada); 
    for (int i=0; i<saida; i++) 
        printf("%c", entrada[i]); 
    return 0; 
} 
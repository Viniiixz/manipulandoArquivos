#include <stdio.h>
#include <stdlib.h>

int main()
  {
    char nomearquivo[60], nomenovo[60];
    
    printf("\n Digite o nome do arquivo: ");
    gets(nomearquivo);
    
    printf("\n Digite o novo nome do arquivo: ");
    gets(nomenovo);
    
    if(rename(nomearquivo,nomenovo)) {
       printf("Erro ao renomear o Arquivo!\n"); 
 }
 else {
    printf("Arquivo renomeado com sucesso!\n"); 
 }
      
    return(0);
  }
/*
fuente:
autor: 
fecha: 24/11/2014
descripcion: 20 enteros
voidleermatriz, float

*/



#include<stdio.h>
#define TAM 20

void leer(int mat[TAM]){
 int i; 
 
      for(i=0; i<TAM; i++){
          printf("elemento %i: ", i);
          scanf("%i", &mat[i]);   
      }  
}

  
  
  
   float mediamatriz(int mat[TAM]){
    int res, i;
     res=0;
      
      for(i=0; i<TAM; i++)
     
               res+=mat[i];
         
         return (float)res/TAM;
         
      }
  
  
  
  
  
      
      
int main (){
    
    int matriz[TAM];
    leer(matriz);
    printf(" la media de los elementos: %.2f\n", mediamatriz(matriz));
    
          
system ("PAUSE");
}

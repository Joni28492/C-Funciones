/* 
fuente: funcion cuadros

autor: joni


*/



#include<stdio.h>
void cuadros(int rows, int columnas){
     int i, j=2;
     
     //primera fila
  printf("+");
              for(i=1; i<=cols; i++){
              printf("-");
              }   
              printf("+\n");
  //filas de las seg a la penultima
  
  for(i=1; i<=rows; i++){
           printf("+");
           for(j=1; j<=cols; j++){
              printf(" ");
              }   
           
           }
           printf("+\n");
  
}
}
//ultima fila

   printf("+");
              for(i=1; i<=cols; i++){
              printf("-");
              }   
              printf("+\n");



  void cuadro(int rows, int cols)
  int i, j;
  
  
  
  for(i=1; i<=rows; i++){
           printf("+");
            for(j=1; 1<=cols; j++){
                     if(i==0 || i==rows+1)
                     printf("-");
                     else
                     printf(" ")
                     }
            printf("+\n");
           
           }
  
  
  
   /*  while(i<=filas){
                     if(i=filas){
                         printf("+\n");
                         i++;
                     }
                     else if(i=1){
                          printf("+");
                          }
                     else{
                          printf("-");
                          i++;
                          }
                     
     
     
     
     
     }*/












int main(){
    int filas, cols;
    
    printf("introduce el numero de filas: ");
    scanf("%i\n", &filas);
    printf("introduce el numero de columnas: ");
    scanf("%i\n", &cols);
    
                   cuandros(filas, cols); 
                   cuadro(filas, cols);
 
 
    system("PAUSE");
}

//no se ejecuta pero el codigo esta bien 

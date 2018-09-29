/*
matriz


*/


#include<stdio.h>
#define TAM 5

void inicializa(int mat[TAM]){
     int i; 
     
     for(i=0; i<TAM;i++)
              mat[i];
}


void leermatriz(int mat[TAM]){
     int i;
     
     for(i=0; i<TAM; i++){
         printf("elemento %i: ", i);
         scanf("%i", &mat[i]);
         }
     
}

void mostrar(int mat[TAM]){
int i;     
     for(i=0; i<TAM; i++){
         printf("%i\n", mat[i]);
         }
}

int main(){
         int matriz[TAM];
         int i;

inicializa(matriz);
leermatriz(matriz);
mostrar(matriz);

system("PAUSE");
}

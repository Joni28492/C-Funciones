#include<stdio.h>
#define TAM 5

void inicializa(int mat [TAM]){
     int i;

//Inicializar la matriz
for(i=0;i<TAM;i++){
    mat[i]=0;
}
}
//
void leerMatriz(int mat[TAM]){
     int i;
//
for(i=0; i<TAM; i++){
         printf("Elemento %i: ",i);
         scanf("%i", &mat[i]);
   }
}

//
void muestraMatriz(int mat [TAM]){
     int i;
     for(i=0;i<TAM;i++){
    printf("%i\n",mat[i]);
   }     
}

int main(){
    
    //Defino matriz enteros
int matriz [TAM];
int i;

inicializa(matriz);
leerMatriz(matriz);

//Inicializar la matriz
for(i=0;i<TAM;i++){
    matriz[i]=0;
}

//Leemos por teclado los elementos de la matriz
for(i=0; i<TAM; i++){
         printf("Elemento %i: ",i);
         scanf("%i", &matriz[i]);
   }

//Mostrar por pantalla
for(i=0;i<TAM;i++){
    printf("%i\n",matriz[i]);
   }
   system("PAUSE");
}

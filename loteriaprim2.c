/*
fuente:loteria primitiva 
autor: 
26/11/2014
descripcion:
simula el sorteo de la loteria primitiva



*/









#include<stdio.h>
#include<stdlib.h>

void inicializa(int m[6]){
     int i;
     for(i=0; i<6; i++)
              m[i]=0;
}


void muestra(int m[6]){
     int i;
     for(i=0; i<6; i++){
     printf("%i ", m[i]);
     }    
}

void llenamatriz(int m[6]){
     int i;
     int num; //num aleatorio
     int generados=0; //numeros generados
                      //hasta el momento
  while(generados<6){
        num=rand()%49+1;
        
             if(existe(m,num)==0){
               m[generados]=num;
               generados++;
             
             }
  }
}


int existe(int m[6], int valor){
//devuelve 1 si el valor esta en m.
int i;

    for(i=0; i<6; i++){
         if(valor==m[i])
         return 1;    
    }
    return 0;
}




void introducirdatos(int m[6]){
     int i;
     for(i=0; i<6; i++){
     printf("introduce numero: ");
     scanf("%i\n", &m[i]);
     }
     
     
}


int aciertos(int a[6], int g[6]){
   int res=0;
   int i, j;
   
   for(i=0; i<6; i++){
            for(j=0; j<6; j++){
                     if(a[i]==g[j]){
                     res++;
                     break;   
                     }
            }         
   }
                      return res;
}


int main(){
    //declaramos los arrays de la apuesta del jugador
    //jugador y de la combinacion ganadora
    int apuesta[6];
    int ganadora [6];
    //inicializamos las matrices
    inicializa(apuesta);
    inicializa(ganadora);
    
    
       srand(time(NULL));//enerador de aleatorios,  time= miliseg
    
    //llenamos las matrices
    llenamatriz(apuesta);
    llenamatriz(ganadora);
    
    //mostramos contenido de las matrices
    printf("APUESTA: ");
    muestra(apuesta);
    printf("\nGANADORA: ");
    muestra(ganadora);

    //calcular numero aciertos
    printf("\n\nhas tenido %i aciertos\n", 
    aciertos(apuesta,ganadora));



system("PAUSE");
}

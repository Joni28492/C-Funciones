/*
   Fuente: primitiva2.c
   Autor: R.S.F.
   Fecha: 26-11-2014
   Descripción: este programa simula el sorteo
      de la lotería primitiva. Permitiendo
      calcular los intentos hasta obtener n
      aciertos
*/
#include<stdio.h>
#include<stdlib.h>

void llenaMatriz(int m[6]){
   int i;
   int num; //Num. aleatorio
   int generados=0;  //Numeros distintos generados
                     //hasta el momento
   while(generados<6){
       num=rand()%49 + 1;
       if(existe(m,num)==0){
           m[generados]=num;
           generados++;                     
       }                                  
   }     
}

int existe(int m[6], int valor){
//Devuelve 1 si valor está en m. 0 en otro caso
   int i;
   for(i=0; i<6; i++){
      if(valor==m[i])  //Existe
         return 1;         
   }
   return 0; 
}


void inicializa(int m[6]){
//Inicializa a 0 los elementos de la matriz m     
   int i;
   for(i=0;i<6;i++)
      m[i]=0;       
}

void muestra(int m[6]){
//Recorre la matriz m mostrando todos sus elementos
   int i;
   for(i=0;i<6;i++)
      printf("%i ", m[i]);            
}

int aciertos(int a[6], int g[6]){
   int res=0;
   int i,j;
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
    //Declaramos los arrays de la apuesta del 
    //jugador y de la combinación ganadora
    int apuesta[6];
    int ganadora[6];
    int aciertos_objetivo;
    int intentos=0;
    
    srand(time(NULL)); //Generador de aleatorios
    
    //Inicializamos las matrices
    inicializa(apuesta);
    inicializa(ganadora);
    
    //Llenamos las matrices
    llenaMatriz(apuesta);
    
    printf("Cuantos aciertos quieres?: ");
    scanf("%i", &aciertos_objetivo);
    
    do {
        intentos++;
        llenaMatriz(ganadora);
        //Mostramos contenido de las matrices
        printf("Intento %i  --> APUESTA: ", intentos);
        muestra(apuesta);
        printf("   GANADORA: ");
        muestra(ganadora);
    
        //Calcular número de aciertos
        printf(" Aciertos: %i\n",
               aciertos(apuesta,ganadora));
    } while(aciertos(apuesta,ganadora)<aciertos_objetivo);
    
   
    system("PAUSE"); 
}





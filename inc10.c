/*


*/


#include<stdio.h>
void incrementa(int *n, int inc){
     
     *n+=inc;
     
     }
int main(){
    int b;
    
    b=5;
    
    incrementa(&b,10);
    
                     printf(" b=%i\n", b);
    
system("PAUSE");
}

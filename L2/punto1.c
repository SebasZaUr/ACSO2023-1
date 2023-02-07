#include <stdio.h>

int main()
{
    int Belgica,Inglaterra, Noruega,irlanda,Francia;
    int mcd = 1;
    int aviones = 0;
    scanf("%i",&Belgica);
    scanf("%i",&Inglaterra);
    scanf("%i",&Noruega);
    scanf("%i",&irlanda);
    scanf("%i",&Francia);
    int pasajeros[5];
    pasajeros[0] = Belgica;
    pasajeros[1] = Inglaterra;
    pasajeros[2] = Noruega;
    pasajeros[3] = irlanda;
    pasajeros[4] = Francia;
    
    for(int i= 2; i<= 10; i++){
        int c = 0;
        for(int j =0; j<=4; j++){
            if(pasajeros[j]%i ==0){
                c++;
            }
        }
        if(c == 5){
            mcd = mcd *i;
            for(int a = 0; a <= 4; a++){
                pasajeros[a] = pasajeros[a]/i;
            }
        }
    }
    for(int i =0;i<5;i++){
        printf("%i\n",pasajeros[i]);
        aviones += pasajeros[i];
    }
    printf("%i\n",aviones);
    return 0;
}
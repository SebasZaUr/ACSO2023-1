#include <stdlib.h> 
#include <stdio.h>
void sum(void){
    float a;
    float b;
    float res;
    scanf(" %f",&a);
    scanf(" %f",&b);
    res = a + b;
    printf("%f\n",res);
}
void rest(void){
    float a;
    float b;
    float res;
    scanf(" %f",&a);
    scanf(" %f",&b);
    res = a - b;
    printf("%f\n",res);
}
void mult(void){
    float a;
    float b;
    float res;
    scanf(" %f",&a);
    scanf(" %f",&b);
    res = a * b;
    printf("%f\n",res);
}
void divi(void){
    float a;
    float b;
    float res;
    scanf(" %f",&a);
    scanf(" %f",&b);
    res = (float) a / b;
    printf("%f\n",res);
}
void menu(void){
    char sel;
    scanf(" %c",&sel);
    switch (sel){
        case ('+') :
            sum();
            break;
        case ('-') :
            rest();
            break;
        case ('*') :
            mult();
            break;
        case ('/') :
            divi();
            break;
    }
}
int main(void){
    int i;
    int a;
    scanf (" %d",&a);
    for(i = 0; i<a;i++){
        menu();    
    }
    return EXIT_SUCCESS;
}


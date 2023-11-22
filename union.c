#include<stdio.h>

union est1{
   int x;
   char ch;
   float f;


};

struct est2{
   int x;
   char ch;
   float f;



};

int main(){
    //union est1 e1;
    //struct est2 e2;
    printf("união: %lu\n", sizeof(union est1));
    printf("estrutura: %lu\n", sizeof(struct est2));
}
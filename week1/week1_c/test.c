#include<stdio.h>

void exercise(){
    for (int i = 0; i<20;i++){
        if (i%2!=0){
            printf("%d is odd\n",i);
        }
    }
}

void lp(){
    for (int i = 20; i>=00;i--){
        if (i%2==0)
            printf("%d is even\n",i);
    }
    int a =20;
    while (a>=0){
        if (a%2==0)
            printf("%d is even\n",i);
        a--;
    }
}

void square(){
    for(int i = 0;i < 10; i++){
        printf("%d's square is %d\n",i,i*i);
    }
}

int main(){
    int a =0;

    // for (a; a<5; a++){
    //     printf("a is equal to %d\n",a);
    // }
    // printf("I have finish the loop and a is equal to %d\n",a);

    // while (a<5){
    //     printf("a is equal to %d\n",a);
    //     a++;
    // }
    // printf("I have finish the loop and a is equal to %d\n",a);
    // return (0);
    square();
}
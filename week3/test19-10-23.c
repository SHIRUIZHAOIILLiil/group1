#include<stdio.h>

double sum(float a, float b);

int main(){

    double z = sum(1.1,2);
    printf("%f\n",z);
    return 0;
}

double sum (float a, float b){
    double answer = a + b;
    return answer;
}
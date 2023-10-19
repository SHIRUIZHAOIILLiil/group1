#include<stdio.h>
#include <stdlib.h>
#include<math.h>

float circleArea(float radius){
    float area = pow(radius, 2) * M_PI;
    return area;
}

float volumeBall(float radius){
    float volume = pow(radius, 3) * M_PI * 3 / 4;
    return volume;
}

void print1(){
    float radius = 5.5;
    float area = circleArea(radius);
    printf("the area is %f\n",area);
}

void print2(){
    float radius = 5.5;
    float volume = volumeBall(radius);
    printf("the volume is %f\n",volume);
}

int str_len(char *s){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int isPrime(int prime){
    if(prime <=1)
        return 0;
     for (int i = 2; i * i <= prime; i++) {
        if (prime % i == 0) 
            return 0;
    }
    return 1;
}

void print3(){
    int a = 21;
    int b = isPrime(a);
    if(b == 1)
        printf("the number %d is a prime\n",a);
    else
        printf("the number %d is not a prime\n",a);

}

char* concatStrings(char* a, char* b){
    int count1 = 0, count2 = 0;
    char* c;
    for(int i = 0; a[i] != '\0'; i++) {
        count1++;
    }

    for(int i = 0; b[i] != '\0'; i++) {
        count2++;
    }
    c = calloc(count1+count2, sizeof(char));
    for(int i = 0; a[i] != '\0'; i++) {
        c[i] = a[i];
    }
    for(int i = 0; b[i] != '\0'; i++) {
        c[count1] = b[i];
        count1++;
    }
    return c;
}

float operation(float a, float b, char c){
    float d = 0;
    switch(c){
        case '+':
            d = a + b;
            break;
        case '-':
            d = a - b;
            break;
        case '*':
            d = a * b;
            break;
        case '/':
            if(b == 0)
                {
                    printf("the number is divided by 0\n");
                    break;
                }
            else
                {d = a / b;}
            break;
        default:
        break;
    }
    return d;
}

void print4(){
    float a = 10.5, b = 0, c = 0;
    char d = '/';
    c = operation(a,b,d);
    printf("%f\n",c);
    printf("the operation is %c and the number is %f\n",d,c);
}

void reverseArray(int a[], int length){
    

    int change = 0;

    printf("the array is\n");
    for(int i = 0;i < length;i++){
        printf(" %d ", a[i]);
    }
    printf("\n");

    for (int i = 0;i < length/2;i++){
        change = a[i];
        a[i] = a[length-i-1];
        a[length-i-1] = change;
    }
    printf("the reverse array is\n");

    for(int i = 0;i < length;i++){
        printf(" %d ", a[i]);
    }
    printf("\n");
}

int main(){
    // char *s = "hello";
    // char *b = "world";
    // char *c = concatStrings(s,b);
    //printf("the string is %s",c);

    // char *s = "hello";
    // printf("%d",str_len(s));
    //print3();
    int array[] = {5,10,15,20,25,99};
    int count = sizeof(array)/sizeof(array[0]);
    reverseArray(array, count);
    
    return 0;
}
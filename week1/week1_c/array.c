#include<stdio.h>

void reverse(){
    char hello[5] = "hello";
    char change;
    int count = sizeof(hello);
    for (int i =0;i<count/2;i++){
        change = hello[count-i-1];
        hello[count-i-1] = hello[i];
        hello[i] = change;
        
    }
    for (int i=0;i<count;i++){
        printf("%c",hello[i]);
    }
    
}

int main(){
    // int a [10];
    // int count = 0;
    // for (count; count<10; count++){
    //     a[count] = count*11;
    // }
    // printf("the first and second elements are %d and %d\n",a[0],a[10]);
    // printf("pointer: the first and second elements are %d and %d\n",*a,*(a+1));
    reverse();
    return (0);
}
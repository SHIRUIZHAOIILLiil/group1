#include<stdio.h>
#include"utils.h"


void q1(char* path, char* mode){
    int input;
    printf("please input an integer\n");
    scanf("%d\n",&input);
    FILE *file = openfile(path, mode);
    for (int i = 1; i <= input; i++){
        fprintf(file, "%d\n", i * i);
     }
}

float q2(char* path, char* mode){
        float num = 0;
    int count = 0;
    FILE *file = openfile(path, mode);
    char buf[BUFSIZ];
    while(fgets(buf, BUFSIZ, file) != NULL){
        num += atoi(buf);
        count++;
    }
    //printf("%d, %d\n",num, count);
    fclose(file);
    float average = num / count;
    return average;
}

int main(){
    char* path = "squares.dat";
    char* mode = "r+";
    


    return 0;
}
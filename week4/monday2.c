#include<stdio.h>
#include<stdlib.h>


FILE *openfile(char *filepath, char *filemode){
    FILE *file = fopen(filepath, filemode);
    if(file == NULL){
        perror("");
        exit(1);
    }
    return file;
}


int main(){
    char *p = "data.txt";
    char *mode = "r";
    FILE *file = openfile(p, mode); 
    return 0;
}
#include<stdio.h>
int main(){
    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "r+");
    if (file == NULL){
        perror("");
        return 1;
    }
    // int number, num_lines = 10;
    // printf("Type %d numbers: ", num_lines);
    // for (int i = 0; i < num_lines; i++){
    //     scanf("%d", &number);
    //     fprintf(file, "%d\n", number);
    // }
    char line_buffer[BUFSIZ];
    while(fgets(line_buffer, BUFSIZ, file) != NULL){
        printf("%s", line_buffer);
    }
    fclose(file);
    //printf("ok\n");
    return 0;
}
#include "utils.h"

FILE *openfile (char *path, char *d){
    FILE *f = fopen(path, d);
    if (f == NULL) {
        perror("");
        exit(1);
    }
    return f;
}

void writefile(char *path, char *d){
    FILE *f = openfile(path, d);
    int number, num_lines = 10;
    printf("Type %d numbers: \n", num_lines);
    for (int i = 0; i < num_lines; i++){
        scanf("%d", &number);
        fprintf(f, "%d\n", number);
    }
    printf("write successfully\n");
    fclose(f);
    exit(1);
}
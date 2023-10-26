#include <stdio.h>
#include "utils.h"


int main(){

    char *path = "data.txt";
    char *mode = "w";
    // FILE *f = openfile(path, mode);
    // char line_buffer[BUFSIZ];
    // while (fgets(line_buffer, BUFSIZ, f)!=NULL){
    //     printf("%s", line_buffer);
    // }
    // fclose(f);
    writefile(path, mode);
    return 0;
}


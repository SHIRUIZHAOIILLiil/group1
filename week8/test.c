#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void r(){
    srand((unsigned int)time(NULL));
    int A[3][4];
    int B[3][4];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            A[i][j] = rand() %11;
            B[i][j] = rand() %11;
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("--------------\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

int main(){
    
    return 0;
}
#include<stdio.h>

int main(){

    int a[2][2][3] = {{{23,1,3},{32,45,6}},{{54,66,77},{55,76,99}}};
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("%d\n",a[i][j][k]);
            }
        }
    }
    return 0;
}
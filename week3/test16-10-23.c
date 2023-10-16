#include<stdio.h>

void test0(){
    int mark = -1;

    while(mark<0 || mark>100){
        printf ("Enter the mark: \n");
        scanf ("%d", &mark);
    }
    
    if(mark == 0)
        printf("the mark of is a 0\n");
    else if(mark < 40)
        printf("the mark of %d is a fail\n",mark);
    else{
        printf("the mark of %d is a pass\n",mark);
    }
}

void test1(){
    int a = 0;
    switch(a){
        case 0:
            printf("option 0 has been selected\n");
            break;
        case 1:
            printf("option 1 has been selected\n");
            break;
        case 2:
            printf("option 2 has been selected\n");
            break;
        default:
            printf("other options have been selected\n");

    }
}

int main(){
    test1();

    return 0;
}
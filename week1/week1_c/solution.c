#include<stdio.h>

void rectanglar(){
    float length1 = 0, length2 = 0, area = 0;
    printf("please input the sides of the rectanglar: ");

    scanf("%f",&length1);
    scanf("%f",&length2);
    area = length1 * length2;
    printf("the area of the rectanglar is: %f\n", area);

}

void reverse(){
    char name[15],rev[15];
    printf("please enter your name: \n");
    scanf("%s",name);
    int length = sizeof(name);
    printf("%d\n",length);
    printf("%c",name[0]);
    // for(int i=0;i<sizeof(name);i++)
    // {
    //     rev[i] = name[length-1];
    //     printf("%s",rev);
    //     length--;
    // }
    //printf("the name is %s, and the reverse name is %s: \n",name, rev);
}

int main(){
    //rectanglar();
    reverse();
    return 0;
}



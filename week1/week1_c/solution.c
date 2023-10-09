#include<stdio.h>
#include<stdlib.h>
#include<string.h>


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
    int length = sizeof(name), j = 0;
    
    printf("please enter your name: \n");
    scanf("%s",name);
   
    while(name[j]!='\0'){
        j++;
    }
    j = j-1 ;
    int def = j;


    for(int i = 0;i<=def;i++){
        rev[i] = name[j];
        j--;
        if(i == def){
            rev[i+1] = '\0';
        }
    }
   
    printf("the name is %s, and the reverse name is %s: \n", name, rev);


}

int main(){
    //rectanglar();
    reverse();
    return 0;
}



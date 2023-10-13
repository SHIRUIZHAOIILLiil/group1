#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

void test01(){
    int array[] = {5,10,15,20,25};
    int sum = 0;
    for (int i = 0;i < sizeof(array)/sizeof(array[0]);i++){
        sum = sum+array[i];
    }
    printf("the sum of the numbers in array is %d\n",sum);
}

void test02(){
    int array[] = {5,10,15,20,25};

    int change = 0, count = sizeof(array)/sizeof(array[0]);

    printf("the array is\n");
    for(int i = 0;i < count;i++){
        printf(" %d ", array[i]);
    }
    printf("\n");

    for (int i = 0;i < count/2;i++){
        change = array[i];
        array[i] = array[count-i-1];
        array[count-i-1] = change;
    }
    printf("the reverse array is\n");

    for(int i = 0;i < count;i++){
        printf(" %d ", array[i]);
    }
    printf("\n");
}

void test03(){
    int array[] = {12,43,56,37,9};
    int max = -1;
    int count = sizeof(array)/sizeof(array[0]);
    for (int i = 0;i < count;i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    printf("the max number in array is %d\n",max);
}

void test04(){
    int array[] = {12,43,56,37,9};
    int count = sizeof(array)/sizeof(array[0]);
    int num = array[count-1];
    for (int i = 3;i >= 0;i--){
        array[i+1] = array[i];
    }
    array[0] = num;
    for(int i = 0;i < count;i++){
        printf(" %d ", array[i]);
    }
}

void test05(){
    srand((unsigned)time(NULL));
    int array[6];
    bool arr[6] = {false};
    int flag = 0,num = 0;
    for (int i = 0; i < 6; i++){
        array[i] = rand()%10;
        printf("%d ",array[i]);
    }
    printf("\n");
    for(int i = 0;i <6; i++){
        for(int j = 0;j < 6; j++){
            if(array[i]==array[j]&&i!=j&&(arr[j]==false)){
                printf("find the duplicate number %d\n", array[i]);
                arr[i] = true;
                arr[j] = true;
                flag++;
                }
                
            }
    }
    if (flag ==0)
        printf("there is no duplicate number");
}

void test06(){
    int arr1[] = {1,2,3};
    int arr2[] = {4,5,6};
    for (int i =0; i<3;i++){
        *(arr1+3+i) = *(arr2+i);
    }
    for(int i = 0; i< 6; i++){
        printf("%d ", arr1[i]);
    }
}

int main(){

    test06();
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

void test1(){
        float number = .0;
        printf ("Enter the number: \n");
        scanf ("%f", &number);
        if(number<0)
            printf("the number %f is negative\n",number);
        else if(number>0)
            printf("the number %f is positive\n",number);
        else
            printf("the number is zero\n");
}

void test2(){
    int num = 0;
    printf ("Enter the number: \n");
    scanf ("%d", &num);
    if (num%4==0&&num%5==0)
        printf("the number %d is both divisible by 4 and 5\n",num);
    else
        printf("the number %d cant be divisile by 4 or 5\n",num);
    
}

void test3(){
     int mark = -1;

    while(mark<0 || mark>100){
        printf ("Enter the mark: \n");
        scanf ("%d", &mark);
    }
    
    if(mark < 50)
        printf("the mark is %d, you fail in the exam\n",mark);
    else if(mark >= 50&&mark <70)
        printf("the mark is %d, you pass in the exam\n",mark);
    else{
        printf("the mark is %d, you get distinction in the exam\n",mark);
    }
}

void test4(){
    float temperature = 0;
    printf ("Enter the temperature: \n");
    scanf ("%f", &temperature);
    if(temperature>=-10 && temperature<40)
        printf(" the temperature %f is within the range of -10 to 40 degrees Celsius\n",temperature);
    else
        printf(" the temperature %f is beyond the range of -10 to 40 degrees Celsius\n",temperature);

}

void test5(){
    int num ;

   while(1){
    printf ("Enter the number: \n");
    scanf ("%d", &num);
     switch(num){     
        case 0:
            printf("option 0 has been selected, exit the system\n");
            exit(0);
            break;
        case 1:
            printf("option 1 has been selected\n");
            break;
        case 2:
            printf("option 2 has been selected\n");
            break;
        case 3:
            printf("option 3 has been selected\n");
            break;
        case 4:
            printf("option 4 has been selected\n");
            break;
        default:
            printf("it is a wrong option\n");
        break;

    }
   }

}

void test6(){
    int count = 0, num = 0;
    int arr[20];
    while(1){
        printf ("Enter the mark: \n");
        scanf ("%d", &num);
        if(num == -1|| (num<0||num>100)){
            printf("the number %d is termination value or it is beyond the range\n",num);
            count--;
            break;}
        else{
            arr[count] = num;
            printf("the number %d is entered in arr",arr[count]);
            count++;
        }
    }

    for (int i = 0; i<= count; i++){
        printf("%d ", arr[i]);
    }

}

int main(){

    test6();

    return 0;
}
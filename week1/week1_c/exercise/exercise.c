#include<stdio.h>
#include<math.h>

void hello(){
    printf("hello world\n");
}


void adding(){
    int a=0,b=0,c=0;

    printf("please input an integer \n");
    scanf("%d",&a);
    printf("please input another integer \n");
    scanf("%d",&b);
    c= a+b;
    printf("the sum of two integers is %d\n",c);
}

void data_type_size(){
    int a;
    float b;
    char c;
    double d;
    int size_int = sizeof(a);
    int size_float = sizeof(b);
    int size_char = sizeof(c);
    int size_double = sizeof(d);
    printf("the max size of int is %d bytes\n", size_int);
    printf("the max size of float is %d bytes\n", size_float);
    printf("the max size of char is %d bytes\n", size_char);
    printf("the max size of double is %d bytes\n", size_double);
}

void area_circle(){
    float r = 0, area = 0;
    printf("please input the radius \n");
    scanf("%f",&r);
    area = r*r*M_PI;
    printf("the area of the circle is %f\n", area);
}

void swap_value(){
    int a=0, b = 0, c = 0; 
    printf("please input an integer to swap\n");
    scanf("%d",&a);
    printf("please input another integer to swap\n");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    printf("the first integer has been changed as %d\n and the second one has been changed as %d\n",a,b);
}

void determine(){
    int a = 0;
    printf("please input an integer\n");
    scanf("%d",&a);
    int b = a %2;
    if(b == 0){
        printf("the number %d is an even\n",a);
    }
    else{
        printf("the number %d is an odd\n",a);
    }
}

void fahrenheit(){
    float f=0, c=0;
    printf("please input the fahrenheit\n");
    scanf("%f",&f);
    c = (f-32)/1.8;
    printf("the celsius is %f\n",c);
}

void factorial(){
    int fac=1, x=0;
    printf("please input an integer to calculate the factorial\n");
    scanf("%d",&x);
    if (x==0);{
        printf("the factorial of %d is 0\n",x);
        return ;
    }

    for (int i=1; i <=x; i++ ){
        fac *=i;
    }

    printf("the factorial of %d is %d\n",x,fac);
}

void light_travel(){
    long double speed = 3*pow(10,8),distance = 0;
    float day = 0, second;
    printf("please input the days for light to travel\n");
    scanf("%f",&day);
    second = day*24*60*60;
    distance = speed * second;
    printf("the light can travel %Lf in %f days\n", distance, day);
}

void calculation(){
    float simple_interest = 0, principal = 0, rate = 0, time = 0;
    printf("please input the given principal\n");
    scanf("%f",&principal);
    printf("please input the time(Please give the time in years)\n");
    scanf("%f",&time);
    printf("please input the time(Please use percentage)\n");
    scanf("%f",&rate);
    simple_interest = rate*time*principal/100;
    printf("the simple interest will be %f\n",simple_interest);
}

int main(){

    calculation();

    return 0;
}
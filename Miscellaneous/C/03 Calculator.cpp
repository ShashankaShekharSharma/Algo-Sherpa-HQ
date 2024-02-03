#include<stdio.h>
int addition(int a,int b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
int multiplication(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}

int main(){
    int a;
    scanf("Enter first number ",&a);
    int b;
    scanf("Enter second number ",&b);
    int math;
    printf("Menu\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division");
    scanf("Enter your choice (1-4)");
    if (math == 1){
        printf(addition(a,b));
    }
    else if(math == 2){
        printf(subtraction(a,b));
    }
    else if(math == 3){
        printf(multiplication(a,b));
    }
    else if(math == 4){
        printf(division(a,b));
    }
    else{
        printf("Invalid Input");
    }
} 
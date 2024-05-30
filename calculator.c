# include <stdio.h>

int add(int a,int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int divide(int a,int b){
    if(b==0){
        printf("Error: divide by Zero error");
    }
    else{
        return a/b;
    }
}
int main(){
    int a =7;
    int b = 3;
    printf("Addition : %d\n",add(a,b));
    printf("Subtraction : %d\n",sub(a,b));
    printf("Multiplication : %d\n",multiply(a,b));
    printf("Division : %d\n",divide(a,b));

    printf("Addition : %d\n",add(10,5));
    printf("Subtraction : %d\n",sub(8,4));
    printf("Multiplication : %d\n",multiply(9,0));
    printf("Division : %d\n",divide(7,5));
    
    printf("Addition : %d\n",add(0,0));
    printf("Subtraction : %d\n",sub(0,0));
    printf("Multiplication : %d\n",multiply(0,0));
    printf("Division : %d\n",divide(0,0));
}
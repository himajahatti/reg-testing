# include<stdio.h>
void feature(int a,int b){
    if(a>b){
        printf("a is greater than b");
    }
    else if(a<b){
        printf("a is less than b");
    }
    else{
        printf("a is equal to b");
    }
}
int main(){
    feature(7,4);
    feature(3,8);
    feature(5,5);
}
#include <stdio.h>
#include<stdlib.h>
#include "my_function.h"
 
int my_function(int a, int b) {
    return a + b;
}
int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int result = my_function(a, b);
    return result;
}
#include "counter.h"
// #include <assert.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    struct Counter* c = counter();
    bool v = test_counter(c, 0);
    if(v){
      printf("Assertion passed\n");
    }
    else{
      printf("One test failed\n");
    }

    increment(c);
    bool test2 = test_counter(c, 1);
    if(test2){
      printf("Test passed\n");
    }
    else{
      printf("Test failed");
    }
    int a, b;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    bool sum = test_add(add(a, b), a + b);
    if(sum){
      printf("Test passed\n");
    }
    else{
      printf("Test failed\n");
    }
    return 0;
}

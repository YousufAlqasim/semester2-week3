
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;
    int **testIntPtrD;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));
    printf("Int double pointer size is %ld bytes\n",sizeof(testIntPtrD));

    

    return 0;
}

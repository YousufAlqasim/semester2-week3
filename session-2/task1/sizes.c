
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;
    double testDouble;
    short int testShortint;
    long int testLongint;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Short int is %ld bytes\n",sizeof(testShortint));
    printf("Double is %ld bytes\n",sizeof(testDouble));
    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Short int is %ld bytes\n",sizeof(testShortint));
    printf("Long int is %ld bytes\n",sizeof(testLongint));


    return 0;
}

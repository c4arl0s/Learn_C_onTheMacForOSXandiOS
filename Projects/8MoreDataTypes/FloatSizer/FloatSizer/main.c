//
//  main.c
//  FloatSizer
//
//  Created by Carlos Santiago Cruz on 16/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float floatNumber;
    double doubleNumber;
    long double longDoubleNumber;
    
    floatNumber = 12345.67890123456789f;
    doubleNumber = 12345.67890123456789;
    longDoubleNumber = 12345.67890123456789L;
    
    printf("size of float is: %zu bytes\n", sizeof(floatNumber));
    printf("size of double is: %zu bytes\n", sizeof(doubleNumber));
    printf("size of long double is: %zu bytes\n", sizeof(longDoubleNumber));
    return 0;
}

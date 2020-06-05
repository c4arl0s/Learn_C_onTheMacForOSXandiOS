//
//  main.c
//  7Factor
//
//  Created by Carlos Santiago Cruz on 05/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool factor(int number, int *firstFactorPointer, int *secondFactorPointer);

int main(int argc, const char * argv[])
{
    int number;
    
    for (number=2; number<=20; number++) {
        bool isPrime;
        int firstFactorNumber, secondFactorNumber;
        
        isPrime = factor(number, &firstFactorNumber, &secondFactorNumber);
        if (isPrime)
            printf("The number %d is prime\n", number);
        else
            printf("The number %d has %d and %d as factors\n", number, firstFactorNumber, secondFactorNumber);
        
    }
    return 0;
}

bool factor(int number, int *firstFactorPointer, int *secondFactorPointer)
{
    int factor;

    for (factor = sqrt(number); factor > 1; factor--) {
        if ((number % factor ) == 0) {
                break;
        }
    }
    *firstFactorPointer = factor;
    *secondFactorPointer = number / factor;
    return ( factor == 1);
}


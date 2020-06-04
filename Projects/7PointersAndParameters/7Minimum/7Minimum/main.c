//
//  main.c
//  7Minimum
//
//  Created by Carlos Santiago Cruz on 04/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int minimum(int firstNumber, int secondNumber);

int main(int argc, const char * argv[]) {
    printf("%d is smaller of 7 an 23\n", minimum(7,23));
    printf("%d is smaller of 23 and 7\n", minimum(23, 7));
}

int minimum(int firstNumber, int secondNumber)
{
    if(firstNumber<secondNumber)
        return firstNumber;
    return secondNumber;
}

//
//  main.c
//  7Average
//
//  Created by Carlos Santiago Cruz on 03/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int average( int firstNumber, int secondNumber);

int main(int argc, const char * argv[]) {
    int averageNumber;
    int lineLenght = printf("The average of 7 and 23 is %d\n", average(7,23));
    printf("The previous line is %d characters long\n", lineLenght-1);

    return 0;
}

int average( int firstNumber, int secondNumber)
{
    return ( firstNumber + secondNumber ) / 2;
}


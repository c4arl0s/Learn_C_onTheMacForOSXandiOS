//
//  main.c
//  7DrawDots
//
//  Created by Carlos Santiago Cruz on 02/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

void DrawDots( int numberOfDots );

int main(int argc, const char * argv[]) {
    
    int numberOfDots;
    numberOfDots = 500;
    DrawDots(30);
    
    return 0;
}

void DrawDots(int numberOfDots)
{
    int index;
    for (index = 1; index <= numberOfDots; index++)
        printf(".");
    printf("\n");
}


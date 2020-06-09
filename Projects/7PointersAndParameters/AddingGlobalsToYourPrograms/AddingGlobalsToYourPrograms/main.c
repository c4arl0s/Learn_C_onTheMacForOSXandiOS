//
//  main.c
//  AddingGlobalsToYourPrograms
//
//  Created by Carlos Santiago Cruz on 09/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

void passAlong(void);
void printVariable(void);

int globalVariable;

int main(int argc, const char * argv[])
{
    globalVariable = 10;
    passAlong();
    return 0;
}

void passAlong(void)
{
    printVariable();
}

void printVariable(void)
{
    printf("globalVariable = %d\n", globalVariable);
}

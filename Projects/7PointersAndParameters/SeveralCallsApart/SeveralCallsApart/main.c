//
//  main.c
//  SeveralCallsApart
//
//  Created by Carlos Santiago Cruz on 08/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

void passAlong(int variable);
void printVariable(int variable);

int main(int argc, const char * argv[]) {
    int variable;
    
    variable = 10;
    passAlong(variable);
    return 0;
}

void passAlong(int variable)
{
    printVariable(variable);
}

void printVariable(int variable)
{
    printf("variable = %d\n", variable);
}


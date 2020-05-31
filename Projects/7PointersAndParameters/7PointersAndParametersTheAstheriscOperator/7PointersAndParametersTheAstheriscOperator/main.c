//
//  main.c
//  7PointersAndParametersTheAstheriscOperator
//
//  Created by Carlos Santiago Cruz on 31/05/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int variable = 27;
    int *pointer;
    
    pointer = &variable;
    
    printf("the value of variable is %d\n", variable);
    printf("the value of variable is %d\n", *pointer);
    
    printf("the value of pointer is: %p\n", pointer);
    printf("the address of variable is: %p\n", &variable);
    
    *pointer = 27;
    printf("the new value of variable is %d\n", variable);
    
    return 0;
}

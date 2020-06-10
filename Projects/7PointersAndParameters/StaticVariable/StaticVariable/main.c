//
//  main.c
//  StaticVariable
//
//  Created by Carlos Santiago Cruz on 10/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

void countDown(void);

int main(int argc, const char * argv[]) {
    countDown();
    countDown();
    countDown();
    countDown();
    return 0;
}

void countDown(void)
{
    static int count = 3;
    
    if (count != 0)
        printf("%d ...\n", count--);
    else
        printf("Liff-off! \n");
}

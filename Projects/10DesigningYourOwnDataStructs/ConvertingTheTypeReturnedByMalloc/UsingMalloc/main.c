//
//  main.c
//  UsingMalloc
//
//  Created by Carlos Santiago Cruz on 01/07/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "StructSize.h"

int main(int argc, const char * argv[]) {

    struct DVDInfo *dvdInfoPointer;
    dvdInfoPointer = (struct DVDInfo *)malloc(sizeof(struct DVDInfo));
    return 0;

}

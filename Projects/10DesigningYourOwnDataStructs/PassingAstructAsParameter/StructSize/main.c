//
//  main.c
//  StructSize
//
//  Created by Carlos Santiago Cruz on 20/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include "StructSize.h"

void printDVD(struct DVDInfo *dvdInfo);

int main(int argc, const char * argv[]) {
    struct DVDInfo dvdInfo;
    printDVD(&dvdInfo);
    return 0;
}

void printDVD(struct DVDInfo *dvdInfoPointer)
{
    printf("rating: %d \n", (*dvdInfoPointer).rating);
    printf("title: %s \n", dvdInfoPointer->title);
    printf("comment: %s \n", dvdInfoPointer->comment);
}

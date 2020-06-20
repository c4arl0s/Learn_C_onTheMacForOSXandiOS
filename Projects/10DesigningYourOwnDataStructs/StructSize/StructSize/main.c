//
//  main.c
//  StructSize
//
//  Created by Carlos Santiago Cruz on 20/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include "StructSize.h"

int main(int argc, const char * argv[]) {
    struct DVDInfo dvdInfo;
    printf("rating field: %4zu bytes \n", sizeof(dvdInfo.rating));
    printf("title field: %4zu bytes \n", sizeof(dvdInfo.title));
    printf("comment field: %4zu bytes \n", sizeof(dvdInfo.comment));
    printf("dvdInfo Sruct: %4zu bytes \n", sizeof(dvdInfo));
}

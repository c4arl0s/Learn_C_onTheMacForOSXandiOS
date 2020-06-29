//
//  main.c
//  ParamAddress
//
//  Created by Carlos Santiago Cruz on 29/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include "StructSize.h"

void printParamInfo(struct DVDInfo *dvdInfoPointer, struct DVDInfo);

int main(int argc, const char * argv[])
{
    
    struct DVDInfo dvdInfo;
    printf("Address of dvdInfo.rating in main(): %28p \n", &(dvdInfo.rating));
    printParamInfo(&dvdInfo, dvdInfo);
    return 0;
}

void printParamInfo(struct DVDInfo *dvdInfoPointer, struct DVDInfo dvdInfo)
{
    printf("Address of dvdInfoPointer->rating in printParamInfo is: %10p \n",&(dvdInfoPointer->rating));
    printf("Address of dvdInfo->rating in printParamInfo is: %10p \n",&(dvdInfo.rating));
}

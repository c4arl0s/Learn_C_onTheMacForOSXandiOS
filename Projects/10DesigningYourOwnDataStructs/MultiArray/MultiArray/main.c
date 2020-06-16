//
//  main.c
//  MultiArray
//
//  Created by Carlos Santiago Cruz on 16/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

#define kMaxDVDs             5000
#define kMaxTitleLenght      256
#define kMaxCommentLenght    256

void printDVDTitle(int dvdNumber, char title[][kMaxTitleLenght]);

int main(int argc, const char * argv[]) {

    char title[kMaxDVDs][kMaxTitleLenght];
    int dvdNumber;
    printf("The title array takes up %zu bytes of memory\n", sizeof(title));
    for (dvdNumber=0; dvdNumber<kMaxDVDs; dvdNumber++) {
        printf("Title of DVD #%d", dvdNumber+1);
        fgets(title[dvdNumber], kMaxTitleLenght, stdin);
        fgets(<#char *restrict#>, <#int#>, <#FILE *#>)
    }
    printf("-----\n");
    for (dvdNumber=0; dvdNumber<kMaxDVDs; dvdNumber++) {
        printDVDTitle(dvdNumber, title);
    }
    return 0;
}

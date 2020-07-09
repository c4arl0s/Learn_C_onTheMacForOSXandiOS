//
//  main.c
//  DVDTracker
//
//  Created by Carlos Santiago Cruz on 08/07/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h> // you can access to printf() an fgets()
#include <stdlib.h> // you can access to malloc() and free()
#include <string.h> // you can access to strlen() and strlcpy()
#include <ctype.h> // you can access to isspace()
#include "dvdTracker.h" // your own header

char getCommand(void);
struct dvdInfo *readStruct(void);
void addToList(struct DVDInfo *dvdInfoPointer);
void listDVDs(void);
char *trimLine(char *line);

static struct DVDInfo *gHeadPointer, *gTailPointer;

int main(int argc, const char * argv[]) {
    
    return 0;
}

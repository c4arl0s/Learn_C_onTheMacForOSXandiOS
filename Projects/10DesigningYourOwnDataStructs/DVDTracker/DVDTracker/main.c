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

char getCommand(void) {
   exit(1);
}
struct DVDInfo * readStruct(void) {
   exit(1);
}
void addToList(struct DVDInfo *dvdInfoPointer) {
   exit(1);
}
void listDVDs(void) {
   exit(1);
}
char * trimLine(char *line) {
   exit(1);
}

static struct DVDInfo *globalHeadPointer, *globalTailPointer;

int main(int argc, const char * argv[]) {
    char command;
    while ( (command = getCommand()) != 'q' ) {
        switch (command) {
            case 'n':
                addToList( readStruct() );
                break;
            case 'l':
                listDVDs();
                break;
        }
        printf("\n---------------");
    }
    printf("Good bye... \n");
    return 0;
}

//char getCommand(void)
//{
//    char buffer[100+1];
//    printf("Enter command (q=quit, n=new, l=list): ");
//    fgets(buffer, sizeof(buffer), stdin);
//    return *trimLine(buffer);
//}

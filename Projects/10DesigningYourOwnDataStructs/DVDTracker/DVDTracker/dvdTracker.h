//
//  dvdTracker.h
//  DVDTracker
//
//  Created by Carlos Santiago Cruz on 08/07/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#ifndef dvdTracker_h
#define dvdTracker_h

#define kMaxTitleLength 256
#define kMaxCommentLength 256

struct DVDInfo {
    char rating;
    char title[kMaxTitleLength];
    char comment[kMaxCommentLength];
    struct DVDInfo *next;
};

#endif /* dvdTracker_h */

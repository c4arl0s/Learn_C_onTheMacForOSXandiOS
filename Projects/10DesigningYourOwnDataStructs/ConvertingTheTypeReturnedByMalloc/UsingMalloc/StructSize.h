//
//  StructSize.h
//  ParamAddress
//
//  Created by Carlos Santiago Cruz on 29/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#ifndef StructSize_h
#define StructSize_h

#define kMaxTitleLenght      256
#define kMaxCommentLenght    256

struct DVDInfo {
 int rating;
 char title[kMaxTitleLenght];
 char comment[kMaxCommentLenght];
};


#endif /* StructSize_h */

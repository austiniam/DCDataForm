////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  DCCheckItem.m
//  iOS Tester
//
//  Created by Austin Cherry on 4/18/14.
//  Copyright (c) 2014 Vluxe. All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#import "DCCheckItem.h"

@implementation DCCheckItem

////////////////////////////////////////////////////////////////////////////////////////////////////
- (instancetype)initWithTitle:(NSString*)title checked:(BOOL)checked
{
    if(self = [super init])
    {
        self.title = title;
        self.checked = checked;
    }
    
    return self;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
+(instancetype)itemWithTitle:(NSString*)title checked:(BOOL)checked
{
    return [[DCCheckItem alloc] initWithTitle:title checked:checked];
}
////////////////////////////////////////////////////////////////////////////////////////////////////

@end

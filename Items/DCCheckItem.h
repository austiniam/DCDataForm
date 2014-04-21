////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  DCCheckItem.h
//  iOS Tester
//
//  Created by Austin Cherry on 4/18/14.
//  Copyright (c) 2014 Vluxe. All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@interface DCCheckItem : NSObject

@property(nonatomic, assign)BOOL checked;

- (instancetype)initWithChecked:(BOOL)checked;

@end
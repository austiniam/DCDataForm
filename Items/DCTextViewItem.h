////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  DCTextViewItem.h
//  iOS Tester
//
//  Created by Austin Cherry on 4/18/14.
//  Copyright (c) 2014 Vluxe. All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@interface DCTextViewItem : NSObject

@property(nonatomic, strong)NSString *text;

- (instancetype)initWithText:(NSString *)text;

+ (instancetype)itemWithText:(NSString *)text;

@end

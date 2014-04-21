////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  DCDateItem.h
//  iOS Tester
//
//  Created by Austin Cherry on 4/18/14.
//  Copyright (c) 2014 Vluxe. All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@interface DCDateItem : NSObject

@property(nonatomic, strong)NSDate *date;

- (instancetype)initWithDate:(NSDate *)date;

@end
/************************************************************
 *  * Hyphenate CONFIDENTIAL
 * __________________
 * Copyright (C) 2016 Hyphenate Inc. All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Hyphenate Inc.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Hyphenate Inc.
 */

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class EMBuddy;
@protocol IUserModel <NSObject>

@property (strong, nonatomic, readonly) NSString *buddy;
@property (strong, nonatomic) NSString *nickname;
@property (strong, nonatomic) NSString *avatarURLPath;
@property (strong, nonatomic) UIImage *avatarImage;

// 好友关系ID
@property (nonatomic, assign) NSInteger friendShipId;
// 备注
@property (nonatomic, copy) NSString *to_alias;


- (instancetype)initWithBuddy:(NSString *)buddy;

- (instancetype)initWithFriendDic:(NSDictionary *)dict;


@end

//
//  ALIENKeychainHelper.h
//  ALIENKeychainHelper
//
//  Created by AlienLi on 14-4-22.
//  Copyright (c) 2014年 AlienLi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>
@interface ALIENKeychainHelper : NSObject

+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)delete:(NSString *)service ;

@end

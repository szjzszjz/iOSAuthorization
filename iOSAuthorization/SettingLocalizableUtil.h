//
//  SettingLocalizableUtil.h
//  Code Block
//
//  Created by 史博 on 17/3/1.
//  Copyright © 2017年 史博. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SettingLocalizableUtil : NSObject

+ (NSString *)localizedStringForKey:(NSString *)key withDefault:(NSString *)defaultString;

@end

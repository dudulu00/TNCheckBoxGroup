//
//  TNImageCheckbox.h
//  Flirty
//
//  Created by Frederik Jacques on 02/04/14.
//  Copyright (c) 2014 Frederik Jacques. All rights reserved.
//

#import "TNCheckBox.h"

@interface TNImageCheckbox : TNCheckBox

+ (instancetype)checkBoxWithLabel:(NSString *)label tag:(NSUInteger)tag checked:(BOOL)checked uncheckedImage:(UIImage *)uncheckedImage checkedImage:(UIImage *)checkedImage;

- (instancetype)initWithLabel:(NSString *)label tag:(NSUInteger)tag checked:(BOOL)checked uncheckedImage:(UIImage *)uncheckedImage checkedImage:(UIImage *)checkedImage;

@end

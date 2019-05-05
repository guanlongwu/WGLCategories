//
//  UIImage+MainBundle.h
//  WGLCategories
//
//  Created by wugl on 2019/5/5.
//  Copyright © 2019 WGLKit. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (MainBundle)

+ (UIImage *_Nullable)imageWithName:(NSString *_Nullable)name;

+ (UIImage *_Nullable)imageWithName:(NSString *_Nullable)name withScale:(float)scale;

+ (NSString *)getImagePath:(NSString *)name scale:(NSInteger)scale inBundleURL:(NSURL *)bundleURL;

@end

NS_ASSUME_NONNULL_END

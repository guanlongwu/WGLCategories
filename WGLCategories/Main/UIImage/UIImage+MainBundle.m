//
//  UIImage+MainBundle.m
//  WGLCategories
//
//  Created by wugl on 2019/5/5.
//  Copyright © 2019 WGLKit. All rights reserved.
//

#import "UIImage+MainBundle.h"

@implementation UIImage (MainBundle)

+ (UIImage *_Nullable)imageWithName:(NSString *_Nullable)name {
    if (!name)
        return nil;
    NSInteger scale = (NSInteger)[[UIScreen mainScreen] scale];
    return [UIImage imageWithName:name withScale:scale];
}

+ (UIImage *_Nullable)imageWithName:(NSString *_Nullable)name withScale:(float)scale {
    if (!name) {
        return nil;
    }
//    NSURL *bundleUrl = [[NSBundle bundleForClass:self.class] URLForResource:@"ImageBundle" withExtension:@"bundle"];
    NSURL *bundleURL = [[NSBundle mainBundle] bundleURL];
    NSString *path = [self getImagePath:name scale:scale inBundleURL:bundleURL];
    if ([path isEqualToString:@""]) {
        return [UIImage new];
    }
    UIImage *img = [UIImage imageWithContentsOfFile:path];
    return img;
}

+ (NSString *)getImagePath:(NSString *)name scale:(NSInteger)scale inBundleURL:(NSURL *)bundleURL {
    if (name.length == 0 || scale == 0 || bundleURL.absoluteString.length == 0) {
        return @"";
    }
    
    NSBundle *customBundle = [NSBundle bundleWithURL:bundleURL];
    NSString *bundlePath = [customBundle bundlePath];
    NSString *imgPath = [bundlePath stringByAppendingPathComponent:name];
    NSString *pathExtension = [imgPath pathExtension];
    //没有后缀加上PNG后缀
    if (!pathExtension || pathExtension.length == 0) {
        pathExtension = @"png";
    }
    //Scale是根据屏幕不同选择使用@2x还是@3x的图片
    NSString *imageName = nil;
    if (scale == 1) {
        imageName = [NSString stringWithFormat:@"%@.%@", [[imgPath lastPathComponent] stringByDeletingPathExtension], pathExtension];
    }
    else {
        imageName = [NSString stringWithFormat:@"%@@%ldx.%@", [[imgPath lastPathComponent] stringByDeletingPathExtension], (long)scale, pathExtension];
    }
    
    //返回删掉旧名称加上新名称的路径
    return [[imgPath stringByDeletingLastPathComponent] stringByAppendingPathComponent:imageName];
}

@end

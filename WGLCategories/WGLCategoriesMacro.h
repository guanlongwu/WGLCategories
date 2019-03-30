//
//  WGLCategoriesMacro.h
//  WGLCategories
//
//  Created by wugl on 2019/3/30.
//  Copyright © 2019 WGLKit. All rights reserved.
//

#ifndef WGLCategoriesMacro_h
#define WGLCategoriesMacro_h

/******************* UIDevice *******************/

#ifndef kIsCameraAvailable      //相机是否可用
#define kIsCameraAvailable [UIDevice isCameraAvailable]
#endif

#ifndef kIsAssetsLibraryAvailable       //相册是否可用
#define kIsAssetsLibraryAvailable [UIDevice isAssetsLibraryAvailable]
#endif

#ifndef kIsUserNotificationEnabled       //用户通知是否启用
#define kIsUserNotificationEnabled [UIDevice isUserNotificationEnabled]
#endif

#ifndef kSystemVersion      //设备系统版本号 e.g. 8.1 (doubleValue)
#define kSystemVersion [UIDevice systemVersion]
#endif

#ifndef kStringWithUUID      //返回一个新的 UUID NSString e.g."D1178E50-2A4D-4F1F-9BD3-F6AAB00E06B1"
#define kStringWithUUID [UIDevice stringWithUUID]
#endif

#ifndef kIsPad      //判断设备是否iPad/iPad mini.
#define kIsPad [UIDevice currentDevice].isPad
#endif

#ifndef kIsSimulator      //判断设备是否模拟器simulator.
#define kIsSimulator [UIDevice currentDevice].isSimulator
#endif

#ifndef kIsJailbroken      //判断设备是否越狱jailbroken.
#define kIsJailbroken [UIDevice currentDevice].isJailbroken
#endif


/******************* NSBundle *******************/

#ifndef AppBundleName   // Application's Bundle Name.
#define AppBundleName [NSBundle mainBundle].appBundleName
#endif

#ifndef AppBundleID     // Application's Bundle ID.  e.g. "com.ibireme.MyApp"
#define AppBundleID [NSBundle mainBundle].appBundleID
#endif

#ifndef AppVersion      // Application's Version.  e.g. "1.2.0"
#define AppVersion [NSBundle mainBundle].appVersion
#endif

#ifndef AppBuildVersion     // Application's Build number. e.g. "123"
#define AppBuildVersion [NSBundle mainBundle].appBuildVersion
#endif


/******************* UIColor *******************/

#ifndef kColor_RGB(r, g, b)
#define kColor_RGB(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#endif

#ifndef kColor_RGBA(r, g, b, a)
#define kColor_RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#endif

#ifndef kColor_HEX(c)
#define kColor_HEX(c) [UIColor colorWithHexString:c]
#endif


/******************* NSFileManager *******************/

#ifndef kDocumentsURL
#define kDocumentsURL [NSFileManager defaultManager].documentsURL
#endif

#ifndef kDocumentsPath
#define kDocumentsPath [NSFileManager defaultManager].documentsPath
#endif

#ifndef kCachesURL
#define kCachesURL [NSFileManager defaultManager].cachesURL
#endif

#ifndef kCachesPath
#define kCachesPath [NSFileManager defaultManager].cachesPath
#endif

#ifndef kLibraryURL
#define kLibraryURL [NSFileManager defaultManager].libraryURL
#endif

#ifndef kLibraryPath
#define kLibraryPath [NSFileManager defaultManager].libraryPath
#endif

/******************* NSData *******************/

#ifndef kBase64StringForData(data)  //base64编码的字符串.
#define kBase64StringForData(data) [data base64EncodedString]
#endif

#ifndef kMD2StringForData(data)     //md2哈希的小写字符串.
#define kMD2StringForData(data) [data md2String]
#endif

#ifndef kMD4StringForData(data)     //md4哈希的小写字符串.
#define kMD4StringForData(data) [data md4String]
#endif

#ifndef kSHA1StringForData(data)     //sha1哈希的小写字符串.
#define kSHA1StringForData(data) [data sha1String]
#endif

#ifndef kSHA224StringForData(data)     //sha224哈希的小写字符串.
#define kSHA224StringForData(data) [data sha224String]
#endif

#ifndef kSHA256StringForData(data)     //sha256哈希的小写字符串.
#define kSHA256StringForData(data) [data sha256String]
#endif

#ifndef kSHA384StringForData(data)     //sha384哈希的小写字符串.
#define kSHA384StringForData(data) [data sha384String]
#endif

#ifndef kSHA512StringForData(data)     //sha512哈希的小写字符串.
#define kSHA512StringForData(data) [data sha512String]
#endif




#endif /* WGLCategoriesMacro_h */

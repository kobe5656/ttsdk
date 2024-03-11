#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BADataEntity.h"
#import "BANetManager.h"
#import "BANetManagerCache.h"
#import "BANetManager_OC.h"
#import "BANetManager_Version.h"
#import "UIImage+CompressImage.h"

FOUNDATION_EXPORT double BANetManagerVersionNumber;
FOUNDATION_EXPORT const unsigned char BANetManagerVersionString[];


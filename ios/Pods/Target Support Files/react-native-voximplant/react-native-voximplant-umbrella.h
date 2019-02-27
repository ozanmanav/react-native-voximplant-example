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

#import "CallManager.h"
#import "Constants.h"
#import "Utils.h"
#import "VIAudioDeviceModule.h"
#import "VICallModule.h"
#import "VICameraModule.h"
#import "VIClientModule.h"
#import "VideoView.h"
#import "VideoViewManager.h"
#import "VoxImplantModule.h"
#import "VoxView.h"
#import "VoxViewManager.h"

FOUNDATION_EXPORT double react_native_voximplantVersionNumber;
FOUNDATION_EXPORT const unsigned char react_native_voximplantVersionString[];


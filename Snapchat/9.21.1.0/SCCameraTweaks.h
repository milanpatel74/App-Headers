//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTweak, SCCameraTweakObserver;

@interface SCCameraTweaks : NSObject
{
    FBTweak *_galleryEnabled;
    FBTweak *_signatureIDEnabled;
    FBTweak *_animatedImageFrames;
    FBTweak *_animatedImageMinTimeInterval;
    FBTweak *_animatedImageMaxTimeInterval;
    SCCameraTweakObserver *_tweakObserver;
}

+ (id)sharedTweaks;
- (void).cxx_destruct;
- (double)animatedImageMaxDuration;
- (double)animatedImageMinDuration;
- (long long)animatedImageFrameCount;
- (_Bool)enableSignatureID;
- (_Bool)enableGallery;
- (id)init;

@end

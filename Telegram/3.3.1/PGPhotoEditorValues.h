//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TGMediaEditAdjustments.h"

@class NSDictionary, NSString;

@interface PGPhotoEditorValues : NSObject <TGMediaEditAdjustments>
{
    long long _cropOrientation;
    double _cropLockedAspectRatio;
    double _cropRotation;
    NSDictionary *_toolValues;
    struct CGSize _originalSize;
    struct CGRect _cropRect;
}

+ (id)editorValuesWithOriginalSize:(struct CGSize)arg1 cropRect:(struct CGRect)arg2 cropRotation:(double)arg3 cropOrientation:(long long)arg4 cropLockedAspectRatio:(double)arg5 toolValues:(id)arg6;
@property(readonly, nonatomic) NSDictionary *toolValues; // @synthesize toolValues=_toolValues;
@property(readonly, nonatomic) double cropRotation; // @synthesize cropRotation=_cropRotation;
@property(readonly, nonatomic) double cropLockedAspectRatio; // @synthesize cropLockedAspectRatio=_cropLockedAspectRatio;
@property(readonly, nonatomic) long long cropOrientation; // @synthesize cropOrientation=_cropOrientation;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
- (void).cxx_destruct;
- (double)_cropRectEpsilon;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isDefaultValuesForAvatar:(_Bool)arg1;
- (_Bool)toolsApplied;
- (_Bool)cropAppliedForAvatar:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


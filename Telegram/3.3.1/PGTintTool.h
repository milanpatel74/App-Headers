//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PGPhotoTool.h"

@class PGPhotoProcessPassParameter;

@interface PGTintTool : PGPhotoTool
{
    PGPhotoProcessPassParameter *_shadowsIntensityParameter;
    PGPhotoProcessPassParameter *_highlightsIntensityParameter;
    PGPhotoProcessPassParameter *_shadowsTintColorParameter;
    PGPhotoProcessPassParameter *_highlightsTintColorParameter;
}

- (void).cxx_destruct;
- (id)shaderString;
- (id)ancillaryShaderString;
- (void)updateParameters;
- (id)parameters;
- (Class)valueClass;
- (_Bool)shouldBeSkipped;
- (id)itemControlViewWithChangeBlock:(CDUnknownBlockType)arg1;
- (id)image;
- (id)title;
- (id)init;

@end


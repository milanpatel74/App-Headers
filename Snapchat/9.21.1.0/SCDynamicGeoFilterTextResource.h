//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDynamicGeoFilterResource.h"

@class NSString, UIColor;

@interface SCDynamicGeoFilterTextResource : SCDynamicGeoFilterResource
{
    double _fontSize;
    NSString *_fontURL;
    NSString *_staticText;
    UIColor *_fontColor;
    long long _alignment;
}

+ (_Bool)_isEndpointRequest:(id)arg1;
- (void).cxx_destruct;
- (void)_imageWithCanvasSize:(struct CGSize)arg1 font:(id)arg2 text:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_imageWithCanvasSize:(struct CGSize)arg1 font:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getUIImageWithCanvasSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


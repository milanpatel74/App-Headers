//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TGWebSearchResult.h"

@class NSString, TGImageInfo;

@interface TGWebSearchInternalImageResult : NSObject <TGWebSearchResult>
{
    long long _imageId;
    long long _accessHash;
    TGImageInfo *_imageInfo;
}

@property(readonly, nonatomic) TGImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(readonly, nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(readonly, nonatomic) long long imageId; // @synthesize imageId=_imageId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageId:(long long)arg1 accessHash:(long long)arg2 imageInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


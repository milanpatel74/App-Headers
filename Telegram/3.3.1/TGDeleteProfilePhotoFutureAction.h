//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGFutureAction.h"

@interface TGDeleteProfilePhotoFutureAction : TGFutureAction
{
    long long _imageId;
    long long _accessHash;
}

@property(nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(nonatomic) long long imageId; // @synthesize imageId=_imageId;
- (id)deserialize:(id)arg1;
- (id)serialize;
- (id)initWithImageId:(long long)arg1 accessHash:(long long)arg2;

@end


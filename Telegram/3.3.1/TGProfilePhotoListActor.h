//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

@interface TGProfilePhotoListActor : TGActor
{
    long long _peerId;
}

+ (id)genericPath;
@property(nonatomic) long long peerId; // @synthesize peerId=_peerId;
- (void)photoListRequestFailed;
- (void)photoListRequestSuccess:(id)arg1;
- (void)execute:(id)arg1;

@end


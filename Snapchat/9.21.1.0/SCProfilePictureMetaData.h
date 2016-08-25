//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCProfilePictureMetaData.h"

@class NSString;

@interface SCProfilePictureMetaData : NSObject <SCProfilePictureMetaData>
{
    long long _size;
    long long _lastFetchedTimestamp;
    long long _profilePictureTimestamp;
}

@property(readonly, nonatomic) long long profilePictureTimestamp; // @synthesize profilePictureTimestamp=_profilePictureTimestamp;
@property(readonly, nonatomic) long long lastFetchedTimestamp; // @synthesize lastFetchedTimestamp=_lastFetchedTimestamp;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(long long)arg1 lastFetchedTimestamp:(long long)arg2 profilePictureTimestamp:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

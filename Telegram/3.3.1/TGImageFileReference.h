//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TGFileReference.h"

@class NSString;

@interface TGImageFileReference : NSObject <TGFileReference>
{
    int _datacenterId;
    int _localId;
    long long _volumeId;
    long long _secret;
}

@property(readonly, nonatomic) long long secret; // @synthesize secret=_secret;
@property(readonly, nonatomic) int localId; // @synthesize localId=_localId;
@property(readonly, nonatomic) long long volumeId; // @synthesize volumeId=_volumeId;
@property(readonly, nonatomic) int datacenterId; // @synthesize datacenterId=_datacenterId;
- (id)initWithUrl:(id)arg1;
- (id)initWithDatacenterId:(int)arg1 volumeId:(long long)arg2 localId:(int)arg3 secret:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGStoredOutgoingMessageFileInfo.h"

@interface TGStoredOutgoingMessageFileInfoBigUploaded : TGStoredOutgoingMessageFileInfo
{
    int _parts;
    int _key_fingerprint;
    long long _n_id;
}

@property(nonatomic) int key_fingerprint; // @synthesize key_fingerprint=_key_fingerprint;
@property(nonatomic) int parts; // @synthesize parts=_parts;
@property(nonatomic) long long n_id; // @synthesize n_id=_n_id;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)initWithN_id:(long long)arg1 parts:(int)arg2 key_fingerprint:(int)arg3;

@end


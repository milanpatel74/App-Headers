//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLMetaRpc.h"

@class NSArray, TLInputChannel;

@interface TLRPCchannels_getMessages : TLMetaRpc
{
    TLInputChannel *_channel;
    NSArray *_n_id;
}

@property(retain, nonatomic) NSArray *n_id; // @synthesize n_id=_n_id;
@property(retain, nonatomic) TLInputChannel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;
- (int)layerVersion;
- (int)impliedResponseSignature;
- (Class)responseClass;

@end


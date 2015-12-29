//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLMetaRpc.h"

@class TLInputChannel;

@interface TLRPCchannels_getImportantHistory : TLMetaRpc
{
    int _offset_id;
    int _add_offset;
    int _limit;
    int _max_id;
    int _min_id;
    TLInputChannel *_channel;
}

@property(nonatomic) int min_id; // @synthesize min_id=_min_id;
@property(nonatomic) int max_id; // @synthesize max_id=_max_id;
@property(nonatomic) int limit; // @synthesize limit=_limit;
@property(nonatomic) int add_offset; // @synthesize add_offset=_add_offset;
@property(nonatomic) int offset_id; // @synthesize offset_id=_offset_id;
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


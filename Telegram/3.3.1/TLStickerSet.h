//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLObject.h"

@class NSString;

@interface TLStickerSet : NSObject <TLObject>
{
    int _flags;
    int _count;
    int _n_hash;
    long long _n_id;
    long long _access_hash;
    NSString *_title;
    NSString *_short_name;
}

@property(nonatomic) int n_hash; // @synthesize n_hash=_n_hash;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *short_name; // @synthesize short_name=_short_name;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long access_hash; // @synthesize access_hash=_access_hash;
@property(nonatomic) long long n_id; // @synthesize n_id=_n_id;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

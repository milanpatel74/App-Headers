//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLObject.h"

@class NSString;

@interface TLphone_DhConfig : NSObject <TLObject>
{
    int _g;
    int _ring_timeout;
    int _expires;
    NSString *_p;
}

@property(nonatomic) int expires; // @synthesize expires=_expires;
@property(nonatomic) int ring_timeout; // @synthesize ring_timeout=_ring_timeout;
@property(retain, nonatomic) NSString *p; // @synthesize p=_p;
@property(nonatomic) int g; // @synthesize g=_g;
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

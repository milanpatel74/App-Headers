//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLObject.h"

@class NSArray, NSString;

@interface TLFutureSalts : NSObject <TLObject>
{
    int _now;
    long long _req_msg_id;
    NSArray *_salts;
}

@property(retain, nonatomic) NSArray *salts; // @synthesize salts=_salts;
@property(nonatomic) int now; // @synthesize now=_now;
@property(nonatomic) long long req_msg_id; // @synthesize req_msg_id=_req_msg_id;
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

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLMetaRpc.h"

@class NSString;

@interface TLRPCauth_sendSms : TLMetaRpc
{
    NSString *_phone_number;
    NSString *_phone_code_hash;
}

@property(retain, nonatomic) NSString *phone_code_hash; // @synthesize phone_code_hash=_phone_code_hash;
@property(retain, nonatomic) NSString *phone_number; // @synthesize phone_number=_phone_number;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;
- (int)layerVersion;
- (int)impliedResponseSignature;
- (Class)responseClass;

@end


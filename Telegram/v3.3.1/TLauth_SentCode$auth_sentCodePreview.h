//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLauth_SentCode.h"

@class NSString;

@interface TLauth_SentCode$auth_sentCodePreview : TLauth_SentCode
{
    NSString *_phone_code_hash;
    NSString *_phone_code_test;
}

@property(retain, nonatomic) NSString *phone_code_test; // @synthesize phone_code_test=_phone_code_test;
@property(retain, nonatomic) NSString *phone_code_hash; // @synthesize phone_code_hash=_phone_code_hash;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end

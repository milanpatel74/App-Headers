//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLUpdate.h"

@class NSString;

@interface TLUpdate$updateNewAuthorization : TLUpdate
{
    int _date;
    long long _auth_key_id;
    NSString *_device;
    NSString *_location;
}

@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *device; // @synthesize device=_device;
@property(nonatomic) int date; // @synthesize date=_date;
@property(nonatomic) long long auth_key_id; // @synthesize auth_key_id=_auth_key_id;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end


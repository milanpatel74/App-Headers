//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLUpdate.h"

@class NSString;

@interface TLUpdate$updateUserPhone : TLUpdate
{
    int _user_id;
    NSString *_phone;
}

@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(nonatomic) int user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLInputUser.h"

@interface TLInputUser$inputUser : TLInputUser
{
    int _user_id;
    long long _access_hash;
}

@property(nonatomic) long long access_hash; // @synthesize access_hash=_access_hash;
@property(nonatomic) int user_id; // @synthesize user_id=_user_id;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end


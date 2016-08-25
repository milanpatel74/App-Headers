//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLupdates_Difference.h"

@class NSArray, TLupdates_State;

@interface TLupdates_Difference$updates_differenceSlice : TLupdates_Difference
{
    NSArray *_n_new_messages;
    NSArray *_n_new_encrypted_messages;
    NSArray *_other_updates;
    NSArray *_chats;
    NSArray *_users;
    TLupdates_State *_intermediate_state;
}

@property(retain, nonatomic) TLupdates_State *intermediate_state; // @synthesize intermediate_state=_intermediate_state;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSArray *chats; // @synthesize chats=_chats;
@property(retain, nonatomic) NSArray *other_updates; // @synthesize other_updates=_other_updates;
@property(retain, nonatomic) NSArray *n_new_encrypted_messages; // @synthesize n_new_encrypted_messages=_n_new_encrypted_messages;
@property(retain, nonatomic) NSArray *n_new_messages; // @synthesize n_new_messages=_n_new_messages;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end

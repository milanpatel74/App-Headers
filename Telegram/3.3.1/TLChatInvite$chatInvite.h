//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLChatInvite.h"

@class NSString;

@interface TLChatInvite$chatInvite : TLChatInvite
{
    int _flags;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end


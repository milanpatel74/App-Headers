//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLObject.h"

@class NSString, TLBotInfo, TLPeerNotifySettings, TLPhoto, TLUser, TLcontacts_Link;

@interface TLUserFull : NSObject <TLObject>
{
    _Bool _blocked;
    TLUser *_user;
    TLcontacts_Link *_link;
    TLPhoto *_profile_photo;
    TLPeerNotifySettings *_notify_settings;
    TLBotInfo *_bot_info;
}

@property(retain, nonatomic) TLBotInfo *bot_info; // @synthesize bot_info=_bot_info;
@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(retain, nonatomic) TLPeerNotifySettings *notify_settings; // @synthesize notify_settings=_notify_settings;
@property(retain, nonatomic) TLPhoto *profile_photo; // @synthesize profile_photo=_profile_photo;
@property(retain, nonatomic) TLcontacts_Link *link; // @synthesize link=_link;
@property(retain, nonatomic) TLUser *user; // @synthesize user=_user;
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

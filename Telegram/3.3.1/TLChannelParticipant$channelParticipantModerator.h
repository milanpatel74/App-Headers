//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLChannelParticipant.h"

@interface TLChannelParticipant$channelParticipantModerator : TLChannelParticipant
{
    int _inviter_id;
    int _date;
}

@property(nonatomic) int date; // @synthesize date=_date;
@property(nonatomic) int inviter_id; // @synthesize inviter_id=_inviter_id;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end


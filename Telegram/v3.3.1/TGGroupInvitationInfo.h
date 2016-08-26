//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TGGroupInvitationInfo : NSObject
{
    _Bool _alreadyAccepted;
    _Bool _left;
    _Bool _isChannel;
    _Bool _isChannelGroup;
    NSString *_title;
    long long _peerId;
}

@property(readonly, nonatomic) long long peerId; // @synthesize peerId=_peerId;
@property(readonly, nonatomic) _Bool isChannelGroup; // @synthesize isChannelGroup=_isChannelGroup;
@property(readonly, nonatomic) _Bool isChannel; // @synthesize isChannel=_isChannel;
@property(readonly, nonatomic) _Bool left; // @synthesize left=_left;
@property(readonly, nonatomic) _Bool alreadyAccepted; // @synthesize alreadyAccepted=_alreadyAccepted;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 alreadyAccepted:(_Bool)arg2 left:(_Bool)arg3 isChannel:(_Bool)arg4 isChannelGroup:(_Bool)arg5 peerId:(long long)arg6;

@end

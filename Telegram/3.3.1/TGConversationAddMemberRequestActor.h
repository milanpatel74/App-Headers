//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

@interface TGConversationAddMemberRequestActor : TGActor
{
    int _uid;
}

+ (id)genericPath;
@property(nonatomic) int uid; // @synthesize uid=_uid;
- (void)addMemberFailed:(int)arg1;
- (void)addMemberSuccess:(id)arg1;
- (void)execute:(id)arg1;

@end


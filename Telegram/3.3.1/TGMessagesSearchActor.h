//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

@class NSArray, NSSet;

@interface TGMessagesSearchActor : TGActor
{
    _Bool _cancelled;
    NSArray *_clientSideResults;
    NSSet *_clientSideMids;
}

+ (id)genericPath;
- (void).cxx_destruct;
- (void)cancel;
- (void)messagesSearchFailed;
- (void)messagesSearchSuccess:(id)arg1;
- (void)execute:(id)arg1;

@end


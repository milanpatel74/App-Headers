//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLmessages_Messages.h"

@class NSArray;

@interface TLmessages_Messages$modernChannelMessages : TLmessages_Messages
{
    int _flags;
    int _pts;
    int _count;
    NSArray *_collapsed;
}

@property(retain, nonatomic) NSArray *collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) int pts; // @synthesize pts=_pts;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)TLserialize:(id)arg1;

@end


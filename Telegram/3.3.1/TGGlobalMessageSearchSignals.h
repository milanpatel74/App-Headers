//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGGlobalMessageSearchSignals : NSObject
{
}

+ (id)recentPeerResults:(CDUnknownBlockType)arg1;
+ (void)removeRecentPeerResult:(long long)arg1;
+ (void)addRecentPeerResult:(long long)arg1;
+ (void)clearRecentResults;
+ (id)searchMessages:(id)arg1 peerId:(long long)arg2 accessHash:(long long)arg3;
+ (id)searchUsersAndChannels:(id)arg1;
+ (id)searchDialogs:(id)arg1;
+ (id)searchDialogs:(id)arg1 itemMapping:(CDUnknownBlockType)arg2;
+ (id)searchMessages:(id)arg1 peerId:(long long)arg2 accessHash:(long long)arg3 itemMapping:(CDUnknownBlockType)arg4;
+ (id)search:(id)arg1 includeMessages:(_Bool)arg2 itemMapping:(CDUnknownBlockType)arg3;

@end


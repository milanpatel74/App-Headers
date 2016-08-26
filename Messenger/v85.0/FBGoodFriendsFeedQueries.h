/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBGoodFriendsFeedQueries : NSObject
+(void)fetchCachedGoodFriendsListWithSession:(id)arg1 messagePackCoder:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)cacheGoodFriendsList:(id)arg1 withSession:(id)arg2 ;
+(void)fetchGoodFriendsListWithSession:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)_parseGoodFriendsFriendListWithResponse:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)cachedGoodFriendsListWithSession:(id)arg1 ;
+(void)fetchFriendListWithMembersWithSession:(id)arg1 friendListID:(id)arg2 count:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(void)fetchTopFriendsWithSession:(id)arg1 count:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECUserManager.h>

@interface ECUserManagerCAPI : ECUserManager
-(void)fetchRemoteUserWatchlistWithPageSize:(unsigned long long)arg1 pageOffset:(unsigned long long)arg2 onlyIdentifiers:(BOOL)arg3 callID:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)expireToken;
-(void)loginWithName:(id)arg1 password:(id)arg2 loginType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeAuthData;
-(void)setAuthData;
-(void)addAdIDToRemoteWatchlist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAdIDsFromRemoteWatchlist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addIDsToRemoteWatchlist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

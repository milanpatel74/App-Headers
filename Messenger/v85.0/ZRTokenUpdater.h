/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUserSessionClassProvidable.h>
#import <Messenger/ZRCampaignDataFetcherDelegate.h>

@protocol ZRLoggedInUserId;
@class ZRCampaignDataFetcher, ZRApplicationState, ZRTokenCurrentNetwork, NSRecursiveLock, FBExponentialBackoffTimer, NSString;

@interface ZRTokenUpdater : NSObject <FBUserSessionClassProvidable, ZRCampaignDataFetcherDelegate> {

	ZRCampaignDataFetcher* _providedTokenFetcher;
	ZRApplicationState* _zeroRatingState;
	ZRTokenCurrentNetwork* _network;
	NSRecursiveLock* _sharedZeroTokenDataLock;
	FBExponentialBackoffTimer* _backoffTimer;
	BOOL _refreshPending;
	BOOL _refreshAllowed;
	id<ZRLoggedInUserId> _loggedInUserId;
	ZRCampaignDataFetcher* _tokenFetcher;

}

@property (nonatomic,retain) id<ZRLoggedInUserId> loggedInUserId;               //@synthesize loggedInUserId=_loggedInUserId - In the implementation block
@property (nonatomic,retain) ZRCampaignDataFetcher * tokenFetcher;              //@synthesize tokenFetcher=_tokenFetcher - In the implementation block
@property (nonatomic,readonly) BOOL refreshPending;                             //@synthesize refreshPending=_refreshPending - In the implementation block
@property (assign,nonatomic) BOOL refreshAllowed;                               //@synthesize refreshAllowed=_refreshAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)refreshPending;
-(id<ZRLoggedInUserId>)loggedInUserId;
-(id)initWithTokenFetcher:(id)arg1 zeroRatingState:(id)arg2 network:(id)arg3 loggedInUserId:(id)arg4 sharedZeroTokenDataLock:(id)arg5 backoffTimer:(id)arg6 ;
-(void)setRefreshAllowed:(BOOL)arg1 ;
-(id)initWithTokenFetcher:(id)arg1 zeroRatingState:(id)arg2 loggedInUserId:(id)arg3 ;
-(void)stopRefresh;
-(BOOL)refreshIfPossible;
-(BOOL)_refreshIfPossible;
-(void)_cancelFetch;
-(void)_didFetchZeroCampaign:(id)arg1 ;
-(ZRCampaignDataFetcher *)tokenFetcher;
-(void)setTokenFetcher:(ZRCampaignDataFetcher *)arg1 ;
-(void)didFetchZeroCampaign:(id)arg1 ;
-(void)couldNotFetchZeroCampaign:(id)arg1 ;
-(BOOL)refreshIfNeeded;
-(BOOL)refreshAllowed;
-(void)setLoggedInUserId:(id<ZRLoggedInUserId>)arg1 ;
-(void)dealloc;
@end

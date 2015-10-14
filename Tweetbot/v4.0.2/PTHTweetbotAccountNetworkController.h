/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class PTHTweetbotAccountController, PTHTweetbotAccount, PTHTweetbotSyncService;

@interface PTHTweetbotAccountNetworkController : NSObject {

	PTHTweetbotAccountController* _accountController;
	PTHTweetbotAccount* _account;
	PTHTweetbotSyncService* _syncService;
	unsigned long long _autoRefreshCounter;
	BOOL _needsRefresh;

}
-(void)_didBecomeActive;
-(id)initWithAccountController:(id)arg1 ;
-(void)refreshAllDelayed;
-(void)reachabilityDidChange;
-(void)_updateSyncService;
-(BOOL)_updateStreaming;
-(void)_streamingBusy;
-(void)_streamingChurn;
-(void)_streamingBackfillFailed;
-(void)_willResignActive;
-(void)_minuteHeartbeat;
-(void)_refreshIfNeeded;
-(void)dealloc;
-(id)init;
@end

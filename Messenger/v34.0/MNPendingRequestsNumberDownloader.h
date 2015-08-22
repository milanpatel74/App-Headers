/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNServiceControllable.h>

@class MNThreadListMetaDataFetcher, FBMMemModelThreadParser, MNPendingRequestsFolderThreadsQueryPolicy, MNUserSettings, MNPendingRequestsNumberDownloaderListenerAnnouncer, NSString;

@interface MNPendingRequestsNumberDownloader : NSObject <FBClassProvidable, MNServiceControllable> {

	MNThreadListMetaDataFetcher* _pendingRequestsMetaDataFetcher;
	FBMMemModelThreadParser* _memModelThreadParser;
	MNPendingRequestsFolderThreadsQueryPolicy* _pendingRequestsFolderThreadsQueryPolicy;
	MNUserSettings* _userSettings;
	MNPendingRequestsNumberDownloaderListenerAnnouncer* _announcer;
	BOOL _isRunning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIdle;
-(void)_couldNotFetchThreadListMetaDataWithError:(id)arg1 ;
-(void)_didFetchMedataDataMemModelForMessageThreadsConnection:(id)arg1 ;
-(id)initWithPendingRequestsMetaDataFetcher:(id)arg1 memModelThreadParser:(id)arg2 pendingRequestsFolderThreadsQueryPolicy:(id)arg3 userSettings:(id)arg4 announcer:(id)arg5 ;
-(void)stop;
-(void)start:(id)arg1 ;
@end

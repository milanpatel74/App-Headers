/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBMRemoteThreadRequestHandlerObserving.h>
#import <Messenger/FBMMoreThreadsFetchedListening.h>

@protocol MNIncrementalPersistenceCoordinating, MNAuthenticationManager;
@class MNDiskPersistenceConfiguration, FBExperimentManager, NSString;

@interface FBMIncrementalPersistenceThreadNetworkFetchPersistAdapter : NSObject <FBSessionClassProvidable, FBMRemoteThreadRequestHandlerObserving, FBMMoreThreadsFetchedListening> {

	MNDiskPersistenceConfiguration* _persistenceConfiguration;
	id<MNIncrementalPersistenceCoordinating> _persistenceCoordinator;
	id<MNAuthenticationManager> _authManager;
	FBExperimentManager* _experimentManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didFetchMoreThreads:(id)arg1 forThreadList:(unsigned long long)arg2 ;
-(id)initWithPersistenceConfiguration:(id)arg1 persistenceCoordinator:(id)arg2 authManager:(id)arg3 experimentManager:(id)arg4 ;
-(void)batchThreadNetworkRequestCompleted:(id)arg1 ;
@end

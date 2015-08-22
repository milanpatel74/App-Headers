/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate.h>
#import <Messenger/FBSessionClassProvidable.h>

@protocol MNMessageSendQuerying, MNAuthenticationManager, MNGlobalDeleteMessagePlaceholderStoreReading;
@class FBMThreadUserMap, MNThreadViewModelLoaderStateMachine, MNThreadViewModelLoaderRequestBehaviorCaller, MNThreadViewModelLoaderStoreRequestRunner, MNThreadViewModelLoaderForPendingThread, FBLanguageNameFormatFactory, MNAttributionAppSupplementaryInfoLoader, MNThreadContextManager, FBMPendingThreadSet, MNPageResponsivenessCache, NSString;

@interface MNThreadViewModelLoader : NSObject <MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate, FBSessionClassProvidable> {

	FBMThreadUserMap* _threadUserMap;
	id<MNMessageSendQuerying> _messageSendQuerier;
	id<MNAuthenticationManager> _authManager;
	MNThreadViewModelLoaderStateMachine* _stateMachine;
	MNThreadViewModelLoaderRequestBehaviorCaller* _behaviorCaller;
	MNThreadViewModelLoaderStoreRequestRunner* _requester;
	MNThreadViewModelLoaderForPendingThread* _loaderForPendingThread;
	FBLanguageNameFormatFactory* _languageFormatFactory;
	MNAttributionAppSupplementaryInfoLoader* _attributionLoader;
	MNThreadContextManager* _threadContextManager;
	FBMPendingThreadSet* _pendingThreadSet;
	id<MNGlobalDeleteMessagePlaceholderStoreReading> _placeholderStoreReader;
	MNPageResponsivenessCache* _pageResponsivenessCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 userStore:(id)arg2 threadStore:(id)arg3 threadUserMap:(id)arg4 pendingThreadSet:(id)arg5 messageSendQuerier:(id)arg6 threadContextManager:(id)arg7 authenticationManager:(id)arg8 loaderForPendingThread:(id)arg9 pageResponsivenessCache:(id)arg10 languageNameFormatFactory:(id)arg11 attributionAppSupplementaryInfoLoader:(id)arg12 placeholderStoreReader:(id)arg13 ;
-(long long)_beginLoadThreadViewModelForThreadWithDescriptor:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 successBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)cancelRequestWithId:(long long)arg1 ;
-(id)createViewModelForThread:(id)arg1 usersByUserId:(id)arg2 descriptor:(id)arg3 messagesLoadingConfiguration:(id)arg4 ;
-(long long)beginLoadThreadViewModelForThreadWithLocalDescriptor:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 successBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
@end

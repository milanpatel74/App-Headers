/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPushMessageChainedHandling.h>
#import <Messenger/MNPushMessageChainedHandlingConfigurable.h>

@protocol MNPushMessageChainedHandling;
@class MNThreadNavigationCoordinator, FBMAllServicesInitializedDelayer, NSString;

@interface MNPushMessageNavigationHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBMAllServicesInitializedDelayer* _servicesInitializedDelayer;
	id<MNPushMessageChainedHandling> _nextHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_navigateToThread:(id)arg1 withInitialComposerExtensionIdentifier:(id)arg2 ;
-(id)initWithThreadNavigationCoordinator:(id)arg1 servicesInitializedDelayer:(id)arg2 ;
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 ;
-(void)configureWithNextHandler:(id)arg1 ;
@end

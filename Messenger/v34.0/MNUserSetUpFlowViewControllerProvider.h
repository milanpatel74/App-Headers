/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class MNUserSetUpStatePersister, FBUserSession, FBLazyCreator, NSString;

@interface MNUserSetUpFlowViewControllerProvider : NSObject <FBClassProvidable> {

	id<FBProvider> _enterPhoneVCProvider;
	id<FBProvider> _requirePushVCProvider;
	id<FBProvider> _requestCIVCProvider;
	id<FBProvider> _requestContactImportWithFacepileVCProvider;
	id<FBProvider> _welcomeVCProvider;
	id<FBProvider> _newUserBlastVCProvider;
	id<FBProvider> _newUserRampUpVCProvider;
	id<FBProvider> _newUserVoipVCProvider;
	id<FBProvider> _userSetUpFlowConfiguratorProvider;
	id<FBProvider> _userSetUpPersisterProvider;
	MNUserSetUpStatePersister* _userSetUpPersister;
	FBUserSession* _session;
	FBLazyCreator* _permissionRequestExperimentContextCreator;

}

@property (nonatomic,readonly) BOOL shouldPresentUserSetUpFlow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)shouldPresentUserSetUpFlow;
-(id)providersForSetUpFlow;
-(id)initWithEnterPhoneVCProvider:(id)arg1 requirePushVCProvider:(id)arg2 requestCIVCProvider:(id)arg3 requestContactImportWithFacepileVCProvider:(id)arg4 welcomeVCProvider:(id)arg5 newUserRampUpVCProvider:(id)arg6 newUserVoipVCProvider:(id)arg7 userSetUpStatePersisterProvider:(id)arg8 userSetUpFlowConfiguratorProvider:(id)arg9 session:(id)arg10 ;
-(id)_requestContactImportViewControllerProvider:(id)arg1 ;
-(id)init;
@end

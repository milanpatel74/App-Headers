/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNPluginServices.h>

@protocol MNPluginServices <NSObject>
@required
-(id)navigationService;
-(id)dataModelService;
-(id)connectionStatusService;
-(id)soundSerivce;
-(id)contactService;
-(id)threadMessageSenderService;
-(id)userSettingsService;
-(id)messageDetectedDataHandlerProvidingPluginService;
-(id)syncProtocolService;
-(id)messageFailureHandlingService;
-(id)contentPresentationService;
-(id)userSessionEventsService;
-(id)composerService;
-(id)inAppNotificationService;

@end


@protocol MNDataModelPluginService, MNNavigationPluginService, MNContentPresentationPluginService, MNUserSessionEventsPluginService, MNComposerPluginService, MNInAppNotificationPluginService, MNSyncProtocolPluginService, MNContactPluginService, MNMessageFailureHandlingPluginService, MNMessageDetectedDataHandlerProvidingPluginService, MNConnectionStatusPluginService, MNSoundPluginService, MNUserSettingsPluginService, MNThreadMessageSenderPluginService;
@class NSString;

@interface MNPluginServices : NSObject <MNPluginServices> {

	id<MNDataModelPluginService> _dataModelService;
	id<MNNavigationPluginService> _navigationService;
	id<MNContentPresentationPluginService> _contentPresentationService;
	id<MNUserSessionEventsPluginService> _userSessionEventsService;
	id<MNComposerPluginService> _composerService;
	id<MNInAppNotificationPluginService> _inAppNotificationService;
	id<MNSyncProtocolPluginService> _syncProtocolService;
	id<MNContactPluginService> _contactService;
	id<MNMessageFailureHandlingPluginService> _messageFailureHandlingService;
	id<MNMessageDetectedDataHandlerProvidingPluginService> _messageDetectedDataHandlerProvidingPluginService;
	id<MNConnectionStatusPluginService> _connectionStatusService;
	id<MNSoundPluginService> _soundService;
	id<MNUserSettingsPluginService> _userSettingsService;
	id<MNThreadMessageSenderPluginService> _threadMessageSenderService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationService;
-(id)dataModelService;
-(id)connectionStatusService;
-(id)soundSerivce;
-(id)contactService;
-(id)threadMessageSenderService;
-(id)userSettingsService;
-(id)messageDetectedDataHandlerProvidingPluginService;
-(id)syncProtocolService;
-(id)messageFailureHandlingService;
-(id)contentPresentationService;
-(id)userSessionEventsService;
-(id)composerService;
-(id)inAppNotificationService;
-(id)initWithDataModelService:(id)arg1 navigationService:(id)arg2 contentPresentationService:(id)arg3 userSessionEventsService:(id)arg4 composerService:(id)arg5 inAppNotificationService:(id)arg6 syncProtocolService:(id)arg7 contactService:(id)arg8 messageFailureHandlingService:(id)arg9 messageDetectedDataHandlerProvidingPluginService:(id)arg10 connectionStatusService:(id)arg11 soundService:(id)arg12 userSettingsService:(id)arg13 threadMessageSenderService:(id)arg14 ;
@end

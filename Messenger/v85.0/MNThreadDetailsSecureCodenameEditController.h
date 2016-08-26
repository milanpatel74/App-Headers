/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadClientSummaryUpdateCreating, MNThreadDetailsSecureCodenameEditControllerDelegate;
@class MNThreadSummaryUpdateRunningService, FBAlertViewCoordinator, FBMSecureThreadProperties;

@interface MNThreadDetailsSecureCodenameEditController : NSObject {

	MNThreadSummaryUpdateRunningService* _updateService;
	FBAlertViewCoordinator* _alertViewController;
	FBMSecureThreadProperties* _secureThreadProperties;
	id<MNThreadClientSummaryUpdateCreating> _summaryUpdateCreator;
	id<MNThreadDetailsSecureCodenameEditControllerDelegate> _delegate;

}
-(void)_configureAlertView:(id)arg1 ;
-(void)_handleTapOnButtonWithIndex:(long long)arg1 onAlertView:(id)arg2 wasTriggeredByUser:(BOOL)arg3 ;
-(id)initWithThreadUpdateService:(id)arg1 alertController:(id)arg2 secureThreadProperties:(id)arg3 summaryUpdateCreator:(id)arg4 delegate:(id)arg5 ;
-(void)displayAlert;
@end

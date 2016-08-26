/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPublishingStatusBarNotifierConfigurationBuilder : NSObject {

	double _numberOfSecondsToShowPostingMessage;
	double _numberOfSecondsToShowAnyCompletedMessage;
	double _numberOfSecondsToShowFailedMessage;
	double _numberOfSecondsToShowFailedTapForMoreMessage;
	double _numberOfSecondsToShowNotifyOnCompletionMessage;
	double _numberOfSecondsToShowNotifyOnSavedDraft;
	NSString* _localizedLabelForStartedPublishing;
	NSString* _localizedLabelForNotifyOnCompletion;
	NSString* _localizedLabelForSuccessfulPublish;
	NSString* _localizedLabelForCancelledPublish;
	NSString* _localizedLabelForFailedPublish;
	NSString* _localizedLabelForFailedTapForMorePublish;
	NSString* _localizedLabelForNotifyOnSavedDraft;

}
+(id)publishingStatusBarNotifierConfigurationFromExistingPublishingStatusBarNotifierConfiguration:(id)arg1 ;
+(id)publishingStatusBarNotifierConfiguration;
-(id)withLocalizedLabelForStartedPublishing:(id)arg1 ;
-(id)withLocalizedLabelForNotifyOnCompletion:(id)arg1 ;
-(id)withLocalizedLabelForSuccessfulPublish:(id)arg1 ;
-(id)withLocalizedLabelForFailedPublish:(id)arg1 ;
-(id)withLocalizedLabelForCancelledPublish:(id)arg1 ;
-(id)withNumberOfSecondsToShowPostingMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowAnyCompletedMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowFailedMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowFailedTapForMoreMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowNotifyOnCompletionMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowNotifyOnSavedDraft:(double)arg1 ;
-(id)withLocalizedLabelForFailedTapForMorePublish:(id)arg1 ;
-(id)withLocalizedLabelForNotifyOnSavedDraft:(id)arg1 ;
-(id)build;
@end

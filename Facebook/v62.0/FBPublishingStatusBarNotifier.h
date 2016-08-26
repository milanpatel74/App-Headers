/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPublishingStatusBarNotifyingDelayListener.h>
#import <Facebook/FBPublishingStatusBarNotifyingActionListener.h>
#import <Facebook/FBComposerPublisherStatusListener.h>

@protocol FBDelayedWorkPerformer, FBPublicationErrorAlertPresenter, FBStatusBarOverlayer;
@class FBPublishingStatusBarNotifierConfiguration, FBStatusBarOverlay, FBDelayedWorkItem, NSMutableSet, FBPublicationError, FBSoundController, NSString;

@interface FBPublishingStatusBarNotifier : NSObject <FBPublishingStatusBarNotifyingDelayListener, FBPublishingStatusBarNotifyingActionListener, FBComposerPublisherStatusListener> {

	FBPublishingStatusBarNotifierConfiguration* _configuration;
	FBStatusBarOverlay* _currentOverlay;
	FBDelayedWorkItem* _delayedWorkItemForShowingInitialFailureMessage;
	FBDelayedWorkItem* _delayedWorkItemForShowingNotifyOnCompleteMessage;
	id<FBDelayedWorkPerformer> _delayedWorkPerformer;
	NSMutableSet* _identifiersToShowStatusBarFor;
	FBPublicationError* _publicationError;
	id<FBPublicationErrorAlertPresenter> _publicationErrorAlertPresenter;
	id<FBStatusBarOverlayer> _statusBarOverlayer;
	FBSoundController* _soundController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startedPublishingPublisherData:(id)arg1 ;
-(void)attemptedPublicationOfPublisherData:(id)arg1 ;
-(void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)startedServerProcessingForUploadedPublication:(id)arg1 ;
-(void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2 ;
-(void)cancelledPublishingPublisherData:(id)arg1 ;
-(void)pausedPublishingPublisherData:(id)arg1 ;
-(void)retriedPublishingPublisherData:(id)arg1 ;
-(void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1 ;
-(void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3 ;
-(void)canCancelPublishingOfPublisherData:(id)arg1 ;
-(void)cannotCancelPublishingOfPublisherData:(id)arg1 ;
-(void)notifyUserOfPublicationWithIdentifier:(id)arg1 ;
-(id)initWithStatusBarOverlayer:(id)arg1 configuration:(id)arg2 soundController:(id)arg3 ;
-(void)presentOverlay:(id)arg1 ;
-(void)clearTimeoutToShowNotifyOnCompletionMessage;
-(void)timeoutToShowNotifyOnCompletionMessageExpired;
-(void)timeoutToInitialFailureMessageExpired;
-(void)tappedOnPublicationFailureOverlay;
-(void)notifyUserOfSavedDraft;
-(void)startedPublishingRequestToTheServerForPublisherData:(id)arg1 ;
-(void)exceededMaxTimeoutPeriodForPublicationOfPublisherData:(id)arg1 ;
@end

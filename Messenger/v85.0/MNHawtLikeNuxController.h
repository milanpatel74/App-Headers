/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNNuxViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMMessageSendListening.h>

@protocol MNActionNuxPresenter, MNHawtLikeNuxControllerDelegate;
@class MNUserSettings, FBUserSession, MNHawtLikeNuxView, NSString;

@interface MNHawtLikeNuxController : NSObject <MNNuxViewDelegate, FBClassProvidable, FBMMessageSendListening> {

	MNUserSettings* _userSettings;
	FBUserSession* _session;
	MNHawtLikeNuxView* _hawtLikeNuxView;
	double _timeHawtLikeNuxPresented;
	BOOL _hasUsedLikeThisSession;
	id<MNActionNuxPresenter> _actionNuxPresenter;
	id<MNHawtLikeNuxControllerDelegate> _delegate;

}

@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter;                      //@synthesize actionNuxPresenter=_actionNuxPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<MNHawtLikeNuxControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 ;
-(void)willRetryMessage:(id)arg1 ;
-(void)message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(BOOL)isHawtLikeNuxPresented;
-(void)setActionNuxPresenter:(id<MNActionNuxPresenter>)arg1 ;
-(void)dismissHawtLikeNux;
-(void)updateHawtLikeNux;
-(void)_cancelDelayedHawtLikeNuxPresentation;
-(BOOL)_shouldPresentHawtLikeNux;
-(void)_presentHawtLikeNuxDelayed;
-(void)_dismissHawtLikeNuxUserInitiated:(BOOL)arg1 ;
-(void)_presentHawtLikeNux;
-(void)_initHawtLikeNuxIfNeeded;
-(BOOL)_canPresentHawtLikeNux;
-(void)_logNuxDismissalUserInitiated:(BOOL)arg1 ;
-(void)_updateLikeStickerSentStateWith:(id)arg1 ;
-(void)nuxViewDidTapToDismiss:(id)arg1 ;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setDelegate:(id<MNHawtLikeNuxControllerDelegate>)arg1 ;
-(id<MNHawtLikeNuxControllerDelegate>)delegate;
-(void)reset;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBWebRTCNavigationBarViewDelegate.h>

@protocol FBWebRTCCallActionViewDelegate;
@class NSNumber, FBWebRTCNavigationBarView, FBWebRTCActionButtonsRow, UIButton, UILabel, NSString, FBWebRTCButtonImageCache;

@interface FBWebRTCCallActionView : UIView <FBWebRTCNavigationBarViewDelegate> {

	BOOL _hasMultipleCameras;
	BOOL _isVideoSupported;
	unsigned long long _viewState;
	unsigned long long _callType;
	BOOL _hideControl;
	NSNumber* _navBarHiddenOverrideNullable;
	CGSize _maxSize;
	FBWebRTCNavigationBarView* _navigationBarView;
	FBWebRTCActionButtonsRow* _disabledVideoButtonRow;
	FBWebRTCActionButtonsRow* _buttonsFirstRow;
	FBWebRTCActionButtonsRow* _buttonsSecondRow;
	FBWebRTCActionButtonsRow* _noAnswerFirstRow;
	FBWebRTCActionButtonsRow* _noAnswerSecondRow;
	UIButton* _hideCallButton;
	UIButton* _speakerButton;
	UIButton* _muteCallButton;
	UIButton* _videoCallButton;
	UIButton* _disabledVideoButton;
	UIButton* _endCallButton;
	UIButton* _acceptCallButton;
	UIButton* _declineCallButton;
	UIButton* _redialButton;
	UIButton* _cancelRedialButton;
	UIButton* _voiceClipButton;
	UIButton* _messageButton;
	UIButton* _doneButton;
	UIButton* _declineVideoButton;
	UIButton* _acceptVideoButton;
	UIButton* _acceptDirectVideoButton;
	UIButton* _acceptWaitingCallButton;
	UIButton* _rejectWaitingCallButton;
	UILabel* _acceptLabel;
	UILabel* _declineLabel;
	UILabel* _cancelLabel;
	UILabel* _redialLabel;
	UILabel* _acceptWaitingCallLabel;
	UILabel* _rejectWaitingCallLabel;
	NSString* _muteTitle;
	NSString* _speakerTitle;
	NSString* _videoTitle;
	NSString* _hideCallTitle;
	FBWebRTCButtonImageCache* _imageCache;
	BOOL _actionButtonsOffscreen;
	BOOL _muteEnabled;
	BOOL _speakerModeEnabled;
	BOOL _remoteVideoSupported;
	BOOL _videoCallButtonSelected;
	BOOL _videoCallButtonUserInteractionEnabled;
	id<FBWebRTCCallActionViewDelegate> _delegate;
	UIButton* _messageActionSheetButton;
	UIButton* _reminderActionSheetButton;

}

@property (assign,nonatomic) BOOL actionButtonsOffscreen;                                     //@synthesize actionButtonsOffscreen=_actionButtonsOffscreen - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCCallActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * messageActionSheetButton;                             //@synthesize messageActionSheetButton=_messageActionSheetButton - In the implementation block
@property (nonatomic,retain) UIButton * reminderActionSheetButton;                            //@synthesize reminderActionSheetButton=_reminderActionSheetButton - In the implementation block
@property (assign,nonatomic) BOOL muteEnabled;                                                //@synthesize muteEnabled=_muteEnabled - In the implementation block
@property (assign,nonatomic) BOOL speakerModeEnabled;                                         //@synthesize speakerModeEnabled=_speakerModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL remoteVideoSupported;                                       //@synthesize remoteVideoSupported=_remoteVideoSupported - In the implementation block
@property (assign,nonatomic) BOOL videoCallButtonSelected;                                    //@synthesize videoCallButtonSelected=_videoCallButtonSelected - In the implementation block
@property (assign,nonatomic) BOOL videoCallButtonUserInteractionEnabled;                      //@synthesize videoCallButtonUserInteractionEnabled=_videoCallButtonUserInteractionEnabled - In the implementation block
-(void)_didPressDone;
-(void)setRemoteVideoSupported:(BOOL)arg1 ;
-(void)_didPressDisabledVideoButton;
-(void)_didPressHideCall;
-(void)_didPressSpeaker;
-(void)_didPressMute:(id)arg1 ;
-(void)_didPressVideoCall:(id)arg1 ;
-(void)_didPressAcceptWaitingCall;
-(void)_didPressRejectWaitingCall;
-(void)_didPressEndCall;
-(void)_didPressAcceptCall;
-(void)_didPressDeclineCall;
-(void)_didPressAcceptVideoCall;
-(void)_didPressDeclineVideoCall;
-(void)_didPressRedial;
-(void)_didPressCancelRedial;
-(void)_didPressVoiceClip;
-(void)_didPressMessage;
-(void)_didPressMessageActionSheet;
-(void)_didPressReminderActionSheet;
-(void)_configureNoAnswerRows;
-(BOOL)_shouldAnimateTransitionFromState:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)_refreshViewWithAnimation:(BOOL)arg1 ;
-(void)_layoutSubviewsAux;
-(void)_positionNavigationBar:(id)arg1 ;
-(void)_setThemeToNormal;
-(void)_positionToFirstAudioRow:(id)arg1 withInnerFrame:(CGRect)arg2 ;
-(void)_positionToSecondAudioRow:(id)arg1 withInnerFrame:(CGRect)arg2 ;
-(void)_populateDisabledVideoButtonRow;
-(void)_setThemeToVideoCalling;
-(void)_positionToVideoRow:(id)arg1 withInnerFrame:(CGRect)arg2 ;
-(void)_setThemeToVideo;
-(void)_hideAllSubviews:(BOOL)arg1 ;
-(BOOL)actionButtonsOffscreen;
-(void)_positionToOffScreenRow:(id)arg1 ;
-(double)_getXOriginWithViewSize:(CGSize)arg1 frame:(CGRect)arg2 ;
-(double)_getYOriginForFirstRowOfAudioButtonsWithFrame:(CGRect)arg1 ;
-(double)_getYOriginForSecondRowOfAudioButtonsWithFrame:(CGRect)arg1 ;
-(double)_getYOriginForVideoButtonsWithFrame;
-(void)_positionButtonsRow:(id)arg1 withOrigin:(CGPoint)arg2 ;
-(void)navigationViewDidPressBackButton:(id)arg1 ;
-(void)navigationViewDidPressSwitchCameraButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isVideoSupported:(BOOL)arg2 hasMultipleCameras:(BOOL)arg3 maxSize:(CGSize)arg4 ;
-(void)setNavBarHiddenOverride:(BOOL)arg1 ;
-(void)switchLayoutToState:(unsigned long long)arg1 ;
-(void)setMuteEnabled:(BOOL)arg1 ;
-(void)setSpeakerModeEnabled:(BOOL)arg1 ;
-(void)setVideoCallButtonSelected:(BOOL)arg1 ;
-(void)setActionButtonsOffscreen:(BOOL)arg1 ;
-(void)setVideoCallButtonUserInteractionEnabled:(BOOL)arg1 ;
-(UIEdgeInsets)actionButtonInsetsWithButtonsOffscreen:(BOOL)arg1 ;
-(UIEdgeInsets)actionButtonInsetsForVideoRequest;
-(UIButton *)messageActionSheetButton;
-(void)setMessageActionSheetButton:(UIButton *)arg1 ;
-(UIButton *)reminderActionSheetButton;
-(void)setReminderActionSheetButton:(UIButton *)arg1 ;
-(BOOL)muteEnabled;
-(BOOL)speakerModeEnabled;
-(BOOL)remoteVideoSupported;
-(BOOL)videoCallButtonSelected;
-(BOOL)videoCallButtonUserInteractionEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCCallActionViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<FBWebRTCCallActionViewDelegate>)delegate;
@end


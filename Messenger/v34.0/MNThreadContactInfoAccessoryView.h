/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNThreadContactInfoAccessoryViewDelegate;
@class UIButton;

@interface MNThreadContactInfoAccessoryView : UIView {

	BOOL _audioEnabled;
	BOOL _videoEnabled;
	BOOL _showCallButtons;
	id<MNThreadContactInfoAccessoryViewDelegate> _delegate;
	UIButton* _audioCallButton;
	UIButton* _videoCallButton;

}

@property (assign,nonatomic,__weak) id<MNThreadContactInfoAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showCallButtons;                                                      //@synthesize showCallButtons=_showCallButtons - In the implementation block
@property (nonatomic,retain) UIButton * audioCallButton;                                                //@synthesize audioCallButton=_audioCallButton - In the implementation block
@property (nonatomic,retain) UIButton * videoCallButton;                                                //@synthesize videoCallButton=_videoCallButton - In the implementation block
-(UIButton *)audioCallButton;
-(void)setAudioCallButton:(UIButton *)arg1 ;
-(UIButton *)videoCallButton;
-(void)setVideoCallButton:(UIButton *)arg1 ;
-(void)_audioCallButtonPressed:(id)arg1 ;
-(void)_videoCallButtonPressed:(id)arg1 ;
-(void)_updateAudioButton;
-(void)_updateVideoButton;
-(void)setAudioButtonWithEnabledState:(BOOL)arg1 ;
-(void)setVideoButtonWithEnabledState:(BOOL)arg1 ;
-(BOOL)showCallButtons;
-(void)setShowCallButtons:(BOOL)arg1 ;
-(id)initWithAudioEnabled:(BOOL)arg1 videoEnabled:(BOOL)arg2 showCallButtons:(BOOL)arg3 ;
-(void)setDelegate:(id<MNThreadContactInfoAccessoryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNThreadContactInfoAccessoryViewDelegate>)delegate;
@end

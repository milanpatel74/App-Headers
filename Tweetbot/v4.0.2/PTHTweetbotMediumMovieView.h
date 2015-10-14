/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:55 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayer, PTHTweetbotMediumMoviePlayerView, PTHTweetbotMediumMoviePlayerControlView, UIViewController, UIView;

@interface PTHTweetbotMediumMovieView : UIView {

	AVPlayer* _player;
	PTHTweetbotMediumMoviePlayerView* _playerView;
	PTHTweetbotMediumMoviePlayerControlView* _controlView;
	BOOL _hasAudio;
	CGRect _lastBounds;
	UIViewController* _controller;
	UIView* _accessoryView;

}

@property (assign,nonatomic,__weak) UIViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                            //@synthesize accessoryView=_accessoryView - In the implementation block
-(void)doubleTap;
-(void)_togglePlay;
-(void)willPresentFrom:(CGRect)arg1 ;
-(void)dismissTo:(CGRect)arg1 ;
-(void)willShow;
-(void)willPreview;
-(void)didPreview;
-(void)configureActionSheet:(id)arg1 ;
-(id)flickView;
-(BOOL)shouldPan;
-(CGSize)previewPreferredContentSize;
-(id)initWithMedium:(id)arg1 responseDictionary:(id)arg2 ;
-(void)_replay;
-(void)didPresent;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)panGestureRecognizer;
-(void)present;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(id)panView;
-(void)didShow;
-(void)willHide;
-(void)didHide;
@end


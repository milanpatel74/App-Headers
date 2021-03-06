/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBSwipeNavigationIntervening.h>
#import <Facebook/FBVideoPluginView.h>

@class FBDirectionalPanGestureRecognizer, FBVideoOverlayPluginEventListenerAnnouncer, FBVideoPlaybackController, NSString;

@interface FBVideoPlayer360FeedGesturePlugin : UIView <FBSwipeNavigationIntervening, FBVideoPluginView> {

	FBDirectionalPanGestureRecognizer* _horizontalPanGestureRecognizer;
	CGPoint _lastPanningTranslation;
	FBVideoOverlayPluginEventListenerAnnouncer* _announcer;
	FBVideoPlaybackController* _videoController;
	CGRect _videoFrame;

}

@property (nonatomic,readonly) FBVideoOverlayPluginEventListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (assign,nonatomic) CGRect videoFrame;                                                     //@synthesize videoFrame=_videoFrame - In the implementation block
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController;                    //@synthesize videoController=_videoController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
-(FBVideoOverlayPluginEventListenerAnnouncer *)announcer;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(BOOL)prefersSwipeByEdgeOnly;
-(id)initWithFrame:(CGRect)arg1 ;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
-(void)_handlePan:(id)arg1 ;
@end


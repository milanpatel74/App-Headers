/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBaseExpandableVideoBlockController.h>
#import <Facebook/FBCanvasAudioManagerListener.h>
#import <Facebook/FBCanvasVideoManagerListener.h>

@class FBISMediaEntityBlock, NSDate, FBCanvasElementLogger, FBNativeArticleVideoPlayPauseButton, FBInstantShoppingDisplayContext, NSString;

@interface FBISVideoBlockController : FBBaseExpandableVideoBlockController <FBCanvasAudioManagerListener, FBCanvasVideoManagerListener> {

	FBISMediaEntityBlock* _block;
	NSDate* _firstImpressionTime;
	BOOL _allowsRotation;
	BOOL _autoplayEnabled;
	BOOL _shouldShowPlayPauseButton;
	FBCanvasElementLogger* _loggingUtil;
	FBNativeArticleVideoPlayPauseButton* _playPauseButton;
	FBInstantShoppingDisplayContext* _displayContext;
	BOOL _videoMuted;
	BOOL _shouldPauseOtherMusicApps;

}

@property (assign,nonatomic) BOOL videoMuted;                             //@synthesize videoMuted=_videoMuted - In the implementation block
@property (assign,nonatomic) BOOL shouldPauseOtherMusicApps;              //@synthesize shouldPauseOtherMusicApps=_shouldPauseOtherMusicApps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)blockControllerClassesForAnnotationRegistry;
+(CGSize)expandedSizeForPresentationAttributes:(id)arg1 displayContext:(id)arg2 ;
+(BOOL)_canAutoplay;
+(id)landscapeAnnotationsFromAnnotations:(id)arg1 ;
+(id)annotationDictionaryForBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)outputCoordinationMode;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(BOOL)wantsCentermostFocus;
-(void)didGainCentermostFocus;
-(void)didLoseCentermostFocus;
-(BOOL)autoplayEnabled;
-(CGSize)mediaSize;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(long long)loopingStyle;
-(id)_videoNodeForVideoEntity:(id)arg1 hd:(BOOL)arg2 loopingStyle:(long long)arg3 videoLoggingDataProvider:(id)arg4 session:(id)arg5 ;
-(void)didCreateVideoNode:(id)arg1 ;
-(void)videoNodeDidDisplayPreviewImage:(id)arg1 ;
-(void)videoNode:(id)arg1 didUpdateStallState:(BOOL)arg2 ;
-(void)videoNodeDidStartPlayback:(id)arg1 ;
-(BOOL)videoNodeShouldUseStateDispatchQueue;
-(void)setShouldOverrideMuteSwitch:(BOOL)arg1 ;
-(id)renderableForOverlayAnnotation:(id)arg1 withKey:(id)arg2 annotationController:(id)arg3 ;
-(void)_fireFullScreenIntentWithGoingToFullScreen:(BOOL)arg1 ;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB92)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB92)arg1 ;
-(void)interactiveMediaControllerWasTapped:(id)arg1 ;
-(BOOL)wantsRotation;
-(void)setVideoMuted:(BOOL)arg1 ;
-(void)setShouldPauseOtherMusicApps:(BOOL)arg1 ;
-(id)allAnnotations;
-(BOOL)videoMuted;
-(SCD_Struct_FB92)_fadeAnimationConfiguration;
-(void)_setPlayPauseButtonVisible:(BOOL)arg1 withAnimationConfiguration:(SCD_Struct_FB92)arg2 ;
-(void)_didTapPlayPauseButton:(id)arg1 ;
-(id)expandedOnlyAnnotations;
-(id)collapsedOnlyAnnotations;
-(BOOL)shouldPauseOtherMusicApps;
-(void)canvasAudioManager:(id)arg1 didChangeMuteState:(BOOL)arg2 ;
-(void)canvasVideoManager:(id)arg1 primaryVideoDidPlay:(id)arg2 ;
-(void)canvasVideoManager:(id)arg1 primaryVideoDidPause:(id)arg2 ;
-(void)canvasVideoManager:(id)arg1 primaryVideoDidFinish:(id)arg2 ;
-(void)cleanup;
-(void)beginInterruption;
-(void)stopPlayback;
-(void)startPlayback;
-(id)playPauseButton;
@end

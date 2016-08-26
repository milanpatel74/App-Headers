/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExpandableMediaBlockController.h>
#import <Facebook/FBAudioSessionManagerClient.h>
#import <Facebook/FBVideoNodeDelegate.h>

@protocol FBVideoEntityProtocol, FBVideoPlaybackLoggingDataProvider;
@class FBUserSession, FBRichStoryBlockDisplayContext, FBInteractiveMediaNodeController, FBVideoNode, NSString;

@interface FBBaseExpandableVideoBlockController : FBExpandableMediaBlockController <FBAudioSessionManagerClient, FBVideoNodeDelegate> {

	FBUserSession* _session;
	FBRichStoryBlockDisplayContext* _displayContext;
	id<FBVideoEntityProtocol> _videoEntity;
	id<FBVideoPlaybackLoggingDataProvider> _loggingProvider;
	BOOL _useHdVideo;
	FBInteractiveMediaNodeController* _interactiveMediaNodeController;
	BOOL _shouldOverrideMuteSwitch;
	FBVideoNode* _videoNode;

}

@property (nonatomic,readonly) FBVideoNode * videoNode;                                //@synthesize videoNode=_videoNode - In the implementation block
@property (assign,nonatomic) BOOL shouldOverrideMuteSwitch;                            //@synthesize shouldOverrideMuteSwitch=_shouldOverrideMuteSwitch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
+(id)richStoryVideoEntityForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(CGSize)mediaSizeForBlock:(id)arg1 presentationAttributes:(id)arg2 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)orientationState:(id)arg1 didUpdateRotationToOrientation:(long long)arg2 fromOrientation:(long long)arg3 progress:(double)arg4 ;
-(BOOL)autoplayEnabled;
-(CGSize)mediaSize;
-(void)didEnterPreloadViewport;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(long long)loopingStyle;
-(id)_videoNodeForVideoEntity:(id)arg1 hd:(BOOL)arg2 loopingStyle:(long long)arg3 videoLoggingDataProvider:(id)arg4 session:(id)arg5 ;
-(void)didCreateVideoNode:(id)arg1 ;
-(void)videoNodeDidDisplayPreviewImage:(id)arg1 ;
-(id)initWithBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 reachabilityAnnouncer:(id)arg5 videoLoggingDataProvider:(id)arg6 ;
-(id)interactiveMediaNodeController;
-(void)setShouldOverrideMuteSwitch:(BOOL)arg1 ;
-(FBVideoNode *)videoNode;
-(BOOL)shouldOverrideMuteSwitch;
-(void)cleanup;
-(void)beginInterruption;
@end

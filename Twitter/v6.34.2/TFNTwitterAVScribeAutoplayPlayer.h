/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterAVScribePlayer.h>

@class NSSet;

@interface TFNTwitterAVScribeAutoplayPlayer : TFNTwitterAVScribePlayer {

	BOOL _didSendPlayFromTap;
	BOOL _didSendVideoView;
	BOOL _didSendViewThreshold;
	double _accumulativeViewThresholdPlaybackTime;

}

@property (assign,nonatomic) double accumulativeViewThresholdPlaybackTime;                                        //@synthesize accumulativeViewThresholdPlaybackTime=_accumulativeViewThresholdPlaybackTime - In the implementation block
@property (assign,nonatomic) BOOL didSendPlayFromTap;                                                             //@synthesize didSendPlayFromTap=_didSendPlayFromTap - In the implementation block
@property (assign,nonatomic) BOOL didSendVideoView;                                                               //@synthesize didSendVideoView=_didSendVideoView - In the implementation block
@property (assign,nonatomic) BOOL didSendViewThreshold;                                                           //@synthesize didSendViewThreshold=_didSendViewThreshold - In the implementation block
@property (nonatomic,__weak,readonly) id<TFNTwitterAVScribeAutoplayPlayerDelegate> autoplayDelegate; 
@property (nonatomic,readonly) NSSet * videoViewEvents; 
@property (nonatomic,readonly) double viewThreshold; 
-(id)initWithDelegate:(id)arg1 mediaURL:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 playerItem:(id)arg2 ;
-(void)playbackDidProgressToTime:(double)arg1 withIncrement:(double)arg2 ;
-(id<TFNTwitterAVScribeAutoplayPlayerDelegate>)autoplayDelegate;
-(BOOL)didSendPlayFromTap;
-(void)setDidSendPlayFromTap:(BOOL)arg1 ;
-(void)_scribeAction:(id)arg1 withCurrentPlaybackTime:(double)arg2 ;
-(double)accumulativeViewThresholdPlaybackTime;
-(void)setAccumulativeViewThresholdPlaybackTime:(double)arg1 ;
-(BOOL)didSendViewThreshold;
-(double)viewThreshold;
-(void)setDidSendViewThreshold:(BOOL)arg1 ;
-(BOOL)didSendVideoView;
-(NSSet *)videoViewEvents;
-(void)setDidSendVideoView:(BOOL)arg1 ;
-(void)playerDidTapToExpand;
@end

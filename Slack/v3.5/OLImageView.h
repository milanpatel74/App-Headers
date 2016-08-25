/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIImageView.h>

@class NSString, CADisplayLink, OLImage;

@interface OLImageView : UIImageView {

	NSString* _runLoopMode;
	CADisplayLink* _displayLink;
	OLImage* _animatedImage;
	double _accumulator;
	unsigned long long _currentFrameIndex;
	unsigned long long _loopCountdown;

}

@property (nonatomic,retain) OLImage * animatedImage;                           //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                       //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double accumulator;                                //@synthesize accumulator=_accumulator - In the implementation block
@property (assign,nonatomic) unsigned long long currentFrameIndex;              //@synthesize currentFrameIndex=_currentFrameIndex - In the implementation block
@property (assign,nonatomic) unsigned long long loopCountdown;                  //@synthesize loopCountdown=_loopCountdown - In the implementation block
@property (nonatomic,copy) NSString * runLoopMode;                              //@synthesize runLoopMode=_runLoopMode - In the implementation block
-(void)setLoopCountdown:(unsigned long long)arg1 ;
-(unsigned long long)loopCountdown;
-(void)changeKeyframe:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)didMoveToWindow;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)image;
-(void)didMoveToSuperview;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)displayLayer:(id)arg1 ;
-(double)accumulator;
-(void)setAccumulator:(double)arg1 ;
-(unsigned long long)currentFrameIndex;
-(void)setAnimatedImage:(OLImage *)arg1 ;
-(OLImage *)animatedImage;
-(NSString *)runLoopMode;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(void)setCurrentFrameIndex:(unsigned long long)arg1 ;
@end

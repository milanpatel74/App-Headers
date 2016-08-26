/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIImageView.h>

@class NSString, CADisplayLink, YLGIFImage, UIImage;

@interface YLImageView : UIImageView {

	NSString* _runLoopMode;
	CADisplayLink* _displayLink;
	YLGIFImage* _animatedImage;
	double _accumulator;
	unsigned long long _currentFrameIndex;
	UIImage* _currentFrame;
	unsigned long long _loopCountdown;

}

@property (nonatomic,retain) YLGIFImage * animatedImage;                        //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                       //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double accumulator;                                //@synthesize accumulator=_accumulator - In the implementation block
@property (assign,nonatomic) unsigned long long currentFrameIndex;              //@synthesize currentFrameIndex=_currentFrameIndex - In the implementation block
@property (nonatomic,retain) UIImage * currentFrame;                            //@synthesize currentFrame=_currentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long loopCountdown;                  //@synthesize loopCountdown=_loopCountdown - In the implementation block
@property (nonatomic,copy) NSString * runLoopMode;                              //@synthesize runLoopMode=_runLoopMode - In the implementation block
-(void)changeKeyframe:(id)arg1 ;
-(void)setLoopCountdown:(unsigned long long)arg1 ;
-(void)setCurrentFrame:(UIImage *)arg1 ;
-(unsigned long long)loopCountdown;
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
-(UIImage *)currentFrame;
-(double)accumulator;
-(void)setAccumulator:(double)arg1 ;
-(unsigned long long)currentFrameIndex;
-(void)setAnimatedImage:(YLGIFImage *)arg1 ;
-(YLGIFImage *)animatedImage;
-(NSString *)runLoopMode;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(void)setCurrentFrameIndex:(unsigned long long)arg1 ;
@end

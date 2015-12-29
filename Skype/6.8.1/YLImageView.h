//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class CADisplayLink, NSString, UIImage, YLGIFImage;

@interface YLImageView : UIImageView
{
    NSString *_runLoopMode;
    CADisplayLink *_displayLink;
    YLGIFImage *_animatedImage;
    double _accumulator;
    unsigned long long _currentFrameIndex;
    UIImage *_currentFrame;
    unsigned long long _loopCountdown;
}

@property(nonatomic) unsigned long long loopCountdown; // @synthesize loopCountdown=_loopCountdown;
@property(retain, nonatomic) UIImage *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(nonatomic) unsigned long long currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property(nonatomic) double accumulator; // @synthesize accumulator=_accumulator;
@property(retain, nonatomic) YLGIFImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)image;
- (void)setHighlighted:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (void)changeKeyframe:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (_Bool)isAnimating;
- (void)setImage:(id)arg1;
@property(copy, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
- (id)init;

@end


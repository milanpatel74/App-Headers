//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class CADisplayLink;

@interface SCCounterLabel : UILabel
{
    CADisplayLink *_borderDisplayLink;
    long long _counterShape;
    double _lastDrawTime;
    double _snapTime;
    double _snapTimeLeft;
}

@property(nonatomic) double snapTimeLeft; // @synthesize snapTimeLeft=_snapTimeLeft;
@property(nonatomic) double snapTime; // @synthesize snapTime=_snapTime;
@property(nonatomic) double lastDrawTime; // @synthesize lastDrawTime=_lastDrawTime;
@property(nonatomic) long long counterShape; // @synthesize counterShape=_counterShape;
@property(retain, nonatomic) CADisplayLink *borderDisplayLink; // @synthesize borderDisplayLink=_borderDisplayLink;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)borderDisplayLinkFired:(id)arg1;
- (void)stopBorderDisplayLink;
- (void)startBorderDisplayLink;
- (void)setBorderWithSnapTime:(double)arg1 snapTimeLeft:(double)arg2 counterShape:(long long)arg3;
- (void)setFrameWithTimeLeft:(double)arg1 containerWidth:(double)arg2 yOffset:(double)arg3 counterShape:(long long)arg4;
- (void)dealloc;
- (id)init;

@end


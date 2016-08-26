/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAnimationPerformanceTrackerDelegate;
#import <Facebook/Facebook-Structs.h>
@class CADisplayLink, FBAnimationPerformanceTrackerDisplayLinkTarget, NSRunLoop;

@interface FBAnimationPerformanceTracker : NSObject {

	FBAnimationPerformanceTrackerConfig _config;
	BOOL _tracking;
	BOOL _firstUpdate;
	double _previousFrameTimestamp;
	CADisplayLink* _displayLink;
	FBAnimationPerformanceTrackerDisplayLinkTarget* _displayLinkTarget;
	BOOL _prepared;
	NSRunLoop* _runLoop;
	double _durationTotal;
	double _smallDrops;
	double _largeDrops;
	double _totalTimeStalled;
	id<FBAnimationPerformanceTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAnimationPerformanceTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(FBAnimationPerformanceTrackerConfig)standardConfig;
+(void)_trackerLoop;
-(void)_setupSignal;
-(void)_tearDownCADisplayLink;
-(void)_setUpCADisplayLink;
-(void)_reportStackTrace:(id)arg1 frameTime:(long long)arg2 ;
-(void)_addFrameTime:(double)arg1 singleFrameTime:(double)arg2 ;
-(void)setDelegate:(id<FBAnimationPerformanceTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAnimationPerformanceTrackerDelegate>)delegate;
-(void)_reset;
-(void)stop;
-(void)start;
-(void)_update;
-(id)initWithConfig:(FBAnimationPerformanceTrackerConfig)arg1 ;
-(BOOL)prepare;
@end

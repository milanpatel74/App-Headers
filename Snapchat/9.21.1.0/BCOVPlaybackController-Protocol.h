//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol BCOVPlaybackController <NSObject>
@property(readonly, copy, nonatomic) id <BCOVMutableAnalytics> analytics;
@property(readonly, nonatomic) UIView *view;
@property(nonatomic, getter=isAutoPlay) _Bool autoPlay;
@property(nonatomic, getter=isAutoAdvance) _Bool autoAdvance;
@property(nonatomic) id <BCOVPlaybackControllerDelegate> delegate;
- (void)pauseAd;
- (void)resumeAd;
- (void)setVideos:(id <NSFastEnumeration>)arg1;
- (void)resumeVideoAtTime:(CDStruct_1b6d18a9)arg1 withAutoPlay:(_Bool)arg2;
- (void)pause;
- (void)play;
- (void)advanceToNext;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (void)removeSessionConsumer:(id <BCOVPlaybackSessionConsumer>)arg1;
- (void)addSessionConsumer:(id <BCOVPlaybackSessionConsumer>)arg1;
@end


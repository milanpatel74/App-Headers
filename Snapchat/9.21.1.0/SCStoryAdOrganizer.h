//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAdStreamEventListener.h"
#import "SCStoryOrganizer.h"

@class FriendStories, NSString, SCAdTransformResponse, SCStoryAdInsertionController, SCStoryAdServeTimer, SCStoryAdStream, SCStoryAdStreamManager, SCStoryUsageLogger, Story;

@interface SCStoryAdOrganizer : NSObject <SCAdStreamEventListener, SCStoryOrganizer>
{
    SCStoryAdInsertionController *_adInsertionController;
    SCStoryAdStream *_adStream;
    SCStoryAdStreamManager *_adStreamManager;
    long long _viewingType;
    Story *_currentStoryAd;
    SCAdTransformResponse *_currentAdResponse;
    FriendStories *_friendStories;
    SCStoryUsageLogger *_storyUsageLogger;
    NSString *_currentAdRequestClientId;
    int _adSkipCount;
    SCStoryAdServeTimer *_timer;
}

- (void).cxx_destruct;
- (id)timerParameters;
- (void)logAdServeTargetTime;
- (void)logAdServeTime;
- (void)logStoryAdOpportunity;
- (void)resetTimer;
- (void)resetCurrentAdRequestClientId;
- (id)currentAdRequestClientId;
- (void)onAdResolutionError:(id)arg1;
- (void)onAdReady:(id)arg1;
- (void)endPlayback;
- (void)viewedStory:(id)arg1 withSnapsRemaining:(unsigned long long)arg2;
- (id)nextStoryToInsertWithSnapsRemaining:(unsigned long long)arg1;
- (void)startPlaybackWithSnapsRemaining:(unsigned long long)arg1;
- (id)initWithFriendStories:(id)arg1 friendStoriesViewingType:(long long)arg2;
- (id)initWithFriendStories:(id)arg1 adStreamRequestInfo:(id)arg2 friendStoriesViewingType:(long long)arg3 adInsertionController:(id)arg4 storyAdStreamManager:(id)arg5 storyUsageLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


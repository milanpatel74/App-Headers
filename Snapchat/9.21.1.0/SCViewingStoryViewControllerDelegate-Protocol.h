//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Friend, NSString, SCViewingStoryViewController, Story;

@protocol SCViewingStoryViewControllerDelegate <NSObject>
- (void)hideMyStoryAndGoToFeed:(SCViewingStoryViewController *)arg1;
- (void)hideMyStoryAndGoToChat:(SCViewingStoryViewController *)arg1 friend:(Friend *)arg2;
- (_Bool)shouldHideStoriesWhenPlayingStops;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didResolveDeepLinkWithSharedId:(NSString *)arg2 username:(NSString *)arg3;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didFinishStory:(Story *)arg2;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didSelectDeleteStorySnap:(Story *)arg2;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didSelectSaveStorySnap:(Story *)arg2;
- (void)viewingStoryControllerDidBecomeUnloaded:(SCViewingStoryViewController *)arg1;
- (void)viewingStoryControllerDidPullToDismissStory:(SCViewingStoryViewController *)arg1;
- (void)viewingStoryControllerDidHideStory:(SCViewingStoryViewController *)arg1;
- (void)viewingStoryControllerDidStopPlayingStory:(SCViewingStoryViewController *)arg1;
- (_Bool)viewingStoryController:(SCViewingStoryViewController *)arg1 readyToShowNextStorySnap:(Story *)arg2;
@end


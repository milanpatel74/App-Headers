/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoFromViewDelegate.h>
#import <Facebook/FBVideoChannelPlaylistPlaybackControllerDelegate.h>
#import <Facebook/FBVideoChannelPlaylistControllerDataSource.h>
#import <Facebook/FBVideoChannelPlaylistControllerDelegate.h>
#import <Facebook/FBSwipeableFullscreenController.h>

@protocol FBNavigationCoordinator, FBVideoPresentingDelegate, FBSwipeableFullscreenPlaylistController;
@class FBMemVideo, FBMemFeedStory, FBUserSession, NSArray, FBVideoChannelPlaylistItem, NSString, FBVideoChannelSession, FBVideoViewManager, FBVideoViewManagerContext, FBVideoPlayerComponentStatefulView, FBVideoChannelPlaylistController, FBVideoChannelPlaylistPlaybackController, NSMutableArray;

@interface FBVideoChannelFullscreenSwipeableController : NSObject <FBVideoFromViewDelegate, FBVideoChannelPlaylistPlaybackControllerDelegate, FBVideoChannelPlaylistControllerDataSource, FBVideoChannelPlaylistControllerDelegate, FBSwipeableFullscreenController> {

	FBMemVideo* _video;
	FBMemFeedStory* _parent;
	FBUserSession* _session;
	NSArray* _trackingCodes;
	FBVideoChannelPlaylistItem* _originalItem;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSString* _channelAdsOpportunity;
	NSString* _sessionID;
	FBVideoChannelSession* _videoChannelSession;
	FBVideoViewManager* _viewManager;
	FBVideoViewManagerContext* _originalViewManagerContext;
	id<FBVideoPresentingDelegate> _presentingDelegate;
	id<FBSwipeableFullscreenPlaylistController> _fullscreenPlaylistController;
	/*^block*/id _fullscreenDismissCompletionBlock;
	FBVideoPlayerComponentStatefulView* _presentedStatefulView;
	FBVideoChannelPlaylistController* _playlistController;
	FBVideoChannelPlaylistPlaybackController* _playlistPlaybackController;
	NSMutableArray* _dataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfObjectsInSection:(long long)arg1 ;
-(void)enumerateObjectsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)updatePlaylistItems:(id)arg1 ;
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 ;
-(void)_didDismiss;
-(id)viewToReturnVideoToForVideoID:(id)arg1 ;
-(void)videoChannelPlaylistPlaybackController:(id)arg1 willBeginPlaybackForVideoController:(id)arg2 wasAutoScrolled:(BOOL)arg3 ;
-(void)playlistDidReceiveChannelForSection:(long long)arg1 withTitle:(id)arg2 channelAdsOpportunity:(id)arg3 error:(id)arg4 ;
-(void)playlistWillAddVideoItemsToPlaylist:(id)arg1 ;
-(void)playlistDidUpdate;
-(id)initWithViewVideo:(id)arg1 parent:(id)arg2 videoStatefulView:(id)arg3 trackingCodes:(id)arg4 presentingDelegate:(id)arg5 playlistVideoChannel:(id)arg6 playlistVideoChannelCaller:(id)arg7 fullscreenDismissCompletionBlock:(/*^block*/id)arg8 configureVideoFullscreenControllerBlock:(/*^block*/id)arg9 fullscreenInitialPlaylistItemsBlock:(/*^block*/id)arg10 fullscreenPlaylistController:(id)arg11 intentHandler:(id)arg12 navigationCoordinator:(id)arg13 fontFoundry:(id)arg14 scenePath:(id)arg15 analyticsModule:(id)arg16 session:(id)arg17 ;
-(id)entryVideoFullscreenViewController;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)dismiss;
-(pair<id<NSObject>, NSIndexPath *>)firstObjectPassingTest:(/*^block*/id)arg1 ;
@end

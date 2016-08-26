/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBClonePhotoViewProviderDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Facebook/FBBackstageCarouselLayoutDelegate.h>
#import <Facebook/FBBackstageStackTransitioningProtocol.h>

@class FBClonePhotoViewProvider, FBBackstageCarouselLayout, UICollectionView, FBButton, UILabel, FBBackstageSeenStateHandler, FBBackstageVideoController, FBBackstageStackTransitioningDelegate, FBBackstageTouchThroughView, FBPopoverController, FBMemPerson, FBUserSession, NSArray, NSString;

@interface FBBackstageStackBaseViewController : UIViewController <FBClonePhotoViewProviderDelegate, UICollectionViewDataSource, FBBackstageCarouselLayoutDelegate, FBBackstageStackTransitioningProtocol> {

	long long _numShotsSeen;
	FBClonePhotoViewProvider* _mediaViewProvider;
	FBBackstageCarouselLayout* _layout;
	UICollectionView* _collectionView;
	FBButton* _cancelButton;
	UILabel* _titleLabel;
	FBBackstageSeenStateHandler* _seenStateHandler;
	FBBackstageVideoController* _videoController;
	FBBackstageStackTransitioningDelegate* _transitioningDelegate;
	FBBackstageTouchThroughView* _topActionsView;
	FBPopoverController* _popoverController;
	FBMemPerson* _person;
	FBUserSession* _session;
	long long _initialIndex;
	long long _currentIndex;
	NSArray* _items;

}

@property (nonatomic,retain) FBMemPerson * person;                   //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) long long initialIndex;                 //@synthesize initialIndex=_initialIndex - In the implementation block
@property (assign,nonatomic) long long currentIndex;                 //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,copy) NSArray * items;                          //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)carouselSnappingAnimationDuration;
-(id)clonePhotoViewProvider:(id)arg1 cloneViewForMedia:(id)arg2 ;
-(void)transitionManagerNeedsDismissal:(id)arg1 ;
-(id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1 ;
-(unsigned long long)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2 ;
-(void)transitionManager:(id)arg1 didDismissWithMediaViewProviderInfo:(id)arg2 ;
-(void)transitionManager:(id)arg1 didPresentWithMediaViewProviderInfo:(id)arg2 ;
-(id)displayableMediaTransitioningDelegate;
-(id)displayableMediaViewProvider;
-(CGPoint)collectionView:(id)arg1 layout:(id)arg2 shouldDecelerateToTargetContentOffset:(CGPoint)arg3 withTargetIndex:(long long)arg4 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willUpdateToIndex:(long long)arg3 ;
-(void)closeStack;
-(long long)initialIndex;
-(id)carouselTransitionIndexPath;
-(BOOL)shouldPerformDismissTransitionToOriginalFrame;
-(BOOL)viewerOwnsStack;
-(void)adjustCellOpacityAnimated:(BOOL)arg1 ;
-(void)pauseVideoPlayback;
-(void)resumeVideoPlayback;
-(void)resumeVideoPlaybackInCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)updateForCurrentIndexAnimated:(BOOL)arg1 ;
-(id)initWithPerson:(id)arg1 session:(id)arg2 items:(id)arg3 layout:(id)arg4 ;
-(id)currentBackstagePost;
-(void)incrementShotSeenCount;
-(void)showPopoverWithViewController:(id)arg1 contentSize:(CGSize)arg2 fromView:(id)arg3 ;
-(void)setInitialIndex:(long long)arg1 ;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)currentIndex;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setPerson:(FBMemPerson *)arg1 ;
-(FBMemPerson *)person;
-(void)setCurrentIndex:(long long)arg1 ;
-(FBUserSession *)session;
@end

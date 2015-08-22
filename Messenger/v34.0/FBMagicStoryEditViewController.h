/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBDisplayableMediaTransitionManagerDelegate.h>
#import <Messenger/FBMagicStoryBurstEditCellDelegate.h>
#import <Messenger/FBSimpleMediaViewProviderDelegate.h>
#import <Messenger/FBPresentableViewController.h>
#import <Messenger/FBMagicStoryEditViewControllerProtocol.h>

@protocol FBMagicStoryEditViewControllerDelegate, FBDisplayableMediaViewProvider;
@class FBUserSession, FBMagicStoryEditContainerView, UITapGestureRecognizer, FBMagicStoryBurstAssetDataSource, AVPlayer, AVPlayerItem, UICollectionView, FBMagicStoryBaseAsset, FBDisplayableMediaTransitionManager, FBMagicStoryTransitioningDelegate, NSIndexPath, FBMagicStoryCollection, NSString;

@interface FBMagicStoryEditViewController : UIViewController <FBDisplayableMediaTransitionManagerDelegate, FBMagicStoryBurstEditCellDelegate, FBSimpleMediaViewProviderDelegate, FBPresentableViewController, FBMagicStoryEditViewControllerProtocol> {

	FBUserSession* _session;
	FBMagicStoryEditContainerView* _editView;
	UITapGestureRecognizer* _tapRecognizer;
	FBMagicStoryBurstAssetDataSource* _dataSource;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	UICollectionView* _collectionView;
	SCD_Struct_FB242 _currentTime;
	unsigned long long _assetIndex;
	unsigned long long _startingBurstFrame;
	FBMagicStoryBaseAsset* _asset;
	BOOL _closing;
	FBDisplayableMediaTransitionManager* _transitionManager;
	FBMagicStoryTransitioningDelegate* _transitioningDelegate;
	id<FBMagicStoryEditViewControllerDelegate> _delegate;
	NSIndexPath* _collectionIndexPath;
	FBMagicStoryCollection* _collection;
	long long _editMode;
	id<FBDisplayableMediaViewProvider> _mediaViewProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
@property (assign,nonatomic,__weak) id<FBMagicStoryEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * collectionIndexPath;                                     //@synthesize collectionIndexPath=_collectionIndexPath - In the implementation block
@property (nonatomic,retain) FBMagicStoryCollection * collection;                                     //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) long long editMode;                                                    //@synthesize editMode=_editMode - In the implementation block
@property (nonatomic,retain) id<FBDisplayableMediaViewProvider> mediaViewProvider;                    //@synthesize mediaViewProvider=_mediaViewProvider - In the implementation block
-(unsigned long long)preferredPresentationMethod;
-(id)simpleMediaViewProvider:(id)arg1 viewOrLayerForMedia:(id)arg2 ;
-(void)transitionManagerNeedsDismissal:(id)arg1 ;
-(id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1 ;
-(unsigned long long)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2 ;
-(void)burstEditCellDidTapHideButton;
-(SCD_Struct_FB242)currentTimeForShownVideo;
-(void)setStartingTimeForShownVideo:(SCD_Struct_FB242)arg1 ;
-(void)setStartingFrameForShownBurst:(unsigned long long)arg1 ;
-(NSIndexPath *)collectionIndexPath;
-(id<FBDisplayableMediaViewProvider>)mediaViewProvider;
-(void)setMediaViewProvider:(id<FBDisplayableMediaViewProvider>)arg1 ;
-(id)initWithSession:(id)arg1 collectionIndexPath:(id)arg2 collection:(id)arg3 assetIndex:(unsigned long long)arg4 ;
-(id)_editViewConfiguredWithPhotoAsset:(id)arg1 ;
-(id)_editViewConfiguredWithVideoAsset:(id)arg1 ;
-(id)_editViewConfiguredWithBurstAsset:(id)arg1 ;
-(void)handleHide:(id)arg1 ;
-(void)_itemDidEndPlay;
-(/*^block*/id)_calculateFrameBlockForImageRatio:(double)arg1 ;
-(FBMagicStoryCollection *)collection;
-(void)setPlayerItem:(id)arg1 ;
-(void)setCollection:(FBMagicStoryCollection *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMagicStoryEditViewControllerDelegate>)arg1 ;
-(id<FBMagicStoryEditViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)handleTap:(id)arg1 ;
-(long long)editMode;
@end

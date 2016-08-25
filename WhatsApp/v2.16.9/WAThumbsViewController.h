/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WASavedContentBrowserChildTableViewController.h>
#import <WhatsApp/WAThumbsTableViewCellDelegate.h>
#import <WhatsApp/WAMediaGallery.h>

@class WAMediaManager, NSIndexPath, UIView, UILabel, UIBarButtonItem, NSMutableSet, NSOperationQueue, UIImageView, NSMutableArray, NSString;

@interface WAThumbsViewController : WASavedContentBrowserChildTableViewController <WAThumbsTableViewCellDelegate, WAMediaGallery> {

	UIView* _mediaCountView;
	UILabel* _mediaCountLabel;
	UIBarButtonItem* _editBarButton;
	UIBarButtonItem* _cancelBarButton;
	UIBarButtonItem* _deleteBarButton;
	BOOL _editing;
	NSMutableSet* _selectedIndexPaths;
	NSOperationQueue* _thumbnailLoadingOpQueue;
	long long _thumbnailCountPerRow;
	BOOL _needsAutoScroll;
	BOOL _isPerformingFancyRotation;
	UIImageView* _beforeRotationSnapshotImageView;
	UIImageView* _afterRotationSnapshotImageView;
	UIView* _whiteBackgroundView;
	NSIndexPath* _thumbnailIndexPathToRestore;
	CGPoint _contentOffsetAtStartOfRotation;
	NSMutableArray* _selectedMessagesBeforeMediaManagerContentChange;
	BOOL _mediaManagerUpdateInProgress;
	WAMediaManager* _mediaManager;
	NSIndexPath* _indexPathOfMessageToScrollToWhenAppearing;

}

@property (nonatomic,retain) WAMediaManager * mediaManager;                                        //@synthesize mediaManager=_mediaManager - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathOfMessageToScrollToWhenAppearing;              //@synthesize indexPathOfMessageToScrollToWhenAppearing=_indexPathOfMessageToScrollToWhenAppearing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)noItemsViewHeading;
-(id)noItemsViewSubheading;
-(id)noItemsViewImage;
-(WAMediaManager *)mediaManager;
-(void)setIndexPathOfMessageToScrollToWhenAppearing:(NSIndexPath *)arg1 ;
-(void)setMediaManager:(WAMediaManager *)arg1 ;
-(void)mediaManagerWillChangeContent:(id)arg1 ;
-(void)mediaManagerDidChangeContent:(id)arg1 ;
-(void)updateLayoutToOrientation:(long long)arg1 ;
-(void)deleteAction:(id)arg1 ;
-(void)updateEditingWithAnimation:(BOOL)arg1 ;
-(void)updateFooter;
-(void)presentMediaAtIndexPath:(id)arg1 ;
-(NSIndexPath *)indexPathOfMessageToScrollToWhenAppearing;
-(void)deleteSelectedMedia;
-(void)scrollAutomaticallyToRelevantItem;
-(void)scrollToThumbnailAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)indexPathOfThumbnailAtCenterOfView;
-(id)tableViewSnapshot;
-(void)tableViewCell:(id)arg1 tappedImageAtIndex:(long long)arg2 ;
-(id)init;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)updateSelection;
-(id)uniqueIdentifier;
-(void)cancelAction:(id)arg1 ;
-(void)editAction:(id)arg1 ;
@end

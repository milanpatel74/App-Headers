/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAViewController.h>
#import <WhatsApp/WAPageableItemBrowserViewDelegate.h>
#import <WhatsApp/WAMultiSendThumbnailBrowserViewDelegate.h>
#import <WhatsApp/WAMediaPickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <WhatsApp/WAMultiSendTitleViewDelegate.h>
#import <WhatsApp/WACaptionBarDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <WhatsApp/WACameraViewControllerDelegate.h>
#import <WhatsApp/WAImageToImageTransitioning.h>

@protocol WAMultiSendPreviewViewControllerDelegate;
@class NSMutableArray, NSString, NSArray, UIBarButtonItem, WAMultiSendTitleView, WACaptionBar, UIProgressView, UIView, WARecipientNameView, WAMediaPickerLibraryController, WAMultiSendThumbnailBrowserView, WAPageableItemBrowserView;

@interface WAMultiSendPreviewViewController : WAViewController <WAPageableItemBrowserViewDelegate, WAMultiSendThumbnailBrowserViewDelegate, WAMediaPickerControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WAMultiSendTitleViewDelegate, WACaptionBarDelegate, UIGestureRecognizerDelegate, WACameraViewControllerDelegate, WAImageToImageTransitioning> {

	long long _selectedIndex;
	NSMutableArray* _mediaItems;
	NSString* _selectedItemUUIDBeforePresentingPicker;
	NSArray* _allAssetIdentifiersBeforePresentingPicker;
	double _imagePickerDelayStartTime;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _cancelExportButton;
	UIBarButtonItem* _doneCroppingButton;
	UIBarButtonItem* _sendButton;
	WAMultiSendTitleView* _titleView;
	WACaptionBar* _captionBar;
	double _captionBarAdjustment;
	BOOL _rotateCurrentItemWhenKeyboardHides;
	BOOL _cropCurrentItemWhenKeyboardHides;
	SCD_Struct_WA65 _transformInfoBeforeCropping;
	UIProgressView* _exportProgressView;
	BOOL _cancelExportRequested;
	UIView* _touchTrapperView;
	WARecipientNameView* _recipientView;
	BOOL _exportingItems;
	WAMediaPickerLibraryController* _libraryController;
	id<WAMultiSendPreviewViewControllerDelegate> _delegate;
	unsigned long long _pickerMode;
	id _lastUsedAssetCollectionIdentifier;
	NSString* _recipientName;
	WAMultiSendThumbnailBrowserView* _thumbnailBrowserView;
	WAPageableItemBrowserView* _pagingBrowserView;

}

@property (nonatomic,retain) WAMediaPickerLibraryController * libraryController;                        //@synthesize libraryController=_libraryController - In the implementation block
@property (assign,nonatomic,__weak) id<WAMultiSendPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                             //@synthesize pickerMode=_pickerMode - In the implementation block
@property (nonatomic,retain) id lastUsedAssetCollectionIdentifier;                                      //@synthesize lastUsedAssetCollectionIdentifier=_lastUsedAssetCollectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * recipientName;                                                    //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,retain) WAMultiSendThumbnailBrowserView * thumbnailBrowserView;                    //@synthesize thumbnailBrowserView=_thumbnailBrowserView - In the implementation block
@property (nonatomic,retain) WAPageableItemBrowserView * pagingBrowserView;                             //@synthesize pagingBrowserView=_pagingBrowserView - In the implementation block
@property (assign,getter=isCroppingCurrentItem,nonatomic) BOOL croppingCurrentItem; 
@property (assign,getter=isExportingItems,nonatomic) BOOL exportingItems;                               //@synthesize exportingItems=_exportingItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isMixingImagesAndVideosSupported;
-(void)wa_fontSizeDidChange;
-(void)captionBarWillShowKeyboard:(id)arg1 ;
-(void)captionBarWillHideKeyboard:(id)arg1 ;
-(void)captionBarDidHideKeyboard:(id)arg1 ;
-(BOOL)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(void)addMediaItem:(id)arg1 ;
-(void)setLibraryController:(WAMediaPickerLibraryController *)arg1 ;
-(void)cameraViewControllerDidCancel:(id)arg1 ;
-(void)cameraViewController:(id)arg1 didFinishWithMediaItems:(id)arg2 ;
-(void)cameraViewController:(id)arg1 didSelectMediaPickerAsset:(id)arg2 cancelSelectionHandler:(/*^block*/id)arg3 ;
-(WAMediaPickerLibraryController *)libraryController;
-(void)captionBarDidFinishEditing:(id)arg1 ;
-(void)captionBarDidChangeText:(id)arg1 ;
-(void)multiSendTitleViewWillDeleteCurrentItem:(id)arg1 ;
-(void)multiSendTitleViewWillRotateCurrentItem:(id)arg1 ;
-(void)multiSendTitleViewDidChangeCropping:(id)arg1 ;
-(void)multiSendTitleView:(id)arg1 willChangeCroppingWithCompletionHandler:(/*^block*/id)arg2 ;
-(id)lastUsedAssetCollectionIdentifier;
-(void)setLastUsedAssetCollectionIdentifier:(id)arg1 ;
-(void)mediaPickerControllerDidFinishPresenting:(id)arg1 ;
-(void)mediaPickerController:(id)arg1 didFinishWithSelectedItems:(id)arg2 ;
-(void)cancelExport:(id)arg1 ;
-(void)sendAllMediaItems:(id)arg1 ;
-(void)doneCropping:(id)arg1 ;
-(void)resetStats;
-(WAMultiSendThumbnailBrowserView *)thumbnailBrowserView;
-(WAPageableItemBrowserView *)pagingBrowserView;
-(NSString *)recipientName;
-(void)browserViewTapped:(id)arg1 ;
-(void)moveThumbnailBrowserViewToBottom;
-(void)updateContentInsetWithAnimation:(BOOL)arg1 ;
-(void)updateCaption;
-(BOOL)isCroppingCurrentItem;
-(void)mediaItemDidUpdatePreviewContent:(id)arg1 ;
-(unsigned long long)indexOfMediaItemWithIdentifier:(id)arg1 ;
-(void)cancelExportingAndDisableAutoExportingForAllMediaItems;
-(void)startMonitoringMediaItem:(id)arg1 ;
-(void)cancelCropping;
-(void)cancelAllExport;
-(void)cancelAndExit;
-(void)takeMorePhotos;
-(void)takeAnotherPhoto;
-(void)selectAnotherImageFromPhotoLibrary;
-(void)stopMonitoringMediaItem:(id)arg1 ;
-(BOOL)isExportingItems;
-(void)setCaptionOfCurrentItem:(id)arg1 ;
-(void)sendMediaItems:(id)arg1 fromItems:(id)arg2 atIndex:(long long)arg3 saveToCameraRoll:(BOOL)arg4 ;
-(void)updateExportProgress;
-(void)setExportingItems:(BOOL)arg1 ;
-(void)finishWithProcessedItems:(id)arg1 ;
-(void)setCroppingCurrentItem:(BOOL)arg1 ;
-(id)mediaItemWithAssetIdentifier:(id)arg1 ;
-(id)mediaItemWithUUID:(id)arg1 ;
-(void)removeImageAtIndex:(long long)arg1 ;
-(void)selectAnotherImage;
-(id)pageableItemBrowserView:(id)arg1 itemAtIndex:(long long)arg2 ;
-(long long)pageableItemCount:(id)arg1 ;
-(void)pageableItemBrowserViewCurrentIndexDidChange:(id)arg1 ;
-(void)pageableItemBrowserView:(id)arg1 wantsToDeleteItemAtIndex:(long long)arg2 ;
-(void)pageableItemBrowserView:(id)arg1 willBeginEditingAnimationForItemAtIndex:(long long)arg2 ;
-(void)pageableItemBrowserView:(id)arg1 didEndEditingAnimationForItemAtIndex:(long long)arg2 ;
-(void)pageableItemBrowserView:(id)arg1 willAnimateRotationOfItemAtIndex:(long long)arg2 angle:(float)arg3 ;
-(void)pageableItemBrowserView:(id)arg1 didFinishRotatingItemAtIndex:(long long)arg2 ;
-(void)pageableItemBrowserViewWillBeginFocusedTask:(id)arg1 ;
-(void)pageableItemBrowserViewDidEndFocusedTask:(id)arg1 ;
-(void)pageableItemBrowserViewDidScroll:(id)arg1 ;
-(BOOL)pageableItemBrowserViewKeyboardIsShown:(id)arg1 ;
-(void)pageableItemBrowserView:(id)arg1 didUpdateThumbnailOfItemAtIndex:(long long)arg2 ;
-(id)pageableItemBrowserViewContainingViewController:(id)arg1 ;
-(long long)multiSendThumbnailBrowserViewItemCount;
-(id)multiSendMediaItemAtIndex:(long long)arg1 ;
-(id)indicesOfMultiSendMediaItemsSortedByDate;
-(BOOL)areMultiSendMediaItemsSorted;
-(void)multiSendThumbnailBrowserViewDidRequestAddItem:(id)arg1 ;
-(void)multiSendThumbnailBrowserViewDidRequestSend:(id)arg1 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestRemovalOfItemAtIndex:(long long)arg2 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestSelectionOfItemAtIndex:(long long)arg2 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didMoveItemAtIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(void)multiSendThumbnailBrowserViewDidChangeEditingMode:(id)arg1 ;
-(void)multiSendThumbnailBrowserViewDidRequestItemSort:(id)arg1 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 willChangeFrame:(CGRect)arg2 ;
-(void)setRecipientName:(NSString *)arg1 ;
-(void)setThumbnailBrowserView:(WAMultiSendThumbnailBrowserView *)arg1 ;
-(void)setPagingBrowserView:(WAPageableItemBrowserView *)arg1 ;
-(void)setSelectedIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<WAMultiSendPreviewViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(id<WAMultiSendPreviewViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(void)updateLayout;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)cancel:(id)arg1 ;
-(void)updateInterface;
@end

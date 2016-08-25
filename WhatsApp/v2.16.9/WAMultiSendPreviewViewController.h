/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
#import <WhatsApp/WAMentionsSelectorViewDelegate.h>
#import <WhatsApp/WAPaintToolboxViewDelegate.h>
#import <WhatsApp/WACameraViewControllerDelegate.h>
#import <WhatsApp/WAImageToImageTransitioning.h>

@protocol WAMultiSendPreviewViewControllerDelegate;
@class NSMutableArray, NSString, NSArray, UIBarButtonItem, WAMultiSendTitleView, WACaptionBar, UIProgressView, UIView, WARecipientNameView, WAMentionsSelectorView, WAChatSession, WAPaintCanvasDevice, UIButton, WAPaintToolboxView, WAMediaPickerLibraryController, NSURL, WAMultiSendThumbnailBrowserView, WAPageableItemBrowserView;

@interface WAMultiSendPreviewViewController : WAViewController <WAPageableItemBrowserViewDelegate, WAMultiSendThumbnailBrowserViewDelegate, WAMediaPickerControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WAMultiSendTitleViewDelegate, WACaptionBarDelegate, UIGestureRecognizerDelegate, WAMentionsSelectorViewDelegate, WAPaintToolboxViewDelegate, WACameraViewControllerDelegate, WAImageToImageTransitioning> {

	long long _selectedIndex;
	NSMutableArray* _mediaItems;
	NSString* _selectedItemUUIDBeforePresentingPicker;
	NSArray* _allAssetIdentifiersBeforePresentingPicker;
	double _imagePickerDelayStartTime;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _retakeButton;
	UIBarButtonItem* _cancelExportButton;
	UIBarButtonItem* _doneCroppingButton;
	UIBarButtonItem* _sendButton;
	WAMultiSendTitleView* _titleView;
	WACaptionBar* _captionBar;
	double _captionBarAdjustment;
	BOOL _rotateCurrentItemWhenKeyboardHides;
	BOOL _cropCurrentItemWhenKeyboardHides;
	SCD_Struct_WA80 _transformInfoBeforeCropping;
	UIProgressView* _exportProgressView;
	BOOL _cancelExportRequested;
	UIView* _touchTrapperView;
	WARecipientNameView* _recipientView;
	WAMentionsSelectorView* _mentionsSelectorView;
	WAChatSession* _chatSession;
	WAPaintCanvasDevice* _paintCanvasDevice;
	UIButton* _paintModeButton;
	UIBarButtonItem* _donePaintingButton;
	UIBarButtonItem* _clearPaintingButton;
	WAPaintToolboxView* _paintToolbox;
	long long _hidePaintCanvasToolboxCounter;
	double _lastHideToolboxTime;
	BOOL _recipientUnknown;
	BOOL _exportingItems;
	BOOL _sending;
	BOOL _paintingEnabled;
	WAMediaPickerLibraryController* _libraryController;
	id<WAMultiSendPreviewViewControllerDelegate> _delegate;
	unsigned long long _pickerMode;
	id _lastUsedAssetCollectionIdentifier;
	NSString* _recipientName;
	NSString* _recipientJID;
	NSURL* _originalURL;
	WAMultiSendThumbnailBrowserView* _thumbnailBrowserView;
	WAPageableItemBrowserView* _pagingBrowserView;

}

@property (nonatomic,retain) WAMultiSendThumbnailBrowserView * thumbnailBrowserView;                    //@synthesize thumbnailBrowserView=_thumbnailBrowserView - In the implementation block
@property (nonatomic,retain) WAPageableItemBrowserView * pagingBrowserView;                             //@synthesize pagingBrowserView=_pagingBrowserView - In the implementation block
@property (assign,getter=isCroppingCurrentItem,nonatomic) BOOL croppingCurrentItem; 
@property (assign,getter=isExportingItems,nonatomic) BOOL exportingItems;                               //@synthesize exportingItems=_exportingItems - In the implementation block
@property (assign,getter=isSending,nonatomic) BOOL sending;                                             //@synthesize sending=_sending - In the implementation block
@property (assign,getter=isPaintingEnabled,nonatomic) BOOL paintingEnabled;                             //@synthesize paintingEnabled=_paintingEnabled - In the implementation block
@property (nonatomic,retain) WAMediaPickerLibraryController * libraryController;                        //@synthesize libraryController=_libraryController - In the implementation block
@property (assign,nonatomic,__weak) id<WAMultiSendPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                             //@synthesize pickerMode=_pickerMode - In the implementation block
@property (nonatomic,retain) id lastUsedAssetCollectionIdentifier;                                      //@synthesize lastUsedAssetCollectionIdentifier=_lastUsedAssetCollectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * recipientName;                                                    //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,copy) NSString * recipientJID;                                                     //@synthesize recipientJID=_recipientJID - In the implementation block
@property (assign,nonatomic) BOOL recipientUnknown;                                                     //@synthesize recipientUnknown=_recipientUnknown - In the implementation block
@property (nonatomic,copy) NSURL * originalURL;                                                         //@synthesize originalURL=_originalURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isMixingImagesAndVideosSupported;
-(void)wa_fontSizeDidChange;
-(void)setRecipientJID:(NSString *)arg1 ;
-(void)setRecipientName:(NSString *)arg1 ;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(void)addMediaItem:(id)arg1 ;
-(BOOL)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(void)captionBarWillShowKeyboard:(id)arg1 ;
-(void)captionBarWillHideKeyboard:(id)arg1 ;
-(void)captionBarDidHideKeyboard:(id)arg1 ;
-(void)setPaintingEnabled:(BOOL)arg1 ;
-(BOOL)isPaintingEnabled;
-(BOOL)recipientUnknown;
-(void)setRecipientUnknown:(BOOL)arg1 ;
-(NSString *)recipientJID;
-(NSString *)recipientName;
-(void)setLibraryController:(WAMediaPickerLibraryController *)arg1 ;
-(void)cameraViewControllerDidCancel:(id)arg1 ;
-(void)cameraViewController:(id)arg1 didFinishWithMediaItems:(id)arg2 ;
-(void)cameraViewController:(id)arg1 didSelectMediaPickerAsset:(id)arg2 cancelSelectionHandler:(/*^block*/id)arg3 ;
-(WAMediaPickerLibraryController *)libraryController;
-(void)resetStats;
-(void)paintToolboxViewDidChangeBrushColor:(id)arg1 ;
-(void)paintToolboxViewDidChangeBrushSize:(id)arg1 ;
-(void)paintToolboxViewDidChangeBrushType:(id)arg1 ;
-(void)updateInterfaceWithAnimation:(BOOL)arg1 ;
-(void)updateMentionsSelectorViewLayoutWithAnimationCurve:(long long)arg1 animationDuration:(double)arg2 ;
-(void)configureMentionsSelectorView;
-(void)mentionsSelectorView:(id)arg1 didSelectContact:(id)arg2 forTextRange:(NSRange)arg3 ;
-(void)captionBarDidFinishEditing:(id)arg1 ;
-(void)captionBarDidChangeText:(id)arg1 ;
-(BOOL)captionBarShouldTrackMentions:(id)arg1 ;
-(void)captionBar:(id)arg1 didEditMention:(id)arg2 inRange:(NSRange)arg3 ;
-(void)captionBarDidStopEditingMention:(id)arg1 ;
-(BOOL)isUndoPossibleForMultiSendTitleView:(id)arg1 ;
-(BOOL)isRedoPossibleForMultiSendTitleView:(id)arg1 ;
-(void)multiSendTitleViewWillDeleteCurrentItem:(id)arg1 ;
-(void)multiSendTitleViewWillRotateCurrentItem:(id)arg1 ;
-(void)multiSendTitleViewDidChangeCropping:(id)arg1 ;
-(void)multiSendTitleView:(id)arg1 willChangeCroppingWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)multiSendTitleViewDidRequestUndo:(id)arg1 ;
-(void)multiSendTitleViewDidRequestRedo:(id)arg1 ;
-(id)lastUsedAssetCollectionIdentifier;
-(void)setLastUsedAssetCollectionIdentifier:(id)arg1 ;
-(void)mediaPickerControllerDidFinishPresenting:(id)arg1 ;
-(void)mediaPickerController:(id)arg1 didFinishWithSelectedItems:(id)arg2 ;
-(void)cancelExport:(id)arg1 ;
-(void)doneCropping:(id)arg1 ;
-(void)donePainting:(id)arg1 ;
-(void)clearPainting:(id)arg1 ;
-(void)paintCanvasDidChangeUndoStatus:(id)arg1 ;
-(void)paintCanvasDidBeginStroke:(id)arg1 ;
-(void)paintCanvasDidEndStroke:(id)arg1 ;
-(void)sendAllMediaItems:(id)arg1 ;
-(WAMultiSendThumbnailBrowserView *)thumbnailBrowserView;
-(WAPageableItemBrowserView *)pagingBrowserView;
-(void)browserViewTapped:(id)arg1 ;
-(void)togglePaintingEnabled:(id)arg1 ;
-(void)updatePaintModeButtonPosition;
-(void)moveThumbnailBrowserViewToBottom;
-(void)updateContentInsetWithAnimation:(BOOL)arg1 ;
-(void)updateCaption;
-(BOOL)isCroppingCurrentItem;
-(void)mediaItemDidUpdatePreviewContent:(id)arg1 ;
-(void)stopMonitoringMediaItem:(id)arg1 ;
-(void)cancelAndExit;
-(void)startMonitoringMediaItem:(id)arg1 ;
-(void)convertItemAtIndexFromPlaceholderToActualItem:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfMediaItemWithIdentifier:(id)arg1 ;
-(void)cancelExportingAndDisableAutoExportingForAllMediaItems;
-(void)cancelCropping;
-(void)cancelAllExport;
-(void)takeMorePhotos;
-(void)takeAnotherPhoto;
-(void)selectAnotherImageFromPhotoLibrary;
-(BOOL)isExportingItems;
-(void)setCaptionOfCurrentItem:(id)arg1 ;
-(void)sendMediaItems:(id)arg1 fromItems:(id)arg2 atIndex:(long long)arg3 saveToCameraRoll:(BOOL)arg4 ;
-(void)updateExportProgress;
-(void)setExportingItems:(BOOL)arg1 ;
-(void)finishWithProcessedItems:(id)arg1 ;
-(void)setCroppingCurrentItem:(BOOL)arg1 ;
-(id)mediaItemWithUUID:(id)arg1 ;
-(void)removeImageAtIndex:(long long)arg1 ;
-(void)selectAnotherImage;
-(void)beginHidingPaintCanvasToolbox;
-(void)endHidingPaintCanvasToolbox;
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
-(void)multiSendThumbnailBrowserViewDidRequestAddItem:(id)arg1 ;
-(void)multiSendThumbnailBrowserViewDidRequestSend:(id)arg1 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestRemovalOfItemAtIndex:(long long)arg2 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestSelectionOfItemAtIndex:(long long)arg2 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didMoveItemAtIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(void)multiSendThumbnailBrowserViewDidChangeEditingMode:(id)arg1 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 willChangeFrame:(CGRect)arg2 ;
-(id)mediaItemWithAssetIdentifier:(id)arg1 ;
-(void)setThumbnailBrowserView:(WAMultiSendThumbnailBrowserView *)arg1 ;
-(void)setPagingBrowserView:(WAPageableItemBrowserView *)arg1 ;
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(void)updateLayout;
-(NSURL *)originalURL;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)cancel:(id)arg1 ;
-(BOOL)isSending;
-(void)setSelectedIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)currentMediaItem;
-(void)setSending:(BOOL)arg1 ;
@end

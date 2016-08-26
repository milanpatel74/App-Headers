/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRemotePhotoSelectionDelegate.h>
#import <Facebook/FBCoverImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <Facebook/FBCoverPhotoPickerNavigationControllerDelegate.h>
#import <Facebook/FBTimelineEditCoverControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@protocol FBTimelineCoverPhotoEditableHeaderDataSource, FBProfileCoverPhotoUploadFlowControllerDelegate;
@class UIActionSheet, UIPopoverController, FBTimelineTemporaryCoverPhoto, UIBarButtonItem, UIView, FBCoverImagePickerController, FBRemotePhotoSelectionController, FBComposerLogger, FBCoverPhotoPickerNavigationController, FBUserSession, FBScenePath, FBProfileToolbox, FBContextualTimelineHeaderConfiguration, FBReachabilityAnnouncer, UIViewController, NSString;

@interface FBProfileCoverPhotoUploadFlowController : NSObject <FBRemotePhotoSelectionDelegate, FBCoverImagePickerControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, FBCoverPhotoPickerNavigationControllerDelegate, FBTimelineEditCoverControllerDelegate, UIDocumentPickerDelegate> {

	UIActionSheet* _coverActionSheet;
	UIPopoverController* _popoverController;
	FBTimelineTemporaryCoverPhoto* _temporaryCoverPhoto;
	UIBarButtonItem* _originalLeftBarButtonItem;
	UIBarButtonItem* _originalRightBarButtonItem;
	UIView* _overlayView;
	FBCoverImagePickerController* _coverImagePickerController;
	FBRemotePhotoSelectionController* _coverPhotoSelectionController;
	FBComposerLogger* _logger;
	FBCoverPhotoPickerNavigationController* _coverPhotoPickerNavigationController;
	FBUserSession* _session;
	FBScenePath* _scenePath;
	FBProfileToolbox* _toolbox;
	id<FBTimelineCoverPhotoEditableHeaderDataSource> _coverPhotoEditableHeaderDataSource;
	FBContextualTimelineHeaderConfiguration* _configuration;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	UIViewController* _viewController;
	id<FBProfileCoverPhotoUploadFlowControllerDelegate> _delegate;
	BOOL _isEditingCover;
	BOOL _isTaggedAndAlbumEmpty;

}

@property (assign,nonatomic) BOOL isEditingCover;                     //@synthesize isEditingCover=_isEditingCover - In the implementation block
@property (assign,nonatomic) BOOL isTaggedAndAlbumEmpty;              //@synthesize isTaggedAndAlbumEmpty=_isTaggedAndAlbumEmpty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)allowsInlineCoverEditing;
+(BOOL)canTapCoverPhoto:(id)arg1 session:(id)arg2 ;
+(void)setShouldShowOverlayWhenEditingCover:(BOOL)arg1 ;
-(void)_removeTemporaryCover;
-(void)_showCoverPhotoImagePickerWithSourceType:(long long)arg1 senderLayer:(id)arg2 ;
-(BOOL)_shouldPresentCameraInPopoverWithSourceType:(long long)arg1 ;
-(void)_setupNotificationsFromController:(id)arg1 ;
-(void)_showPhotoPermissionView;
-(void)_coverPhotoDidFinishUploadingWithNotification:(id)arg1 ;
-(void)_coverPhotoActionSheetDidSelectUploadActionWithSenderLayer:(id)arg1 ;
-(void)chooseCoverPhoto;
-(void)_openCoverPhotoWithPhoto:(id)arg1 ;
-(void)setIsEditingCover:(BOOL)arg1 ;
-(void)didTapSaveCoverButton;
-(void)_cancelEditCover;
-(void)saveCoverPhotoWithFocus:(CGPoint)arg1 ;
-(void)_dismissCoverPhotoSelectionController;
-(void)_editCoverPhoto:(id)arg1 size:(CGSize)arg2 photoFBID:(id)arg3 dismissPickerBlock:(/*^block*/id)arg4 pushCoverEditBlock:(/*^block*/id)arg5 ;
-(void)_dismissDocumentPicker:(id)arg1 ;
-(void)_dismissCoverPicker;
-(void)saveCoverPhoto:(id)arg1 focus:(CGPoint)arg2 ;
-(void)_uploadMemorialCover:(id)arg1 focus:(CGPoint)arg2 ;
-(void)remotePhotoSelectionController:(id)arg1 didSelectPhoto:(id)arg2 view:(id)arg3 ;
-(void)remotePhotoSelectionControllerDidCancel:(id)arg1 ;
-(void)relaunchCoverImagePicker:(id)arg1 withSourceType:(long long)arg2 ;
-(void)navigationControllerNeedDismiss:(id)arg1 ;
-(void)navigationControllerNeedShow:(id)arg1 ;
-(BOOL)isEditingCover;
-(BOOL)isTaggedAndAlbumEmpty;
-(void)setIsTaggedAndAlbumEmpty:(BOOL)arg1 ;
-(void)showCoverPhotoActionSheetFromLayer:(id)arg1 withPhoto:(id)arg2 ;
-(void)showCoverPhotoImagePickerFromLayer:(id)arg1 ;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 analyticsUUID:(id)arg3 coverPhotoEditableHeaderDataSource:(id)arg4 configuration:(id)arg5 hostingViewController:(id)arg6 delegate:(id)arg7 toolbox:(id)arg8 ;
-(void)dealloc;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)viewWillDisappear;
@end

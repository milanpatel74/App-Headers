/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/ImagePickerDelegateProtocol.h>

@protocol ListingPhotosEditingHelperDelegate;
@class UIViewController, ListingItemDataManager, ListingPhoto, ImagePickerController, NSString;

@interface ListingPhotosEditingHelper : NSObject <ImagePickerDelegateProtocol> {

	BOOL _shouldShowCurrentImagesInCameraMode;
	BOOL _shouldHideLibraryButtonInCameraMode;
	BOOL _shouldAutoPresentPhotoEditorOnCapture;
	BOOL _editingInCameraModeDisabled;
	BOOL _editorDoneButtonAlwaysEnabled;
	id<ListingPhotosEditingHelperDelegate> _delegate;
	UIViewController* _presentingViewController;
	ListingItemDataManager* _dataManager;
	long long _lastSelectedImageSourceType;
	ListingPhoto* _photoToEdit;
	ListingPhoto* _photoBeingLoaded;
	ImagePickerController* _imagePicker;

}

@property (assign,nonatomic) long long lastSelectedImageSourceType;                               //@synthesize lastSelectedImageSourceType=_lastSelectedImageSourceType - In the implementation block
@property (nonatomic,retain) ListingPhoto * photoToEdit;                                          //@synthesize photoToEdit=_photoToEdit - In the implementation block
@property (nonatomic,retain) ListingItemDataManager * dataManager;                                //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) ListingPhoto * photoBeingLoaded;                                     //@synthesize photoBeingLoaded=_photoBeingLoaded - In the implementation block
@property (nonatomic,retain) ImagePickerController * imagePicker;                                 //@synthesize imagePicker=_imagePicker - In the implementation block
@property (assign,nonatomic,__weak) id<ListingPhotosEditingHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                  //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCurrentImagesInCameraMode;                            //@synthesize shouldShowCurrentImagesInCameraMode=_shouldShowCurrentImagesInCameraMode - In the implementation block
@property (assign,nonatomic) BOOL shouldHideLibraryButtonInCameraMode;                            //@synthesize shouldHideLibraryButtonInCameraMode=_shouldHideLibraryButtonInCameraMode - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoPresentPhotoEditorOnCapture;                          //@synthesize shouldAutoPresentPhotoEditorOnCapture=_shouldAutoPresentPhotoEditorOnCapture - In the implementation block
@property (assign,nonatomic) BOOL editingInCameraModeDisabled;                                    //@synthesize editingInCameraModeDisabled=_editingInCameraModeDisabled - In the implementation block
@property (assign,nonatomic) BOOL editorDoneButtonAlwaysEnabled;                                  //@synthesize editorDoneButtonAlwaysEnabled=_editorDoneButtonAlwaysEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imagePickerCustomCameraCancelButton:(id)arg1 ;
-(id)imagePickerCustomCameraDoneButton:(id)arg1 ;
-(void)imagePickerDidCancel:(id)arg1 ;
-(void)imagePicker:(id)arg1 didPickImages:(id)arg2 ;
-(void)imagePicker:(id)arg1 didAddImage:(id)arg2 totalImages:(unsigned long long)arg3 ;
-(void)imagePickerDidRemoveImage:(id)arg1 totalImages:(unsigned long long)arg2 ;
-(id)imagePickerEditorHintOverlayView:(id)arg1 ;
-(void)startEditing:(id)arg1 ;
-(BOOL)editorDoneButtonAlwaysEnabled;
-(void)setShouldShowCurrentImagesInCameraMode:(BOOL)arg1 ;
-(void)setShouldHideLibraryButtonInCameraMode:(BOOL)arg1 ;
-(void)setShouldAutoPresentPhotoEditorOnCapture:(BOOL)arg1 ;
-(void)setEditingInCameraModeDisabled:(BOOL)arg1 ;
-(void)setEditorDoneButtonAlwaysEnabled:(BOOL)arg1 ;
-(void)editPhotoAtIndex:(unsigned long long)arg1 ;
-(void)pickPhotoFromLibrary;
-(void)pickPhotoFromCamera;
-(void)pickImageWithSourceType:(long long)arg1 ;
-(void)setPhotoBeingLoaded:(ListingPhoto *)arg1 ;
-(void)editPhoto:(id)arg1 ;
-(void)setPhotoToEdit:(ListingPhoto *)arg1 ;
-(void)removeListingPhoto;
-(ListingPhoto *)photoToEdit;
-(BOOL)shouldHideLibraryButtonInCameraMode;
-(BOOL)shouldShowCurrentImagesInCameraMode;
-(id)currentImagePaths;
-(void)setLastSelectedImageSourceType:(long long)arg1 ;
-(void)addProcessedImage:(id)arg1 withAssetURLString:(id)arg2 ;
-(BOOL)addProcessedImage:(id)arg1 withAssetURLString:(id)arg2 withShowAlert:(BOOL)arg3 ;
-(long long)lastSelectedImageSourceType;
-(void)addListingPhoto:(id)arg1 withAssetURLString:(id)arg2 isFromCamera:(BOOL)arg3 ;
-(BOOL)shouldAutoPresentPhotoEditorOnCapture;
-(BOOL)editingInCameraModeDisabled;
-(id)imageLibraryAssetURLsForCurrentPhotos;
-(void)addProcessedImage:(id)arg1 ;
-(ListingPhoto *)photoBeingLoaded;
-(void)setImagePicker:(ImagePickerController *)arg1 ;
-(void)exchangePhotosAtIndex:(unsigned long long)arg1 withPhotoAtIndex:(unsigned long long)arg2 ;
-(void)movePhotoAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setDataManager:(ListingItemDataManager *)arg1 ;
-(ListingItemDataManager *)dataManager;
-(void)setDelegate:(id<ListingPhotosEditingHelperDelegate>)arg1 ;
-(void)dealloc;
-(id<ListingPhotosEditingHelperDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(ImagePickerController *)imagePicker;
@end

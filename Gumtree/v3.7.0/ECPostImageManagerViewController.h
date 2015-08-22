/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Gumtree/EBKAssetsLibraryViewControllerDelegate.h>

@class ECPostDataProvider, ECPostImageManagerView, EBKImagePickerInternalData, ALAssetsLibrary, EBKImageService, NSString;

@interface ECPostImageManagerViewController : ECBaseViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, EBKAssetsLibraryViewControllerDelegate> {

	BOOL _collectionViewNeedsReloadWhenViewDidAppear;
	ECPostDataProvider* _dataProvider;
	ECPostImageManagerView* _imageManagerView;
	EBKImagePickerInternalData* _imagePickerInternalData;
	EBKImagePickerInternalData* _imagePickerInternalDataAssetsLibrary;
	ALAssetsLibrary* _assetsLibaryForPhotoSaving;
	EBKImageService* _imageService;
	double _maxLengthImage;
	double _maxImagesCount;

}

@property (nonatomic,retain) ECPostDataProvider * dataProvider;                                              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) ECPostImageManagerView * imageManagerView;                                      //@synthesize imageManagerView=_imageManagerView - In the implementation block
@property (nonatomic,retain) EBKImagePickerInternalData * imagePickerInternalData;                           //@synthesize imagePickerInternalData=_imagePickerInternalData - In the implementation block
@property (nonatomic,retain) EBKImagePickerInternalData * imagePickerInternalDataAssetsLibrary;              //@synthesize imagePickerInternalDataAssetsLibrary=_imagePickerInternalDataAssetsLibrary - In the implementation block
@property (nonatomic,retain) ALAssetsLibrary * assetsLibaryForPhotoSaving;                                   //@synthesize assetsLibaryForPhotoSaving=_assetsLibaryForPhotoSaving - In the implementation block
@property (nonatomic,retain) EBKImageService * imageService;                                                 //@synthesize imageService=_imageService - In the implementation block
@property (assign,nonatomic) double maxLengthImage;                                                          //@synthesize maxLengthImage=_maxLengthImage - In the implementation block
@property (assign,nonatomic) double maxImagesCount;                                                          //@synthesize maxImagesCount=_maxImagesCount - In the implementation block
@property (assign,nonatomic) BOOL collectionViewNeedsReloadWhenViewDidAppear;                                //@synthesize collectionViewNeedsReloadWhenViewDidAppear=_collectionViewNeedsReloadWhenViewDidAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)trackPageView;
-(ECPostImageManagerView *)imageManagerView;
-(void)updateImagePickerInternalData;
-(BOOL)collectionViewNeedsReloadWhenViewDidAppear;
-(void)setCollectionViewNeedsReloadWhenViewDidAppear:(BOOL)arg1 ;
-(void)createCacheDirIfNecessary;
-(void)setImagePickerInternalData:(EBKImagePickerInternalData *)arg1 ;
-(id)imageDirectoryURL;
-(EBKImagePickerInternalData *)imagePickerInternalData;
-(void)setImagePickerInternalDataAssetsLibrary:(EBKImagePickerInternalData *)arg1 ;
-(EBKImagePickerInternalData *)imagePickerInternalDataAssetsLibrary;
-(id)arrayWithoutTemporalAssetFromAdImageArray:(id)arg1 ;
-(void)setImageManagerView:(ECPostImageManagerView *)arg1 ;
-(void)openImagePicker;
-(ALAssetsLibrary *)assetsLibaryForPhotoSaving;
-(void)setAssetsLibaryForPhotoSaving:(ALAssetsLibrary *)arg1 ;
-(EBKImageService *)imageService;
-(double)maxLengthImage;
-(BOOL)isMaxImagesCountReachedForInternalData:(id)arg1 ;
-(void)showMaxImagesCountReachedAlertView;
-(double)maxImagesCount;
-(void)assetsLibraryViewController:(id)arg1 didSelectAsset:(id)arg2 ;
-(void)assetsLibraryViewController:(id)arg1 didDeselectAsset:(id)arg2 ;
-(BOOL)assetsLibraryViewController:(id)arg1 containsAsset:(id)arg2 ;
-(BOOL)assetsLibraryViewController:(id)arg1 shouldSelectAsset:(id)arg2 ;
-(id)assetsLibraryViewController:(id)arg1 overlayImageForSelectedAsset:(id)arg2 ;
-(id)assetsLibraryViewController:(id)arg1 overlayImageForMissingAsset:(id)arg2 ;
-(void)updateOnTabChange:(BOOL)arg1 ;
-(void)setImageService:(EBKImageService *)arg1 ;
-(void)setMaxLengthImage:(double)arg1 ;
-(void)setMaxImagesCount:(double)arg1 ;
-(void)dealloc;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setDataProvider:(ECPostDataProvider *)arg1 ;
-(ECPostDataProvider *)dataProvider;
@end

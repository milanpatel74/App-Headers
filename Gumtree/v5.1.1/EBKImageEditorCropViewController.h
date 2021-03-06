/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/PECropViewController.h>

@class EBKImagePickerInternalDataAsset, EBKImageService, EBKImageFileManager;

@interface EBKImageEditorCropViewController : PECropViewController {

	/*^block*/id _completionBlock;
	EBKImagePickerInternalDataAsset* _dataAsset;
	EBKImageService* _imageService;
	EBKImageFileManager* _imageFileManager;

}

@property (nonatomic,retain) EBKImageService * imageService;                           //@synthesize imageService=_imageService - In the implementation block
@property (nonatomic,retain) EBKImageFileManager * imageFileManager;                   //@synthesize imageFileManager=_imageFileManager - In the implementation block
@property (nonatomic,copy) id completionBlock;                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) EBKImagePickerInternalDataAsset * dataAsset;              //@synthesize dataAsset=_dataAsset - In the implementation block
-(void)setImageService:(EBKImageService *)arg1 ;
-(EBKImageService *)imageService;
-(void)setImageFileManager:(EBKImageFileManager *)arg1 ;
-(EBKImageFileManager *)imageFileManager;
-(EBKImagePickerInternalDataAsset *)dataAsset;
-(void)setDataAsset:(EBKImagePickerInternalDataAsset *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)viewDidLoad;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
@end


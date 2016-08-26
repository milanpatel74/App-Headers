/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPViewController.h>

@protocol SKPMediaDocumentImagePreviewControllerDelegate;
@class UIImage, UIImageView;

@interface SKPMediaDocumentImagePreviewController : SKPViewController {

	id<SKPMediaDocumentImagePreviewControllerDelegate> _delegate;
	UIImage* _image;
	UIImageView* _imagePreview;

}

@property (nonatomic,retain) UIImageView * imagePreview;                                                      //@synthesize imagePreview=_imagePreview - In the implementation block
@property (assign,nonatomic,__weak) id<SKPMediaDocumentImagePreviewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                 //@synthesize image=_image - In the implementation block
-(void)setImagePreview:(UIImageView *)arg1 ;
-(void)didCancelPressed:(id)arg1 ;
-(void)didChoosePressed:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<SKPMediaDocumentImagePreviewControllerDelegate>)arg1 ;
-(id<SKPMediaDocumentImagePreviewControllerDelegate>)delegate;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIImageView *)imagePreview;
@end

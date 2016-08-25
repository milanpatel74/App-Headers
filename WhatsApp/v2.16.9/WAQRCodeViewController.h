/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <WhatsApp/WAForwardPickerViewControllerDelegate.h>

@class UIImage, UIImageView, NSString;

@interface WAQRCodeViewController : WAViewController <WAForwardPickerViewControllerDelegate> {

	UIImage* _image;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerWithImage:(id)arg1 ;
-(id)confirmationButtonTitleForForwardPicker:(id)arg1 ;
-(id)forwardPicker:(id)arg1 confirmationTextForContactInfo:(id)arg2 ;
-(void)shareCodeAction:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

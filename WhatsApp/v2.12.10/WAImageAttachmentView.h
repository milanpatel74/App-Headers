/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol WAImageAttachmentViewDelegate;
@class UIImageView, UIButton, UIImage;

@interface WAImageAttachmentView : UIView {

	UIImageView* _imageView;
	UIButton* _addButton;
	id<WAImageAttachmentViewDelegate> _delegate;
	UIButton* _removeButton;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic,__weak) id<WAImageAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * removeButton;                                      //@synthesize removeButton=_removeButton - In the implementation block
-(void)addImageButtonTapped:(id)arg1 ;
-(void)removeImageButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<WAImageAttachmentViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WAImageAttachmentViewDelegate>)delegate;
-(UIImage *)image;
-(UIButton *)removeButton;
@end


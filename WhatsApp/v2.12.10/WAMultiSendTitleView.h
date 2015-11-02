/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol WAMultiSendTitleViewDelegate;
@class UIButton;

@interface WAMultiSendTitleView : UIView {

	UIButton* _deleteButton;
	UIButton* _rotateButton;
	UIButton* _cropButton;
	BOOL _cropping;
	BOOL _editingButtonsHidden;
	id<WAMultiSendTitleViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WAMultiSendTitleViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCropping,nonatomic) BOOL cropping;                                      //@synthesize cropping=_cropping - In the implementation block
@property (assign,getter=isEditingButtonsHidden,nonatomic) BOOL editingButtonsHidden;              //@synthesize editingButtonsHidden=_editingButtonsHidden - In the implementation block
+(CGSize)preferredSize;
-(BOOL)isCropping;
-(void)setCropping:(BOOL)arg1 ;
-(void)rotateButtonTapped:(id)arg1 ;
-(void)cropButtonTapped:(id)arg1 ;
-(BOOL)isEditingButtonsHidden;
-(void)setEditingButtonsHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAMultiSendTitleViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<WAMultiSendTitleViewDelegate>)delegate;
-(void)deleteButtonTapped:(id)arg1 ;
@end


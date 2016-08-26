/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBInstantShoppingDocumentViewDelegate;
@class UIView, UIButton, FBMemInstantShoppingDocumentButtonElement;

@interface FBInstantShoppingDocumentFooterView : UIView {

	UIView* _topBorderView;
	UIButton* _footerPrimaryButton;
	UIButton* _footerSecondaryButton;
	FBMemInstantShoppingDocumentButtonElement* _primaryButtonElement;
	FBMemInstantShoppingDocumentButtonElement* _secondaryButtonElement;
	BOOL _isSecondaryButtonON;
	id<FBInstantShoppingDocumentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantShoppingDocumentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapPrimaryButton;
-(void)_didTapSecondaryButton;
-(id)_secondaryButtonWithIsOn:(BOOL)arg1 ;
-(void)setFooterButtons:(id)arg1 toggleStatus:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBInstantShoppingDocumentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBInstantShoppingDocumentViewDelegate>)delegate;
-(id)toggleButton;
@end

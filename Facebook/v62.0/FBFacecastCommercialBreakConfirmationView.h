/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBFacecastCommercialBreakConfirmationViewDelegate;
@class UIImageView, UILabel, UIButton;

@interface FBFacecastCommercialBreakConfirmationView : UIView {

	UIImageView* _breakIcon;
	UILabel* _title;
	UILabel* _message;
	UIButton* _cancelButton;
	UIButton* _confirmButton;
	id<FBFacecastCommercialBreakConfirmationViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFacecastCommercialBreakConfirmationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didTapCancelButton:(id)arg1 ;
-(void)didTapConfirmButton:(id)arg1 ;
-(id)initWithCommercialBreakLength:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBFacecastCommercialBreakConfirmationViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBFacecastCommercialBreakConfirmationViewDelegate>)delegate;
@end

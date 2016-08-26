/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface FBAuthContinueAsContentView : UIView {

	double _maximumWidth;
	UILabel* _instructionLabel;
	UIButton* _continueButton;
	UIButton* _declineButton;

}

@property (nonatomic,readonly) UIButton * continueButton;              //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,readonly) UIButton * declineButton;               //@synthesize declineButton=_declineButton - In the implementation block
-(UIButton *)continueButton;
-(id)_makeInstructionLabelWithAttributedString:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 instruction:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)declineButton;
@end

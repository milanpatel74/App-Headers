/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBMediaOverlayButton, UIActivityIndicatorView;

@interface FBFacecastFullSizeEndScreenSaveToCameraRollView : UIView {

	FBMediaOverlayButton* _overlayButton;
	UIActivityIndicatorView* _activityIndicatorView;
	long long _saveState;
	/*^block*/id _buttonTappedBlock;

}

@property (assign,nonatomic) long long saveState;                         //@synthesize saveState=_saveState - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,copy) id buttonTappedBlock;                          //@synthesize buttonTappedBlock=_buttonTappedBlock - In the implementation block
-(void)setSaveState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 saveState:(long long)arg2 ;
-(void)setButtonTappedBlock:(id)arg1 ;
-(void)_overlayButtonTapped;
-(id)buttonTappedBlock;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(long long)saveState;
@end


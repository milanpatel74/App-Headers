/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCrowdsourcingFeatherMultiActionViewDelegate;
@class NSArray, CALayer, UIFont, UIColor;

@interface FBCrowdsourcingFeatherMultiActionView : UIView {

	NSArray* _buttons;
	NSArray* _separatorLayers;
	CALayer* _edgeLayer;
	UIFont* _buttonTitleFont;
	UIColor* _backgroundColor;
	double _height;
	id<FBCrowdsourcingFeatherMultiActionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingFeatherMultiActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_configButtons:(id)arg1 ;
-(void)_configDecorations;
-(void)_didTapButton:(id)arg1 ;
-(id)initWithActionTitles:(id)arg1 buttonTitleFont:(id)arg2 backgroundColor:(id)arg3 height:(double)arg4 delegate:(id)arg5 ;
-(void)setDelegate:(id<FBCrowdsourcingFeatherMultiActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBCrowdsourcingFeatherMultiActionViewDelegate>)delegate;
@end

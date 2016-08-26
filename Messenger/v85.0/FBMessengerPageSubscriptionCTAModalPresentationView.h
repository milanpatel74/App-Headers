/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBNativeArticleOverlayProtocol.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBMessengerPageSubscriptionCTAViewDelegate.h>

@protocol FBMessengerPageSubscriptionCTAModalPresentationViewDelegate;
@class FBMessengerPageSubscriptionCTAView, NSString;

@interface FBMessengerPageSubscriptionCTAModalPresentationView : UIView <FBNativeArticleOverlayProtocol, UIGestureRecognizerDelegate, FBMessengerPageSubscriptionCTAViewDelegate> {

	FBMessengerPageSubscriptionCTAView* _pageSubscriptionCTAView;
	id<FBMessengerPageSubscriptionCTAModalPresentationViewDelegate> _delegate;
	double _sheetHeight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double sheetHeight;                                                                           //@synthesize sheetHeight=_sheetHeight - In the implementation block
@property (assign,nonatomic,__weak) id<FBMessengerPageSubscriptionCTAModalPresentationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithViewModel:(id)arg1 imageDownloader:(id)arg2 ;
-(void)presentPageSubscriptionCTAView;
-(unsigned long long)pageSubscriptionState;
-(void)updateSubscriptionState:(unsigned long long)arg1 ;
-(void)didTapFollowButton:(id)arg1 ;
-(void)setContentVisible:(BOOL)arg1 animationConfig:(SCD_Struct_FB93)arg2 ;
-(void)setVisibilityPercentage:(double)arg1 ;
-(double)_ctaViewHeightThatFits:(CGSize)arg1 ;
-(void)_setSheetHeight:(double)arg1 withAnimationConfig:(SCD_Struct_FB93)arg2 completion:(/*^block*/id)arg3 ;
-(double)sheetHeight;
-(void)setSheetHeight:(double)arg1 ;
-(void)setDelegate:(id<FBMessengerPageSubscriptionCTAModalPresentationViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<FBMessengerPageSubscriptionCTAModalPresentationViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end

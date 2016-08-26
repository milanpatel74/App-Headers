/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBWebViewRightBarButtonItemView.h>

@protocol FBNavigationBarCurrentUserViewDelegate;
@class FBNavigationBarProfileView, FBBouncyPressButton, UIButton, UIView, NSString;

@interface FBNavigationBarCurrentUserView : UIView <FBWebViewRightBarButtonItemView> {

	FBNavigationBarProfileView* _profileView;
	FBBouncyPressButton* _menuButton;
	UIButton* _chatBarButtonItem;
	UIView* _divider;
	BOOL _displayDivebar;
	id<FBNavigationBarCurrentUserViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIButton * menuButton;                                                 //@synthesize menuButton=_menuButton - In the implementation block
@property (assign,nonatomic) BOOL displayDivebar;                                                     //@synthesize displayDivebar=_displayDivebar - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationBarCurrentUserViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayDivebar:(BOOL)arg1 ;
-(BOOL)shouldShowForWebViewControllerPolicyInternal;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 displayDivebar:(BOOL)arg3 ;
-(void)_didTapProfileView:(id)arg1 ;
-(void)_didTapMenuButton:(id)arg1 ;
-(void)_didTapChatButton:(id)arg1 ;
-(double)profileViewAvailableWidth;
-(BOOL)displayDivebar;
-(void)setDelegate:(id<FBNavigationBarCurrentUserViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBNavigationBarCurrentUserViewDelegate>)delegate;
-(void)setName:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setThumbnailURL:(id)arg1 ;
-(UIButton *)menuButton;
@end

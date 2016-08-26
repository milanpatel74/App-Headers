/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNComposerContaining.h>

@class UIView, MNBaseNuxView, NSString;

@interface MNComposeContainerView : UIView <MNComposerContaining> {

	MNBaseNuxView* _actionNuxView;
	UIView* _bannerView;
	UIView* _composeTabBar;
	UIView* _composeView;
	UIView* _composerActionView;
	UIView* _composerPreviewView;
	UIView* _composerSearchBar;
	UIView* _topSeparatorView;
	BOOL _showsBannerView;
	BOOL _showsPreviewView;
	BOOL _composerSearchBarHidden;
	UIView* _contentView;
	UIView* _controlsView;
	long long _layoutMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * composerSearchBar;                                                 //@synthesize composerSearchBar=_composerSearchBar - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                       //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UIView * controlsView;                                               //@synthesize controlsView=_controlsView - In the implementation block
@property (assign,nonatomic) long long layoutMode;                                                       //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,getter=isComposeViewHidden,nonatomic) BOOL composeViewHidden; 
@property (assign,getter=isComposerSearchBarHidden,nonatomic) BOOL composerSearchBarHidden;              //@synthesize composerSearchBarHidden=_composerSearchBarHidden - In the implementation block
-(void)_updateTopSeparatorVisibility;
-(void)setLayoutMode:(long long)arg1 ;
-(BOOL)isComposerSearchBarHidden;
-(BOOL)isComposeViewHidden;
-(void)setComposerSearchBar:(UIView *)arg1 ;
-(void)setComposeViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setControlsView:(UIView *)arg1 ;
-(void)setComposerSearchBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)presentPreview:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPreview:(id)arg1 animated:(BOOL)arg2 ;
-(void)previewDidDismiss;
-(void)presentBannerView:(id)arg1 ;
-(void)dismissBannerView:(id)arg1 ;
-(void)setComposeViewHidden:(BOOL)arg1 ;
-(void)setComposerSearchBarHidden:(BOOL)arg1 ;
-(void)_layoutMainViews;
-(void)_layoutNuxView;
-(void)_layoutSeparatorViews;
-(void)_updateSubviewOrders;
-(double)_previewViewHeightWithMaxSize:(CGSize)arg1 currentHeight:(double)arg2 ;
-(id)presentedNuxView;
-(void)_updatePreviewVisibilityAnimated:(BOOL)arg1 ;
-(UIView *)composerSearchBar;
-(UIView *)controlsView;
-(void)presentActionNuxView:(id)arg1 ;
-(void)dismissActionNuxView:(id)arg1 ;
-(id)initWithComposeView:(id)arg1 composeTabBar:(id)arg2 composerActionView:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(long long)layoutMode;
@end

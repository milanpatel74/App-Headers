/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView, UIImageView, UILabel, TGModernButton, UIScrollView, TGViewController;

@interface TGArchivedStickerPacksAlertView : UIView {

	NSArray* _stickerPacks;
	UIView* _dimView;
	UIImageView* _backgroundView;
	UILabel* _titleLabel;
	TGModernButton* _actionButton;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	UIScrollView* _stickerPacksScrollView;
	NSArray* _stickerPackViews;
	TGViewController* _controller;
	/*^block*/id _dismiss;

}

@property (assign,nonatomic,__weak) TGViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) id dismiss;                                          //@synthesize dismiss=_dismiss - In the implementation block
-(void)animateAppear;
-(void)setDismiss:(id)arg1 ;
-(void)dismissPressed;
-(void)setStickerPacks:(id)arg1 ;
-(void)animateDismiss:(/*^block*/id)arg1 ;
-(void)dimViewTapped:(id)arg1 ;
-(id)dismissImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)backgroundImage;
-(id)dismiss;
-(TGViewController *)controller;
-(void)setController:(TGViewController *)arg1 ;
@end

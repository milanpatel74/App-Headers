/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@interface TGModernConversationAssociatedInputPanel : UIView {

	int _style;
	/*^block*/id _preferredHeightUpdated;
	double _overlayBarOffset;
	double _barInset;
	/*^block*/id _updateOverlayBarOffset;

}

@property (nonatomic,readonly) int style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id preferredHeightUpdated;              //@synthesize preferredHeightUpdated=_preferredHeightUpdated - In the implementation block
@property (assign,nonatomic) double overlayBarOffset;              //@synthesize overlayBarOffset=_overlayBarOffset - In the implementation block
@property (assign,nonatomic) double barInset;                      //@synthesize barInset=_barInset - In the implementation block
@property (nonatomic,copy) id updateOverlayBarOffset;              //@synthesize updateOverlayBarOffset=_updateOverlayBarOffset - In the implementation block
-(id)preferredHeightUpdated;
-(BOOL)displayForTextEntryOnly;
-(void)selectPreviousItem;
-(void)selectNextItem;
-(void)commitSelectedItem;
-(BOOL)fillsAvailableSpace;
-(void)setOverlayBarOffset:(double)arg1 ;
-(id)updateOverlayBarOffset;
-(double)overlayBarOffset;
-(void)animateOut:(/*^block*/id)arg1 ;
-(void)setPreferredHeightUpdated:(id)arg1 ;
-(void)setUpdateOverlayBarOffset:(id)arg1 ;
-(void)setBarInset:(double)arg1 animated:(BOOL)arg2 ;
-(void)setSendAreaWidth:(double)arg1 attachmentAreaWidth:(double)arg2 ;
-(void)setContentAreaHeight:(double)arg1 ;
-(void)setNeedsPreferredHeightUpdate;
-(double)barInset;
-(void)setBarInset:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)style;
-(id)initWithStyle:(int)arg1 ;
-(double)preferredHeight;
-(void)animateIn;
@end

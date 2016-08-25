/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIButton.h>

@protocol BITStoreButtonDelegate;
@class CALayer, BITStoreButtonData;

@interface BITStoreButton : UIButton {

	CALayer* _defaultBorderLayer;
	CALayer* _inActiveBorderLayer;
	id<BITStoreButtonDelegate> _buttonDelegate;
	BITStoreButtonData* _buttonData;
	unsigned long long _style;
	CGPoint _customPadding;

}

@property (assign,nonatomic,__weak) id<BITStoreButtonDelegate> buttonDelegate;              //@synthesize buttonDelegate=_buttonDelegate - In the implementation block
@property (nonatomic,retain) BITStoreButtonData * buttonData;                               //@synthesize buttonData=_buttonData - In the implementation block
@property (assign,nonatomic) CGPoint customPadding;                                         //@synthesize customPadding=_customPadding - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                      //@synthesize style=_style - In the implementation block
-(BITStoreButtonData *)buttonData;
-(void)alignToSuperview;
-(void)setButtonData:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateButtonAnimated:(BOOL)arg1 ;
-(id)initWithPadding:(CGPoint)arg1 style:(unsigned long long)arg2 ;
-(void)setButtonData:(BITStoreButtonData *)arg1 ;
-(id<BITStoreButtonDelegate>)buttonDelegate;
-(void)setButtonDelegate:(id<BITStoreButtonDelegate>)arg1 ;
-(CGPoint)customPadding;
-(void)setCustomPadding:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)buttonPressed:(id)arg1 ;
@end

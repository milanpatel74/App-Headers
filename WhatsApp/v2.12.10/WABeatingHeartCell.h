/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageCell.h>

@class UILabel, UIImageView, UIView;

@interface WABeatingHeartCell : WAMessageCell {

	UILabel* _label;
	BOOL _showListIcon;
	UIImageView* _listIconImageView;
	UIView* _listIconSeparatorView;

}
+(UIEdgeInsets)textInsetsForCellData:(id)arg1 ;
+(id)cellReuseIdentifier;
+(CGSize)contentSizeForCellData:(id)arg1 maxWidth:(double)arg2 ;
-(void)configureCellWithAnimation:(BOOL)arg1 ;
-(BOOL)canPerformCopy;
-(void)performCopy;
-(void)animateHeart;
-(id)listIconImageView;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
@end


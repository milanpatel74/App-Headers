/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECHomeStripeBaseNoItemsView.h>
#import <UIKit/UIAppearance.h>

@class UIImageView, ECHomeItemStripeNoItemsSubTitleLabel, NSString;

@interface ECHomeStripeNoItemsView : ECHomeStripeBaseNoItemsView <UIAppearance> {

	UIImageView* _imageView;
	ECHomeItemStripeNoItemsSubTitleLabel* _subLabel;

}

@property (assign,nonatomic,__weak) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) ECHomeItemStripeNoItemsSubTitleLabel * subLabel;              //@synthesize subLabel=_subLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeFromNib;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(ECHomeItemStripeNoItemsSubTitleLabel *)subLabel;
-(void)setSubLabel:(ECHomeItemStripeNoItemsSubTitleLabel *)arg1 ;
@end

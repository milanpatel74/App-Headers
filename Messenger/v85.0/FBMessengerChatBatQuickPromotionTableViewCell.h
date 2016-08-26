/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol FBMessengerChatBatQuickPromotionTableViewCellDelegate;
@class FBNuxStandardPromotionDivebarView;

@interface FBMessengerChatBatQuickPromotionTableViewCell : UITableViewCell {

	id<FBMessengerChatBatQuickPromotionTableViewCellDelegate> _delegate;
	FBNuxStandardPromotionDivebarView* _promotionView;

}

@property (assign,nonatomic,__weak) id<FBMessengerChatBatQuickPromotionTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBNuxStandardPromotionDivebarView * promotionView;                                      //@synthesize promotionView=_promotionView - In the implementation block
-(void)_didPressPrimaryButton:(id)arg1 ;
-(void)_didPressDismissButton:(id)arg1 ;
-(FBNuxStandardPromotionDivebarView *)promotionView;
-(void)setPromotionView:(FBNuxStandardPromotionDivebarView *)arg1 ;
-(void)setDelegate:(id<FBMessengerChatBatQuickPromotionTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBMessengerChatBatQuickPromotionTableViewCellDelegate>)delegate;
@end

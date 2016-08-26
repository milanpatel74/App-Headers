/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBPaymentsHorizontalSeparatorView;

@interface FBPaymentsCheckoutConfirmationActionTableViewCell : UITableViewCell {

	FBPaymentsHorizontalSeparatorView* _topSeparatorView;
	FBPaymentsHorizontalSeparatorView* _bottomSeparatorView;
	unsigned long long _separatorMask;

}

@property (assign,nonatomic) unsigned long long separatorMask;              //@synthesize separatorMask=_separatorMask - In the implementation block
-(void)configureWithConfirmationAction:(id)arg1 checkoutResponse:(id)arg2 isPrimaryAction:(BOOL)arg3 ;
-(void)setSeparatorMask:(unsigned long long)arg1 ;
-(unsigned long long)separatorMask;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

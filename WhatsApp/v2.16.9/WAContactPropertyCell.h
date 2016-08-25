/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, WAContactProperty;

@interface WAContactPropertyCell : UITableViewCell {

	BOOL _isActionButton;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	id _delegate;
	WAContactProperty* _contactProperty;

}

@property (assign,nonatomic,__weak) id delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WAContactProperty * contactProperty;              //@synthesize contactProperty=_contactProperty - In the implementation block
+(Class)cellClassForWAContactProperty:(id)arg1 ;
+(id)cellForWAContactProperty:(id)arg1 withReuseIdentifier:(id)arg2 ;
+(double)rowHeightForContactProperty:(id)arg1 ;
+(double)rowHeight;
-(void)reconfigure;
-(void)refreshTextColor;
-(void)configureAsAddValueRowForABProperty:(int)arg1 ;
-(void)configureAsDeleteContactRow;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)delegate;
-(void)tintColorDidChange;
-(void)setContactProperty:(WAContactProperty *)arg1 ;
-(WAContactProperty *)contactProperty;
@end

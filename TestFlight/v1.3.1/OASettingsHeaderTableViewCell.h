/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OABaseTableViewCell.h>

@class UIView, OABaseTableViewCellSeparatorView;

@interface OASettingsHeaderTableViewCell : OABaseTableViewCell {

	UIView* _headerView;
	OABaseTableViewCellSeparatorView* _separatorView;

}

@property (nonatomic,retain) UIView * headerView;                                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) OABaseTableViewCellSeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(OABaseTableViewCellSeparatorView *)separatorView;
-(void)setSeparatorView:(OABaseTableViewCellSeparatorView *)arg1 ;
@end


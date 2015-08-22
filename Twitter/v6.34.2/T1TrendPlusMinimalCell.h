/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTableViewCell.h>

@class UILabel, UIImageView;

@interface T1TrendPlusMinimalCell : TFNTableViewCell {

	BOOL _shouldRenderFromRight;
	UILabel* _titleLabel;
	UILabel* _trendDetailsLabel;
	UIImageView* _promotedIconImageView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * trendDetailsLabel;                      //@synthesize trendDetailsLabel=_trendDetailsLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * promotedIconImageView;              //@synthesize promotedIconImageView=_promotedIconImageView - In the implementation block
@property (assign,nonatomic) BOOL shouldRenderFromRight;                         //@synthesize shouldRenderFromRight=_shouldRenderFromRight - In the implementation block
+(double)heightWithTrend:(id)arg1 layoutMetrics:(id)arg2 ;
-(id)calculatedLayoutMetrics;
-(UILabel *)trendDetailsLabel;
-(void)updateWithTrend:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_shouldHidePromoBadgeWithOptions:(unsigned long long)arg1 ;
-(UIImageView *)promotedIconImageView;
-(BOOL)shouldRenderFromRight;
-(void)setShouldRenderFromRight:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
@end

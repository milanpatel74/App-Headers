/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>

@class UILabel, T1NewsImageView;

@interface T1NewsSeamfulHeadlineCell : TFNTableViewCell {

	BOOL _featured;
	UILabel* _headlineLabel;
	UILabel* _sourceLabel;
	UILabel* _attributionLabel;
	T1NewsImageView* _newsImageView;

}

@property (nonatomic,readonly) UILabel * headlineLabel;                      //@synthesize headlineLabel=_headlineLabel - In the implementation block
@property (nonatomic,readonly) UILabel * sourceLabel;                        //@synthesize sourceLabel=_sourceLabel - In the implementation block
@property (nonatomic,readonly) UILabel * attributionLabel;                   //@synthesize attributionLabel=_attributionLabel - In the implementation block
@property (nonatomic,readonly) T1NewsImageView * newsImageView;              //@synthesize newsImageView=_newsImageView - In the implementation block
@property (assign,getter=isFeatured,nonatomic) BOOL featured;                //@synthesize featured=_featured - In the implementation block
-(T1NewsImageView *)newsImageView;
-(UILabel *)headlineLabel;
-(UILabel *)attributionLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 layoutMetrics:(id)arg2 ;
-(UILabel *)sourceLabel;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)cleanup;
-(BOOL)isFeatured;
-(void)setFeatured:(BOOL)arg1 ;
@end

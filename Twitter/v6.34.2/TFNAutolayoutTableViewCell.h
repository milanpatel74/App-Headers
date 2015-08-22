/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTableViewCell.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, UIView, TFNLayoutMetrics, NSLayoutConstraint, NSString;

@interface TFNAutolayoutTableViewCell : TFNTableViewCell <TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;
	UIView* _autolayoutContentView;
	TFNLayoutMetrics* _explicitLayoutMetrics;
	double _preferredMaxLayoutWidth;
	NSLayoutConstraint* _cellWidthConstraint;

}

@property (nonatomic,retain) UIView * autolayoutContentView;                        //@synthesize autolayoutContentView=_autolayoutContentView - In the implementation block
@property (nonatomic,retain) TFNLayoutMetrics * explicitLayoutMetrics;              //@synthesize explicitLayoutMetrics=_explicitLayoutMetrics - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;                        //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cellWidthConstraint;              //@synthesize cellWidthConstraint=_cellWidthConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                           //@synthesize account=_account - In the implementation block
-(id)calculatedLayoutMetrics;
-(void)setExplicitLayoutMetrics:(TFNLayoutMetrics *)arg1 ;
-(TFNLayoutMetrics *)explicitLayoutMetrics;
-(void)setAutolayoutContentView:(UIView *)arg1 ;
-(void)updateCellWidthConstraint;
-(UIView *)autolayoutContentView;
-(NSLayoutConstraint *)cellWidthConstraint;
-(void)setCellWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

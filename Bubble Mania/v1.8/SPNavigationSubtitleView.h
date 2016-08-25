/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SPNavigationSubtitleView : UIView {

	NSString* _title;
	NSString* _subtitle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(void)setupSubViews;
-(CGRect)frameForTitle;
-(CGRect)frameForSubtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(NSString *)subtitle;
-(UILabel *)subtitleLabel;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setIsLoading:(BOOL)arg1 ;
@end

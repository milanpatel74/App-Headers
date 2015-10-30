/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface OAAppListSectionCollectionHeaderView : UICollectionReusableView {

	long long _section;
	UILabel* _titleLabel;
	unsigned long long _count;
	UILabel* _countLabel;

}

@property (assign,nonatomic) long long section;                     //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                  //@synthesize countLabel=_countLabel - In the implementation block
+(double)height;
-(void)resetAccessibility;
-(UILabel *)countLabel;
-(void)setCountLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)count;
-(void)setTitle:(id)arg1 ;
-(long long)section;
-(UILabel *)titleLabel;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setSection:(long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/OAAppDetailBaseTableViewCell.h>

@class NSString, NSURL, UILabel;

@interface OAAppDetailWebsiteLinkTableViewCell : OAAppDetailBaseTableViewCell {

	NSString* _title;
	NSURL* _URL;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)cellWasTapped:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class PTHProgressView, UILabel, NSString;

@interface PTHTweetbotLoadingCell : UITableViewCell {

	PTHProgressView* _progressView;
	UILabel* _textLabel;

}

@property (nonatomic,copy) NSString * text; 
+(double)cellHeightWithItem:(id)arg1 forTableView:(id)arg2 ;
+(id)cellWithText:(id)arg1 ;
+(void)initialize;
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithText:(id)arg1 ;
@end

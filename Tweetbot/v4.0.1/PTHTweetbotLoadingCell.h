/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
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

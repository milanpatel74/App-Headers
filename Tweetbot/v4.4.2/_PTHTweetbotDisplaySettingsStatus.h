/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatus.h>

@class NSDate, PTHTweetbotUser, NSString;

@interface _PTHTweetbotDisplaySettingsStatus : PTHTweetbotStatus {

	NSDate* createdAt;
	PTHTweetbotUser* user;

}

@property (nonatomic,retain) NSDate * createdAt; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) PTHTweetbotUser * user; 
-(PTHTweetbotUser *)user;
-(void)setUser:(PTHTweetbotUser *)arg1 ;
-(NSDate *)createdAt;
-(void)setCreatedAt:(NSDate *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:56:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface SLKWatchSentMessage : NSObject {

	NSString* _teamId;
	NSString* _userId;
	NSString* _message;

}

@property (nonatomic,copy) NSString * teamId;               //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,copy) NSString * userId;               //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
-(NSString *)teamId;
-(void)setTeamId:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
@end

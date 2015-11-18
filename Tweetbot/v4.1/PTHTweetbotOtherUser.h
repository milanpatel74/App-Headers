/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUser.h>

@class NSMutableArray, PTHTweetbotRelationship;

@interface PTHTweetbotOtherUser : PTHTweetbotUser {

	NSMutableArray* _updateRelationshipBlocks;
	PTHTweetbotRelationship* _relationship;

}

@property (nonatomic,readonly) PTHTweetbotRelationship * relationship;              //@synthesize relationship=_relationship - In the implementation block
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 ;
-(id)mentionsCursor;
-(void)reportSpam:(/*^block*/id)arg1 ;
-(void)enableRetweets:(/*^block*/id)arg1 ;
-(void)disableRetweets:(/*^block*/id)arg1 ;
-(void)updateRelationship:(/*^block*/id)arg1 ;
-(void)updateRelationshipIfNeeded:(/*^block*/id)arg1 ;
-(void)block:(/*^block*/id)arg1 ;
-(void)unblock:(/*^block*/id)arg1 ;
-(void)follow:(/*^block*/id)arg1 ;
-(void)unfollow:(/*^block*/id)arg1 ;
-(PTHTweetbotRelationship *)relationship;
-(void)setAccount:(id)arg1 ;
@end

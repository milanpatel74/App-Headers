/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface _PTHTweetbotCountUsersCellUsersView : UIView {

	NSArray* _avatarViews;
	NSArray* _users;

}

@property (nonatomic,copy) NSArray * users;              //@synthesize users=_users - In the implementation block
-(id)avatarViewForUser:(id)arg1 ;
-(CGRect)frameForUser:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)_update:(BOOL)arg1 ;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
@end

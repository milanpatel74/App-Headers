/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECNotification.h>

@class NSString;

@interface ECNotificationChatMessage : ECNotification {

	NSString* _userID;
	NSString* _dialogId;
	NSString* _adId;

}

@property (nonatomic,readonly) NSString * userID;              //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) NSString * dialogId;              //@synthesize dialogId=_dialogId - In the implementation block
@property (nonatomic,copy) NSString * adId;                    //@synthesize adId=_adId - In the implementation block
+(id)sampleAlertNotificationInfoForMessageID:(id)arg1 ;
-(void)executeWithApplication:(id)arg1 andOriginalState:(long long)arg2 ;
-(NSString *)adId;
-(void)setDialogId:(NSString *)arg1 ;
-(void)setAdId:(NSString *)arg1 ;
-(NSString *)dialogId;
-(id)initWithNotification:(id)arg1 ;
-(NSString *)userID;
@end

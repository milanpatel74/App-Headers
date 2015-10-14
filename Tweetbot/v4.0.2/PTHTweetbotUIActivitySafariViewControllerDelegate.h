/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:55 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/SFSafariViewControllerDelegate.h>

@class PTHTweetbotAccount, PTHTweetbotStatus, NSString;

@interface PTHTweetbotUIActivitySafariViewControllerDelegate : NSObject <SFSafariViewControllerDelegate> {

	PTHTweetbotAccount* _account;
	PTHTweetbotStatus* _status;

}

@property (nonatomic,retain) PTHTweetbotAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PTHTweetbotStatus * status;                //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)safariViewController:(id)arg1 activityItemsForURL:(id)arg2 title:(id)arg3 ;
-(PTHTweetbotStatus *)status;
-(void)setStatus:(PTHTweetbotStatus *)arg1 ;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
@end


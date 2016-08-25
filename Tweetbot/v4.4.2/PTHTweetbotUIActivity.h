/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class NSString, NSArray, NSURL, PTHTweetbotStatus, PTHTweetbotAccount, UIViewController;

@interface PTHTweetbotUIActivity : UIActivity {

	NSString* _activityTitle;
	NSArray* _activityItems;
	NSURL* _url;
	PTHTweetbotStatus* _status;
	PTHTweetbotAccount* _account;

}

@property (nonatomic,readonly) NSArray * activityItems;                                      //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) PTHTweetbotStatus * status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) PTHTweetbotAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * currentViewController; 
@property (nonatomic,copy) NSString * activityTitle;                                         //@synthesize activityTitle=_activityTitle - In the implementation block
+(id)activitiesForURL:(id)arg1 status:(id)arg2 account:(id)arg3 ;
+(id)activitiesForStatus:(id)arg1 ;
+(id)_urlActivities;
-(UIViewController *)currentViewController;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(PTHTweetbotStatus *)status;
-(void)setStatus:(PTHTweetbotStatus *)arg1 ;
-(NSArray *)activityItems;
-(void)setActivityTitle:(NSString *)arg1 ;
-(PTHTweetbotAccount *)account;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
@end

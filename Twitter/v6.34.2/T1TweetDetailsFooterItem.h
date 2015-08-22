/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, TFNTwitterPlace;

@interface T1TweetDetailsFooterItem : NSObject {

	NSString* _timeAgo;
	NSString* _accessibilityTimestamp;
	TFNTwitterPlace* _place;
	NSString* _momentID;

}

@property (nonatomic,copy) NSString * timeAgo;                             //@synthesize timeAgo=_timeAgo - In the implementation block
@property (nonatomic,copy) NSString * accessibilityTimestamp;              //@synthesize accessibilityTimestamp=_accessibilityTimestamp - In the implementation block
@property (nonatomic,retain) TFNTwitterPlace * place;                      //@synthesize place=_place - In the implementation block
@property (nonatomic,copy) NSString * momentID;                            //@synthesize momentID=_momentID - In the implementation block
+(id)tfn_defaultDataViewAdapter;
-(NSString *)momentID;
-(void)setTimeAgo:(NSString *)arg1 ;
-(void)setAccessibilityTimestamp:(NSString *)arg1 ;
-(void)setMomentID:(NSString *)arg1 ;
-(NSString *)timeAgo;
-(NSString *)accessibilityTimestamp;
-(void)setPlace:(TFNTwitterPlace *)arg1 ;
-(TFNTwitterPlace *)place;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class CLLocation, PTHTweetbotPlace;

@interface PTHTweetbotGeoSearchCursor : PTHTweetbotCursor {

	int _granularity;
	unsigned long long _maxResults;
	CLLocation* _location;

}

@property (assign,nonatomic) int granularity;                                       //@synthesize granularity=_granularity - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;                         //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotPlace * closestPlace; 
+(Class)itemClass;
-(id)initWithAccount:(id)arg1 location:(id)arg2 ;
-(id)requestURLString;
-(id)itemsArrayFromResponse:(id)arg1 ;
-(PTHTweetbotPlace *)closestPlace;
-(id)queryDictionary;
-(int)granularity;
-(CLLocation *)location;
-(void)setGranularity:(int)arg1 ;
-(id)uniqueID;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(unsigned long long)maxResults;
@end

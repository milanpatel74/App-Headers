/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@interface PTHTweetbotTrendsCursor : PTHTweetbotCursor {

	unsigned long long _woeID;

}

@property (assign,nonatomic) unsigned long long woeID;              //@synthesize woeID=_woeID - In the implementation block
+(Class)itemClass;
-(BOOL)needsSort;
-(unsigned long long)woeID;
-(void)setWoeID:(unsigned long long)arg1 ;
-(id)requestURLString;
-(id)itemsArrayFromResponse:(id)arg1 ;
-(double)loadNewerInterval;
-(id)queryDictionary;
-(BOOL)shouldReload;
@end

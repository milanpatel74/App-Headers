/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, TFNLRUDictionary;

@interface T1CardStateCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	TFNLRUDictionary* _cache;

}

@property (nonatomic,readonly) TFNLRUDictionary * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedCache;
-(id)cardStateForKey:(id)arg1 ;
-(void)setCardState:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(long long)maxSize;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(TFNLRUDictionary *)cache;
-(void)clearCache;
@end

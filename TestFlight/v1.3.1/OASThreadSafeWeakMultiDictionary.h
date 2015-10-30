/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface OASThreadSafeWeakMultiDictionary : NSObject {

	NSMutableDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _dispatch_queue;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;                         //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatch_queue;              //@synthesize dispatch_queue=_dispatch_queue - In the implementation block
-(id)allObjectsForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatch_queue;
-(void)setDispatch_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSMutableDictionary *)dictionary;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GADStatisticDictionaryDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSLock, NSObject;

@interface GADStatisticDictionary : NSObject {

	NSMutableDictionary* _statistics;
	BOOL _allowDictionaryModification;
	BOOL _hasEnqueuedNotificationBlock;
	id<GADStatisticDictionaryDelegate> _delegate;
	NSLock* _delegateLock;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (assign,nonatomic,__weak) id<GADStatisticDictionaryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSLock * delegateLock;                                           //@synthesize delegateLock=_delegateLock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                        //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) BOOL allowDictionaryModification;                                //@synthesize allowDictionaryModification=_allowDictionaryModification - In the implementation block
@property (assign,nonatomic) BOOL hasEnqueuedNotificationBlock;                               //@synthesize hasEnqueuedNotificationBlock=_hasEnqueuedNotificationBlock - In the implementation block
-(void)setObject:(id)arg1 forKey:(id)arg2 shouldNotifyDelegate:(BOOL)arg3 ;
-(void)decrementNumberForKey:(id)arg1 shouldNotifyDelegate:(BOOL)arg2 ;
-(void)didFinishModifying;
-(id)initWithQueueLabel:(const char*)arg1 delegate:(id)arg2 ;
-(void)setAllowDictionaryModification:(BOOL)arg1 ;
-(void)setHasEnqueuedNotificationBlock:(BOOL)arg1 ;
-(BOOL)allowDictionaryModification;
-(BOOL)hasEnqueuedNotificationBlock;
-(void)enqueueNotificationBlock;
-(void)dispatchAsyncShouldNotifyDelegate:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)addDecimalNumber:(id)arg1 toNumberForKey:(id)arg2 shouldNotifyDelegate:(BOOL)arg3 ;
-(void)incrementNumberForKey:(id)arg1 shouldNotifyDelegate:(BOOL)arg2 ;
-(void)addObject:(id)arg1 toArrayWithKey:(id)arg2 shouldNotifyDelegate:(BOOL)arg3 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<GADStatisticDictionaryDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<GADStatisticDictionaryDelegate>)delegate;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)dictionary;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)initWithDelegate:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(NSLock *)delegateLock;
-(void)setDelegateLock:(NSLock *)arg1 ;
@end

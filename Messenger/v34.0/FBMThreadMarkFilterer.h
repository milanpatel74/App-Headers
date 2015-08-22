/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMThreadMarking.h>

@protocol FBMThreadMarkRunning, OS_dispatch_queue;
@class NSObject, FBMReadMarkCache, NSHashTable, FBMThreadMarkRunJobListenerFactory, NSString;

@interface FBMThreadMarkFilterer : NSObject <FBMThreadMarking> {

	id<FBMThreadMarkRunning> _markRunner;
	NSObject*<OS_dispatch_queue> _queue;
	FBMReadMarkCache* _optimisticCache;
	FBMReadMarkCache* _savedCache;
	NSHashTable* _jobListeners;
	FBMThreadMarkRunJobListenerFactory* _markJobListenerFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_trackAndRunMarkJobForThreadWithKey:(id)arg1 action:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_markThreadUnread:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_markReadForThreadWithKeyIfNecessary:(id)arg1 readInfoUpdate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)markThreadWithKey:(id)arg1 action:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithMarkRunner:(id)arg1 optimisticCache:(id)arg2 savedCache:(id)arg3 markJobListenerFactory:(id)arg4 queue:(id)arg5 ;
-(void)didCompleteMarkAction:(id)arg1 forThreadKey:(id)arg2 jobListener:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(void)didFailMarkAction:(id)arg1 forThreadKey:(id)arg2 error:(id)arg3 jobListener:(id)arg4 completeBlock:(/*^block*/id)arg5 ;
@end

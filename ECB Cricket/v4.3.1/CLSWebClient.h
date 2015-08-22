/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CLSPersistenceCacheDelegate;
#import <ECBCricketApp/ECBCricketApp-Structs.h>
@class NSURL, NSMutableSet, NSMutableDictionary;

@interface CLSWebClient : NSObject {

	NSURL* _url;
	NSMutableSet* _connections;
	dispatch_queue_sRef _queue;
	NSMutableDictionary* _customHeaders;
	id<CLSPersistenceCacheDelegate> _cacheDelegate;

}

@property (nonatomic,retain,readonly) NSURL * URL;                                       //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) id<CLSPersistenceCacheDelegate> cacheDelegate;              //@synthesize cacheDelegate=_cacheDelegate - In the implementation block
+(id)escapeURLString:(id)arg1 ;
+(id)decodeJSON:(id)arg1 ;
+(id)encodeJSON:(id)arg1 ;
-(void)addValue:(id)arg1 forHeader:(id)arg2 ;
-(void)startRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncStartRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startRequest:(id)arg1 expectingResponse:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncStartRequest:(id)arg1 expectingResponse:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)getPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)postFormData:(id)arg1 toPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<CLSPersistenceCacheDelegate>)cacheDelegate;
-(void)setCacheDelegate:(id<CLSPersistenceCacheDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
@end

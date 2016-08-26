/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSpotlightImageCaching.h>

@protocol OS_dispatch_queue;
@class FBCache, FBDiskCache, NSObject, NSString;

@interface MNSpotlightImageCache : NSObject <MNSpotlightImageCaching> {

	FBCache* _cache;
	FBDiskCache* _diskCache;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)imageForGroupThreadWithParticipants:(id)arg1 callbackQueue:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)setImage:(id)arg1 forGroupThreadWithParticipants:(id)arg2 ;
-(void)_loadImageFromDiskCacheWithKey:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_loadImageFromInMemoryCacheWithKey:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_setImage:(id)arg1 forKey:(id)arg2 writeToDiskCache:(BOOL)arg3 ;
@end

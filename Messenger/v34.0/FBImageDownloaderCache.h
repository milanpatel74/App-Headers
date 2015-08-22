/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBImageDownloaderCacheInternal.h>
#import <Messenger/FBImageDownloaderCache.h>

@protocol FBImageDownloaderCache <NSObject>
@required
-(unsigned long long)inMemoryCacheLimit;
-(void)fetchCachedImageForURL:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)cacheImage:(id)arg1 serializedImage:(id)arg2 forURL:(id)arg3 cacheType:(unsigned long long)arg4 callbackQueue:(id)arg5 completionBlock:(/*^block*/id)arg6;
-(SCD_Struct_FB163*)cacheStatistics;
-(void)clear:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue;
@class FBImageDownloaderFastPathCache, FBCache, FBDiskCache, NSObject, NSString;

@interface FBImageDownloaderCache : NSObject <FBImageDownloaderCacheInternal, FBImageDownloaderCache> {

	FBImageDownloaderFastPathCache* _fastPathCache;
	FBCache* _memoryCache;
	FBDiskCache* _diskCache;
	NSObject*<OS_dispatch_queue> _internalQueue;
	/*function pointer*/void* _memoryCacheKeyBuilder;
	/*function pointer*/void* _diskCacheKeyBuilder;
	SCD_Struct_FB164 _cacheStats;
	/*^block*/id _cachedResultFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diskCache;
-(id)initWithDiskCache:(id)arg1 memoryCache:(id)arg2 cachedResultFactory:(/*^block*/id)arg3 ;
-(unsigned long long)inMemoryCacheLimit;
-(id)fastPathCache;
-(void)updateCacheStatForType:(unsigned long long)arg1 ;
-(void)fetchCachedImageForURL:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)memoryCache;
-(void)cacheImage:(id)arg1 serializedImage:(id)arg2 forURL:(id)arg3 cacheType:(unsigned long long)arg4 callbackQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(SCD_Struct_FB164)cacheStatistics;
-(void)resetCacheStatistics;
-(id)initWithDiskCache:(id)arg1 memoryCache:(id)arg2 memoryCacheKeyBuilder:(/*function pointer*/void*)arg3 diskCacheKeyBuilder:(/*function pointer*/void*)arg4 cachedResultFactory:(/*^block*/id)arg5 ;
-(BOOL)_fetchInMemoryCachedImageForURL:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_fetchCachedImageFinishedForURL:(id)arg1 cachedImage:(id)arg2 partialData:(id)arg3 memoryCacheKey:(id)arg4 cacheType:(unsigned long long)arg5 callbackQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_dispatchBlockOnCallbackQueueWithImage:(id)arg1 partialData:(id)arg2 cacheType:(unsigned long long)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_cacheImage:(id)arg1 serializedImage:(id)arg2 forURL:(id)arg3 memoryCacheKey:(id)arg4 cacheType:(unsigned long long)arg5 callbackQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)updateLastAccessDateForURL:(id)arg1 ;
-(void)clear:(/*^block*/id)arg1 ;
@end

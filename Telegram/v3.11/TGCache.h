/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface TGCache : NSObject {

	opaque_pthread_mutex_t TG_SYNCHRONIZED__dataMemoryCache;
	int _imageMemoryLimit;
	int _imageMemoryEvictionInterval;
	int _thumbnailMemoryLimit;
	int _thumbnailEvictionInterval;
	int _thumbnailBackgroundBaseline;
	int _dataMemoryLimit;
	int _dataMemoryEvictionInterval;
	int _memoryWarningBaseline;
	int _backgroundBaseline;
	int _diskLimit;
	int _diskEvictionInterval;
	int _memoryCacheSize1;
	int _thumbnailCacheSize;
	int _dataMemoryCacheSize;
	NSString* _diskCachePath;
	NSMutableArray* _temporaryCachedImagesSources;
	NSMutableDictionary* _memoryCache;
	NSMutableDictionary* _thumbnailCache;
	NSMutableDictionary* _dataMemoryCache;

}

@property (nonatomic,retain) NSMutableArray * temporaryCachedImagesSources;              //@synthesize temporaryCachedImagesSources=_temporaryCachedImagesSources - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memoryCache;                          //@synthesize memoryCache=_memoryCache - In the implementation block
@property (assign,nonatomic) int memoryCacheSize1;                                       //@synthesize memoryCacheSize1=_memoryCacheSize1 - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * thumbnailCache;                       //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
@property (assign,nonatomic) int thumbnailCacheSize;                                     //@synthesize thumbnailCacheSize=_thumbnailCacheSize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dataMemoryCache;                      //@synthesize dataMemoryCache=_dataMemoryCache - In the implementation block
@property (assign,nonatomic) int dataMemoryCacheSize;                                    //@synthesize dataMemoryCacheSize=_dataMemoryCacheSize - In the implementation block
@property (assign,nonatomic) int imageMemoryLimit;                                       //@synthesize imageMemoryLimit=_imageMemoryLimit - In the implementation block
@property (assign,nonatomic) int imageMemoryEvictionInterval;                            //@synthesize imageMemoryEvictionInterval=_imageMemoryEvictionInterval - In the implementation block
@property (assign,nonatomic) int thumbnailMemoryLimit;                                   //@synthesize thumbnailMemoryLimit=_thumbnailMemoryLimit - In the implementation block
@property (assign,nonatomic) int thumbnailEvictionInterval;                              //@synthesize thumbnailEvictionInterval=_thumbnailEvictionInterval - In the implementation block
@property (assign,nonatomic) int thumbnailBackgroundBaseline;                            //@synthesize thumbnailBackgroundBaseline=_thumbnailBackgroundBaseline - In the implementation block
@property (assign,nonatomic) int dataMemoryLimit;                                        //@synthesize dataMemoryLimit=_dataMemoryLimit - In the implementation block
@property (assign,nonatomic) int dataMemoryEvictionInterval;                             //@synthesize dataMemoryEvictionInterval=_dataMemoryEvictionInterval - In the implementation block
@property (assign,nonatomic) int memoryWarningBaseline;                                  //@synthesize memoryWarningBaseline=_memoryWarningBaseline - In the implementation block
@property (assign,nonatomic) int backgroundBaseline;                                     //@synthesize backgroundBaseline=_backgroundBaseline - In the implementation block
@property (assign,nonatomic) int diskLimit;                                              //@synthesize diskLimit=_diskLimit - In the implementation block
@property (assign,nonatomic) int diskEvictionInterval;                                   //@synthesize diskEvictionInterval=_diskEvictionInterval - In the implementation block
@property (nonatomic,readonly) NSString * diskCachePath;                                 //@synthesize diskCachePath=_diskCachePath - In the implementation block
+(id)diskCacheQueue;
+(id)diskFileManager;
-(void)cacheImage:(id)arg1 withData:(id)arg2 url:(id)arg3 availability:(int)arg4 ;
-(id)pathForCachedData:(id)arg1 ;
-(void)removeFromDiskCache:(id)arg1 ;
-(void)diskCacheContains:(id)arg1 orUrl:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)cachedImage:(id)arg1 availability:(int)arg2 ;
-(void)cacheThumbnail:(id)arg1 url:(id)arg2 ;
-(void)removeFromMemoryCache:(id)arg1 matchEnd:(BOOL)arg2 ;
-(void)setMemoryCacheSize:(int)arg1 ;
-(void)freeMemoryCache:(unsigned long long)arg1 ;
-(void)removeTemporaryCachedImageSource:(id)arg1 ;
-(int)memoryCacheSize;
-(void)freeCompressedMemoryCache:(unsigned long long)arg1 reentrant:(BOOL)arg2 ;
-(void)cacheImage:(id)arg1 withData:(id)arg2 url:(id)arg3 availability:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)cacheCompressedObject:(id)arg1 url:(id)arg2 reentrant:(BOOL)arg3 ;
-(id)cachedThumbnail:(id)arg1 ;
-(void)freeThumbnailCache:(unsigned long long)arg1 ;
-(void)addTemporaryCachedImagesSource:(id)arg1 autoremove:(BOOL)arg2 ;
-(BOOL)diskCacheContainsSync:(id)arg1 ;
-(void)changeCacheItemUrl:(id)arg1 newUrl:(id)arg2 ;
-(void)moveToCache:(id)arg1 cacheUrl:(id)arg2 ;
-(id)storeMemoryCache;
-(void)restoreMemoryCache:(id)arg1 ;
-(int)imageMemoryLimit;
-(void)setImageMemoryLimit:(int)arg1 ;
-(int)imageMemoryEvictionInterval;
-(void)setImageMemoryEvictionInterval:(int)arg1 ;
-(int)thumbnailMemoryLimit;
-(void)setThumbnailMemoryLimit:(int)arg1 ;
-(int)thumbnailEvictionInterval;
-(void)setThumbnailEvictionInterval:(int)arg1 ;
-(int)thumbnailBackgroundBaseline;
-(void)setThumbnailBackgroundBaseline:(int)arg1 ;
-(int)dataMemoryLimit;
-(void)setDataMemoryLimit:(int)arg1 ;
-(int)dataMemoryEvictionInterval;
-(void)setDataMemoryEvictionInterval:(int)arg1 ;
-(int)memoryWarningBaseline;
-(void)setMemoryWarningBaseline:(int)arg1 ;
-(int)backgroundBaseline;
-(void)setBackgroundBaseline:(int)arg1 ;
-(int)diskLimit;
-(void)setDiskLimit:(int)arg1 ;
-(int)diskEvictionInterval;
-(void)setDiskEvictionInterval:(int)arg1 ;
-(NSString *)diskCachePath;
-(NSMutableArray *)temporaryCachedImagesSources;
-(void)setTemporaryCachedImagesSources:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)memoryCache;
-(void)setMemoryCache:(NSMutableDictionary *)arg1 ;
-(int)memoryCacheSize1;
-(void)setMemoryCacheSize1:(int)arg1 ;
-(int)thumbnailCacheSize;
-(void)setThumbnailCacheSize:(int)arg1 ;
-(NSMutableDictionary *)dataMemoryCache;
-(void)setDataMemoryCache:(NSMutableDictionary *)arg1 ;
-(int)dataMemoryCacheSize;
-(void)setDataMemoryCacheSize:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(NSMutableDictionary *)thumbnailCache;
-(void)setThumbnailCache:(NSMutableDictionary *)arg1 ;
-(void)clearCache:(int)arg1 ;
@end


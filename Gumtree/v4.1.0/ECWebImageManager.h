/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class SDImageCache, SDWebImageDownloader, NSMutableArray;

@interface ECWebImageManager : NSObject {

	SDImageCache* _imageCache;
	SDWebImageDownloader* _imageDownloader;
	/*^block*/id _cacheKeyFilter;
	NSMutableArray* _failedURLs;
	NSMutableArray* _runningOperations;

}

@property (nonatomic,retain) SDImageCache * imageCache;                           //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) SDWebImageDownloader * imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,copy) id cacheKeyFilter;                                     //@synthesize cacheKeyFilter=_cacheKeyFilter - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedURLs;                         //@synthesize failedURLs=_failedURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * runningOperations;                  //@synthesize runningOperations=_runningOperations - In the implementation block
+(id)sharedManager;
-(id)cacheKeyForURL:(id)arg1 ;
-(id)cacheKeyFilter;
-(NSMutableArray *)failedURLs;
-(NSMutableArray *)runningOperations;
-(SDWebImageDownloader *)imageDownloader;
-(BOOL)cachedImageExistsForURL:(id)arg1 ;
-(BOOL)diskImageExistsForURL:(id)arg1 ;
-(void)cachedImageExistsForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diskImageExistsForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveImageToCache:(id)arg1 forURL:(id)arg2 ;
-(void)setImageDownloader:(SDWebImageDownloader *)arg1 ;
-(void)setCacheKeyFilter:(id)arg1 ;
-(void)setFailedURLs:(NSMutableArray *)arg1 ;
-(void)setRunningOperations:(NSMutableArray *)arg1 ;
-(id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(/*^block*/id)arg3 transform:(/*^block*/id)arg4 completed:(/*^block*/id)arg5 ;
-(SDImageCache *)imageCache;
-(void)setImageCache:(SDImageCache *)arg1 ;
-(id)init;
-(BOOL)isRunning;
-(void)cancelAll;
@end

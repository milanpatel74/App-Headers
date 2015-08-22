/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNCDNAssetDownloading.h>
#import <Messenger/MNCDNAssetDownloadRunnerRetrying.h>

@protocol OS_dispatch_queue;
@class NSObject, MNCDNAssetURLResolver, MNCDNAssetURLCache, MNCDNAssetDownloadTracker, FBAnalytics, NSString;

@interface MNCDNAssetDownloader : NSObject <MNCDNAssetDownloading, MNCDNAssetDownloadRunnerRetrying> {

	NSObject*<OS_dispatch_queue> _queue;
	MNCDNAssetURLResolver* _urlResolver;
	MNCDNAssetURLCache* _urlCache;
	MNCDNAssetDownloadTracker* _downloadTracker;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_assetDownloadRunner:(id)arg1 downloadAssetAtURL:(id)arg2 withDownloadId:(long long)arg3 ;
-(void)_failedToInitiallyResolveURLForDownloadId:(long long)arg1 withError:(id)arg2 ;
-(BOOL)_shouldAssetDownloadRunnerRetryAfterError:(id)arg1 forDownloadId:(long long)arg2 ;
-(void)_handleShouldAssetDownloadRunnerRetryForDownloadId:(long long)arg1 shouldRetry:(BOOL)arg2 forError:(id)arg3 retryBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)_retryAssetDownloadForDownloadId:(long long)arg1 retryBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_assetDownloadFailedForDownloadId:(long long)arg1 withFailureBlock:(/*^block*/id)arg2 error:(id)arg3 ;
-(void)downloadAssetWithIdentifier:(id)arg1 withDownloadRunner:(id)arg2 downloadId:(long long)arg3 ;
-(void)cancelDownloadForAssetDownloadId:(long long)arg1 ;
-(void)assetDownloadRunner:(id)arg1 didFailWithError:(id)arg2 whileDownloadingAssetWithDownloadId:(long long)arg3 retryBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)assetDownloadRunner:(id)arg1 didDownloadAssetWithDownloadId:(long long)arg2 ;
-(id)initWithURLResolver:(id)arg1 URLCache:(id)arg2 assetDownloadTracker:(id)arg3 queue:(id)arg4 analytics:(id)arg5 ;
@end

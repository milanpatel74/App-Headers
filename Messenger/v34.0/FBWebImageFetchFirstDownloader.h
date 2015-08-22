/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebImageDownloader.h>

@protocol FBWebImageDownloader, FBWebImageNetworkFetchFirstSpecifier;
@class FBImageDownloader, NSString;

@interface FBWebImageFetchFirstDownloader : NSObject <FBWebImageDownloader> {

	id _cacheLookupID;
	id<FBWebImageDownloader> _webImageDownloader;
	FBImageDownloader* _downloader;
	id<FBWebImageNetworkFetchFirstSpecifier> _specifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebImageDownloader:(id)arg1 downloader:(id)arg2 ;
-(void)_handleDownloadCompletionForSpecifier:(id)arg1 url:(id)arg2 image:(CGImageRef)arg3 scenePath:(id)arg4 callPath:(id)arg5 downloadBlock:(/*^block*/id)arg6 ;
-(void)_cancelCacheLookup;
-(void)_cancelDownloadsForNewSpecifier:(id)arg1 ;
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 callPath:(id)arg3 downloadBlock:(/*^block*/id)arg4 ;
-(void)cancel;
@end

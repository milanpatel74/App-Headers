/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, MNPhotoImageCache, MNPhotoImageUploadCandidateStore, MNAdaptiveImageDownloader, FBAnalytics, MNCDNPhotoDownloader;

@interface MNPhotoImageRequester : NSObject {

	FBUserSession* _userSession;
	MNPhotoImageCache* _imageCache;
	MNPhotoImageUploadCandidateStore* _imageUploadCandidateStore;
	MNAdaptiveImageDownloader* _adaptiveImageDownloader;
	FBAnalytics* _analytics;
	MNCDNPhotoDownloader* _cdnPhotoDownloader;

}
-(id)fetchPhotoImageFromPlainPhotoSource:(id)arg1 size:(int)arg2 imageFlags:(unsigned long long)arg3 callPath:(id)arg4 queue:(id)arg5 success:(/*^block*/id)arg6 failure:(/*^block*/id)arg7 ;
-(id)initWithUserSession:(id)arg1 imageCache:(id)arg2 uploadCandidateStore:(id)arg3 adaptiveImageDownloader:(id)arg4 analytics:(id)arg5 cdnPhotoDownloader:(id)arg6 ;
-(void)_cancelImageDownloadWithImageRequest:(id)arg1 ;
-(BOOL)_performImageCacheWithRequest:(id)arg1 photoSource:(id)arg2 callbackQueue:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(BOOL)_tryLoadImageFromUploadCandidateStoreWithPlainPhotoSource:(id)arg1 size:(int)arg2 queue:(id)arg3 success:(/*^block*/id)arg4 fallback:(/*^block*/id)arg5 ;
-(id)_downloadImageFromCDNDownloaderWithImageRequest:(id)arg1 photoId:(id)arg2 photoSource:(id)arg3 queue:(id)arg4 success:(/*^block*/id)arg5 failure:(/*^block*/id)arg6 ;
-(id)_downloadImageWithImageRequest:(id)arg1 photoSource:(id)arg2 queue:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)cancelRequest:(id)arg1 ;
@end

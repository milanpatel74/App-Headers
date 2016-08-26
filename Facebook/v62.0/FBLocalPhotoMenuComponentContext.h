/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKNetworkImageDownloading;
@class FBScenePath;

@interface FBLocalPhotoMenuComponentContext : NSObject {

	id<CKNetworkImageDownloading> _imageDownloader;
	FBScenePath* _scenePath;

}

@property (nonatomic,readonly) id<CKNetworkImageDownloading> imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                    //@synthesize scenePath=_scenePath - In the implementation block
-(FBScenePath *)scenePath;
-(id<CKNetworkImageDownloading>)imageDownloader;
-(id)initWithImageDownloader:(id)arg1 scenePath:(id)arg2 ;
@end

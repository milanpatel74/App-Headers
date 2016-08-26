/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSData, NSURL, ALAssetsLibrary;

@interface SKPMediaDocumentGalleryExporter : NSObject {

	unsigned long long _errorMode;
	UIImage* _image;
	NSData* _imageData;
	NSURL* _videoURL;
	ALAssetsLibrary* _assetsLibrary;

}

@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSData * imageData;                           //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                             //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) ALAssetsLibrary * assetsLibrary;              //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long errorMode;                 //@synthesize errorMode=_errorMode - In the implementation block
-(id)initWithImageData:(id)arg1 ;
-(void)setErrorMode:(unsigned long long)arg1 ;
-(void)exportToCameraRollWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)presentErrorMessageOnScreenIfNeeded:(id)arg1 ;
-(unsigned long long)errorMode;
-(BOOL)isFirstTimeError;
-(void)showExportError:(id)arg1 ;
-(void)addAssetWithURL:(id)arg1 toAlbum:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addAssetWithUrl:(id)arg1 toAssetsGroup:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)exportToAlbum:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)exportToSkypeAlbumWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
-(void)setImageData:(NSData *)arg1 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(ALAssetsLibrary *)assetsLibrary;
-(id)initWithVideoURL:(id)arg1 ;
-(NSData *)imageData;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
@end

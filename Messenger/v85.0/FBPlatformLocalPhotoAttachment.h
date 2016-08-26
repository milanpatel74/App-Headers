/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformPhotoAttachment.h>

@class NSURL, UIImage;

@interface FBPlatformLocalPhotoAttachment : FBPlatformPhotoAttachment {

	NSURL* _temporaryImageFileName;
	UIImage* _displayImage;
	UIImage* _imageBeingWritten;

}

@property (nonatomic,retain) UIImage * imageBeingWritten;              //@synthesize imageBeingWritten=_imageBeingWritten - In the implementation block
-(void)loadImageDataForUploadWithCompressionRate:(double)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 loggingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)requiresUpload;
-(id)existingFBID;
-(id)nameOfServerAssetIDFieldOverridingFileURL;
-(void)setDisplayImage:(id)arg1 ;
-(id)initWithAssetID:(id)arg1 image:(id)arg2 platformPhotoMetadata:(id)arg3 ;
-(void)_writeToTemporaryFile:(id)arg1 ;
-(void)setImageBeingWritten:(UIImage *)arg1 ;
-(UIImage *)imageBeingWritten;
-(id)description;
-(id)displayImage;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNQuickPromotionImageDownloaderDelegate;
@class FBImageDownloader;

@interface MNQuickPromotionImageDownloader : NSObject {

	FBImageDownloader* _imageDownloader;
	id<MNQuickPromotionImageDownloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNQuickPromotionImageDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithImageDownloader:(id)arg1 ;
-(void)downloadImageWithURL:(id)arg1 ;
-(void)setDelegate:(id<MNQuickPromotionImageDownloaderDelegate>)arg1 ;
-(id<MNQuickPromotionImageDownloaderDelegate>)delegate;
@end

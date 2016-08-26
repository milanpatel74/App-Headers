/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPlaceMenuDownloaderDelegate;
@class FBUserSession, NSString;

@interface FBPlaceMenuDownloader : NSObject {

	FBUserSession* _session;
	NSString* _pageId;
	id<FBPlaceMenuDownloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPlaceMenuDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleFailure:(id)arg1 ;
-(id)initWithSession:(id)arg1 pageId:(id)arg2 ;
-(void)_handleSuccess:(id)arg1 ;
-(void)startFetchingMenuAndFoodPhotos;
-(void)setDelegate:(id<FBPlaceMenuDownloaderDelegate>)arg1 ;
-(id<FBPlaceMenuDownloaderDelegate>)delegate;
@end

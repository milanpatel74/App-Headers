/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBResponseHandling.h>

@protocol FBImageDownloaderCache, FBRequest, FBResponseHandlerDelegate, FBStreamingImageResponseHandlerDelegate;
@class FBProgressiveJPEG, NSURL, NSData, NSString;

@interface FBStreamingImageResponseHandler : NSObject <FBResponseHandling> {

	id<FBImageDownloaderCache> _imageCache;
	FBProgressiveJPEG* _jpeg;
	NSURL* _url;
	NSData* _partialData;
	long long _contentLength;
	BOOL _reachedLastImageFlag;
	BOOL _needCachePartialData;
	BOOL _sentFinalResponse;
	id<FBRequest> _request;
	id<FBResponseHandlerDelegate> _delegate;
	id<FBStreamingImageResponseHandlerDelegate> _streamingDelegate;

}

@property (assign,nonatomic,__weak) id<FBStreamingImageResponseHandlerDelegate> streamingDelegate;              //@synthesize streamingDelegate=_streamingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                                                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseHandlerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
+(id)copyImageWithNewImageFlag:(id)arg1 imageFlag:(unsigned long long)arg2 lastImageFlag:(BOOL)arg3 ;
+(id)getBestImageForPartialData:(id)arg1 desiredFlag:(unsigned long long)arg2 ;
-(void)cachePartialDataIfNeeded;
-(id)initWithRequest:(id)arg1 url:(id)arg2 partialData:(id)arg3 contentLength:(long long)arg4 imageCache:(id)arg5 ;
-(id<FBStreamingImageResponseHandlerDelegate>)streamingDelegate;
-(void)setStreamingDelegate:(id<FBStreamingImageResponseHandlerDelegate>)arg1 ;
-(void)setDelegate:(id<FBResponseHandlerDelegate>)arg1 ;
-(id<FBResponseHandlerDelegate>)delegate;
-(id<FBRequest>)request;
-(void)close;
-(void)open;
-(void)handleData:(id)arg1 ;
-(void)abort;
@end

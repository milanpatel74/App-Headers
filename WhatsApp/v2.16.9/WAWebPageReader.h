/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class WAWebPageTask, NSMutableOrderedSet, NSURLSession, WAFieldStatsEventIphoneLinkMetadataFetch, NSURL, NSString;

@interface WAWebPageReader : NSObject <NSURLSessionDataDelegate> {

	/*^block*/id _handler;
	WAWebPageTask* _headerFetchTask;
	WAWebPageTask* _imageFetchTask;
	WAWebPageTask* _currentTask;
	long long _handlerInvocationCount;
	long long _imageFetchRetryCount;
	NSMutableOrderedSet* _stringEncodings;
	NSURLSession* _session;
	WAFieldStatsEventIphoneLinkMetadataFetch* _fieldStatsEvent;
	NSURL* _webURL;
	CGSize _preferredImageSize;

}

@property (nonatomic,readonly) NSURL * webURL;                       //@synthesize webURL=_webURL - In the implementation block
@property (assign,nonatomic) CGSize preferredImageSize;              //@synthesize preferredImageSize=_preferredImageSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)URLRequestWithURL:(id)arg1 timeout:(double)arg2 contentRange:(NSRange)arg3 ;
+(BOOL)stringEncoding:(out unsigned long long*)arg1 fromByteOrderMarkingInData:(id)arg2 ;
+(id)stringFromData:(id)arg1 withSuggestedEncodings:(id)arg2 usedEncoding:(out unsigned long long*)arg3 failedSuggestedEncodings:(out id*)arg4 ;
+(unsigned long long)stringEncodingFromCharset:(id)arg1 ;
+(id)URLRequestWithURL:(id)arg1 timeout:(double)arg2 ;
+(long long)contentSizeFromContentRange:(id)arg1 ;
+(void)initialize;
-(void)setPreferredImageSize:(CGSize)arg1 ;
-(void)recordFieldStatsUsingReceivedHtml:(id)arg1 withEncoding:(unsigned long long)arg2 endOfHeaderRange:(NSRange)arg3 ;
-(void)parseHTML:(id)arg1 fromURL:(id)arg2 rawData:(id)arg3 assumedEncoding:(unsigned long long)arg4 reinterpretDataIfNeeded:(BOOL)arg5 ;
-(void)completeReadingWithMetadata:(id)arg1 ;
-(void)fetchImageInMetadata:(id)arg1 ;
-(void)recordFieldStatsImageSizeLimitReached;
-(void)imageDownloadFinishedWithImage:(id)arg1 forMetadata:(id)arg2 ;
-(id)webPageTaskFromDataTask:(id)arg1 ;
-(void)handleErrorDownloadingImage:(id)arg1 ;
-(void)handleImageData:(id)arg1 ;
-(void)handleHtmlData:(id)arg1 ;
-(void)recordFieldStatsPartialResponseReceivedForWebPageTask:(id)arg1 ;
-(BOOL)shouldCancelImageFetchTaskContentTooLargeUsingResponse:(id)arg1 ;
-(BOOL)shouldIgnoreResponseForTask:(id)arg1 ;
-(void)failWithError:(id)arg1 forTask:(id)arg2 ;
-(void)doneDownloadingHtml;
-(void)doneDownloadingImage;
-(void)loadMetadataWithResultHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(id)initWithURL:(id)arg1 ;
-(void)cleanUp;
-(NSURL *)webURL;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(CGSize)preferredImageSize;
@end

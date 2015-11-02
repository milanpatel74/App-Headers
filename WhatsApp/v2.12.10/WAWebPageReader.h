/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSURLSessionDataTask, NSURL;

@interface WAWebPageReader : NSObject {

	/*^block*/id _handler;
	double _startTime;
	NSURLSessionDataTask* _currentDataTask;
	BOOL _invalidated;
	long long _handlerInvocationCount;
	long long _imageFetchRetryCount;
	double _htmlFetchTimeout;
	double _imageFetchTimeout;
	NSURL* _webURL;
	CGSize _preferredImageSize;

}

@property (assign,nonatomic) double htmlFetchTimeout;                //@synthesize htmlFetchTimeout=_htmlFetchTimeout - In the implementation block
@property (assign,nonatomic) double imageFetchTimeout;               //@synthesize imageFetchTimeout=_imageFetchTimeout - In the implementation block
@property (nonatomic,readonly) NSURL * webURL;                       //@synthesize webURL=_webURL - In the implementation block
@property (assign,nonatomic) CGSize preferredImageSize;              //@synthesize preferredImageSize=_preferredImageSize - In the implementation block
+(void)initialize;
-(void)setPreferredImageSize:(CGSize)arg1 ;
-(double)htmlFetchTimeout;
-(id)URLRequestWithURL:(id)arg1 timeout:(double)arg2 ;
-(void)parseHTML:(id)arg1 fromURL:(id)arg2 rawData:(id)arg3 assumedEncoding:(unsigned long long)arg4 reinterpretDataIfNeeded:(BOOL)arg5 ;
-(void)completeReadingWithMetadata:(id)arg1 ;
-(unsigned long long)stringEncodingFromCharset:(id)arg1 ;
-(void)fetchImageInMetadata:(id)arg1 ;
-(double)imageFetchTimeout;
-(void)loadMetadataWithResultHandler:(/*^block*/id)arg1 ;
-(void)setHtmlFetchTimeout:(double)arg1 ;
-(void)setImageFetchTimeout:(double)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)cleanUp;
-(NSURL *)webURL;
-(CGSize)preferredImageSize;
@end


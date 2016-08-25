/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMediaUploadOperationBase.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSString, NSMutableData, WAMediaCipher, NSDate, NSURLConnection, NSData, NSOutputStream, NSInputStream;

@interface WAMediaStreamUploadOperation : WAMediaUploadOperationBase <NSStreamDelegate, NSURLConnectionDelegate> {

	NSString* _fileName;
	BOOL _isExecuting;
	BOOL _isFinished;
	NSString* _uploadURL;
	NSString* _uploadIp;
	NSString* _uploadHost;
	NSMutableData* _receiveData;
	WAMediaCipher* _mediaCipher;
	NSDate* _startDate;
	CC_SHA256state_st runningShaContext;
	BOOL _mediaComplete;
	int _uploadPhase;
	int _waitCount;
	BOOL _didSendDataSuccessfully;
	unsigned _retryCount;
	BOOL _streamHasSpaceAvailable;
	NSString* _streamingHash;
	NSURLConnection* _urlConnection;
	NSData* _bodyPrefixData;
	NSData* _bodyFileData;
	NSData* _bodySuffixData;
	NSOutputStream* _producerStream;
	NSInputStream* _consumerStream;
	const char* _currentBuffer;
	unsigned long long _bufferOffset;
	unsigned long long _bufferLimit;
	unsigned long long _fileOffset;
	NSString* _mediaLocalPath;

}

@property (nonatomic,retain) NSURLConnection * urlConnection;              //@synthesize urlConnection=_urlConnection - In the implementation block
@property (nonatomic,copy) NSData * bodyPrefixData;                        //@synthesize bodyPrefixData=_bodyPrefixData - In the implementation block
@property (nonatomic,copy) NSData * bodyFileData;                          //@synthesize bodyFileData=_bodyFileData - In the implementation block
@property (nonatomic,copy) NSData * bodySuffixData;                        //@synthesize bodySuffixData=_bodySuffixData - In the implementation block
@property (nonatomic,retain) NSOutputStream * producerStream;              //@synthesize producerStream=_producerStream - In the implementation block
@property (nonatomic,retain) NSInputStream * consumerStream;               //@synthesize consumerStream=_consumerStream - In the implementation block
@property (assign,nonatomic) const char* currentBuffer;                    //@synthesize currentBuffer=_currentBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long bufferOffset;              //@synthesize bufferOffset=_bufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long bufferLimit;               //@synthesize bufferLimit=_bufferLimit - In the implementation block
@property (assign,nonatomic) unsigned long long fileOffset;                //@synthesize fileOffset=_fileOffset - In the implementation block
@property (nonatomic,copy) NSString * mediaLocalPath;                      //@synthesize mediaLocalPath=_mediaLocalPath - In the implementation block
@property (assign,nonatomic) BOOL streamHasSpaceAvailable;                 //@synthesize streamHasSpaceAvailable=_streamHasSpaceAvailable - In the implementation block
@property (nonatomic,copy) NSString * streamingHash;                       //@synthesize streamingHash=_streamingHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)mediaLocalPath;
-(NSString *)streamingHash;
-(void)assignMessage:(id)arg1 delegate:(id)arg2 ;
-(void)uploadRequestFailedWithError:(id)arg1 ;
-(void)uploadRequestFinishedWithResult:(id)arg1 ;
-(id)postBoundary;
-(void)setConsumerStream:(NSInputStream *)arg1 ;
-(void)setProducerStream:(NSOutputStream *)arg1 ;
-(NSOutputStream *)producerStream;
-(void)setCurrentBuffer:(const char*)arg1 ;
-(void)setBufferOffset:(unsigned long long)arg1 ;
-(NSInputStream *)consumerStream;
-(id)recipientsRefs;
-(void)reportFieldStatsWithResult:(int)arg1 ;
-(BOOL)shouldProceed;
-(BOOL)setStateForFallbackRetry;
-(const char*)currentBuffer;
-(id)suffixData;
-(BOOL)streamHasSpaceAvailable;
-(void)setStreamHasSpaceAvailable:(BOOL)arg1 ;
-(void)processNextUploadChunk;
-(void)reallyStartUpload;
-(void)encUploadRequestFinishedWithResult:(id)arg1 ;
-(void)setBodyPrefixData:(NSData *)arg1 ;
-(NSData *)bodyPrefixData;
-(void)setBufferLimit:(unsigned long long)arg1 ;
-(void)setBodySuffixData:(NSData *)arg1 ;
-(unsigned long long)fileOffset;
-(void)startHTTPUploadToIp:(id)arg1 ;
-(unsigned long long)bufferLimit;
-(void)setFileOffset:(unsigned long long)arg1 ;
-(void)setBodyFileData:(NSData *)arg1 ;
-(NSData *)bodyFileData;
-(NSData *)bodySuffixData;
-(id)initWithMediaLocalPath:(id)arg1 encrypt:(BOOL)arg2 ;
-(void)setStreamingHash:(NSString *)arg1 ;
-(void)setMediaLocalPath:(NSString *)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(NSURLConnection *)urlConnection;
-(void)setUrlConnection:(NSURLConnection *)arg1 ;
-(unsigned long long)bufferOffset;
-(id)uploadError;
@end

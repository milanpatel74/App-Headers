/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, SRWebSocketDelegate;
@class NSOperationQueue, NSObject, NSMutableArray, NSInputStream, NSOutputStream, NSMutableData, NSString, NSURLRequest, NSArray, SRIOConsumerPool, NSURL;

@interface SRWebSocket : NSObject <NSStreamDelegate> {

	long long _webSocketVersion;
	NSOperationQueue* _delegateOperationQueue;
	NSObject*<OS_dispatch_queue> _delegateDispatchQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _consumers;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSMutableData* _readBuffer;
	unsigned long long _readBufferOffset;
	NSMutableData* _outputBuffer;
	unsigned long long _outputBufferOffset;
	unsigned char _currentFrameOpcode;
	unsigned long long _currentFrameCount;
	unsigned long long _readOpCount;
	unsigned _currentStringScanPosition;
	NSMutableData* _currentFrameData;
	NSString* _closeReason;
	NSString* _secKey;
	BOOL _pinnedCertFound;
	unsigned char _currentReadMaskKey[4];
	unsigned long long _currentReadMaskOffset;
	BOOL _consumerStopped;
	BOOL _closeWhenFinishedWriting;
	BOOL _failed;
	BOOL _secure;
	NSURLRequest* _urlRequest;
	CFHTTPMessageRef _receivedHTTPHeaders;
	BOOL _sentClose;
	BOOL _didFail;
	int _closeCode;
	BOOL _isPumping;
	BOOL _didSchedule;
	SRWebSocket* _selfRetain;
	NSArray* _requestedProtocols;
	SRIOConsumerPool* _consumerPool;
	int _readyState;
	id<SRWebSocketDelegate> _delegate;
	NSURL* _url;
	NSString* _protocol;

}

@property (assign,nonatomic) id<SRWebSocketDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int readyState;                                                  //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,retain,readonly) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * protocol;                                      //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSOperationQueue * delegateOperationQueue;                       //@synthesize delegateOperationQueue=_delegateOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateDispatchQueue;              //@synthesize delegateDispatchQueue=_delegateDispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)_SR_commonInit;
-(id)initWithURLRequest:(id)arg1 protocols:(id)arg2 ;
-(id)initWithURL:(id)arg1 protocols:(id)arg2 ;
-(void)_initializeStreams;
-(BOOL)_checkHandshake:(CFHTTPMessageRef)arg1 ;
-(void)_readFrameNew;
-(void)_performDelegateBlock:(/*^block*/id)arg1 ;
-(void)_HTTPHeadersDidFinish;
-(void)_readHTTPHeader;
-(void)_readUntilHeaderCompleteWithCallback:(/*^block*/id)arg1 ;
-(void)closeWithCode:(long long)arg1 reason:(id)arg2 ;
-(void)_sendFrameWithOpcode:(int)arg1 data:(id)arg2 ;
-(void)_pumpWriting;
-(void)_closeWithProtocolError:(id)arg1 ;
-(void)_readFrameContinue;
-(void)handleCloseWithData:(id)arg1 ;
-(void)handlePing:(id)arg1 ;
-(void)handlePong;
-(void)_handleFrameWithData:(id)arg1 opCode:(long long)arg2 ;
-(void)_addConsumerWithDataLength:(unsigned long long)arg1 callback:(/*^block*/id)arg2 readToCurrentFrame:(BOOL)arg3 unmaskBytes:(BOOL)arg4 ;
-(void)_handleFrameHeader:(SCD_Struct_SR8)arg1 curData:(id)arg2 ;
-(void)_addConsumerWithScanner:(/*^block*/id)arg1 callback:(/*^block*/id)arg2 dataLength:(unsigned long long)arg3 ;
-(void)_pumpScanner;
-(void)_readUntilBytes:(const void*)arg1 length:(unsigned long long)arg2 callback:(/*^block*/id)arg3 ;
-(void)_addConsumerWithScanner:(/*^block*/id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)_innerPumpScanner;
-(void)didConnect;
-(void)setDelegateDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSOperationQueue *)delegateOperationQueue;
-(void)setDelegateOperationQueue:(NSOperationQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateDispatchQueue;
-(void)_disconnect;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)send:(id)arg1 ;
-(void)setDelegate:(id<SRWebSocketDelegate>)arg1 ;
-(void)dealloc;
-(id<SRWebSocketDelegate>)delegate;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(NSString *)protocol;
-(void)_writeData:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(void)_connect;
-(void)setReadyState:(int)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(int)readyState;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)_handleMessage:(id)arg1 ;
@end


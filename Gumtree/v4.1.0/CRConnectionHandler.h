/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class CritterImpl, NSMutableData, NSURLResponse;

@interface CRConnectionHandler : NSObject {

	CritterImpl* _delegate;
	NSMutableData* _dataReceived;
	NSURLResponse* _response;

}

@property (readonly) CritterImpl * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableData * dataReceived;              //@synthesize dataReceived=_dataReceived - In the implementation block
@property (retain) NSURLResponse * response;                  //@synthesize response=_response - In the implementation block
+(id)handlerWithDelegate:(id)arg1 ;
-(id)initWithCritterDelegate:(id)arg1 ;
-(void)handleResponse:(long long)arg1 andData:(id)arg2 ;
-(void)doSendRequest:(id)arg1 ;
-(BOOL)receivedErrorResponse;
-(id)dataReceivedAsString;
-(NSMutableData *)dataReceived;
-(void)setDataReceived:(NSMutableData *)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(id)init;
-(CritterImpl *)delegate;
-(NSURLResponse *)response;
-(long long)statusCode;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)handleError:(id)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
@end

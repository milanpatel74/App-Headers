/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLConnection.h>

@class NSMutableData, NSURLResponse;

@interface FRGenericConnection : NSURLConnection {

	/*^block*/id callbackRecvdResponse;
	/*^block*/id callbackFailure;
	NSMutableData* responseData;
	NSURLResponse* response;

}

@property (nonatomic,retain) NSMutableData * responseData; 
@property (nonatomic,retain) NSURLResponse * response; 
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
@end

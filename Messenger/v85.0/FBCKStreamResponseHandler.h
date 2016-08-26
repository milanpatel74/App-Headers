/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStreamResponseHandler.h>

@protocol FBCKStreamResponseHandlerProcessingDelegate;
@interface FBCKStreamResponseHandler : FBStreamResponseHandler {

	id<FBCKStreamResponseHandlerProcessingDelegate> _processingDelegate;

}
-(void)processResponse:(id)arg1 forRequest:(id)arg2 inDownloadRequest:(id)arg3 isLastResponse:(BOOL)arg4 responseUUID:(id)arg5 status:(id)arg6 ;
-(void)processCancelledRequest:(id)arg1 status:(id)arg2 ;
-(void)processFailedRequest:(id)arg1 error:(id)arg2 status:(id)arg3 ;
-(id)loadResultForResponse:(id)arg1 query:(id)arg2 ;
-(id)loadResultForIncorrectResponse;
-(id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 parser:(id)arg3 analytics:(id)arg4 processingDelegate:(id)arg5 ;
@end

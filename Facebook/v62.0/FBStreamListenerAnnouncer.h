/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBStreamListener.h>

@class NSString;

@interface FBStreamListenerAnnouncer : FBAnnouncerBase <FBStreamListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 ;
-(void)stream:(id)arg1 willStartLoading:(unsigned long long)arg2 refreshMode:(unsigned long long)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)streamLoadResponseHandlerWillProcessResponseWithLoadType:(unsigned long long)arg1 loadRequestUUID:(id)arg2 loadRequestPriority:(long long)arg3 responseUUID:(id)arg4 responseStatus:(id)arg5 timestamp:(double)arg6 currentResponseChunkIndex:(unsigned long long)arg7 expectedResponseChunks:(unsigned long long)arg8 ;
-(void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned long long)arg1 loadRequestUUID:(id)arg2 loadRequestPriority:(long long)arg3 rawResponse:(id)arg4 responseUUID:(id)arg5 responseStatus:(id)arg6 timestamp:(double)arg7 responseChunkResults:(id)arg8 expectedResponseChunks:(unsigned long long)arg9 userInfo:(id)arg10 ;
-(void)streamLoadDidEnqueueDownloadRequestWithBeforeCursor:(id)arg1 afterCursor:(id)arg2 analyticsUUID:(id)arg3 refreshMode:(unsigned long long)arg4 userInfo:(id)arg5 ;
-(void)streamLoadDidStartDownloadRequestWithBeforeCursor:(id)arg1 afterCursor:(id)arg2 retryCount:(unsigned long long)arg3 analyticsUUID:(id)arg4 ;
-(void)streamLoadDidCancelDownloadRequestWithAnalyticsUUID:(id)arg1 ;
-(void)streamLoadDidReceiveSuccessfulResponseForDownloadRequestWithAnalyticsUUID:(id)arg1 ;
-(void)streamLoadDidReceiveFailingResponseForDownloadRequestWithAnalyticsUUID:(id)arg1 error:(id)arg2 status:(id)arg3 userInfo:(id)arg4 ;
-(void)stream:(id)arg1 didCancelLoading:(unsigned long long)arg2 requestAnalyticsUUID:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end


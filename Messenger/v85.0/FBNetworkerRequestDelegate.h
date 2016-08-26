/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkerRequestDelegate <NSObject>
@optional
-(void)networkerRequestDidStart:(id)arg1;
-(void)networkerRequest:(id)arg1 didUploadBytes:(long long)arg2 outOf:(long long)arg3;
-(void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(BOOL)arg3;
-(void)networkerRequest:(id)arg1 didReceiveResponse:(id)arg2;
-(void)networkerRequest:(id)arg1 didReceiveData:(id)arg2;
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
-(void)networkerRequest:(id)arg1 willRetryWithError:(id)arg2 status:(id)arg3;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;

@end

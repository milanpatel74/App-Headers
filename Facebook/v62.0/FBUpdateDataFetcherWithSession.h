/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUpdateDataFetcher.h>
#import <Facebook/FBNetworkerRequestDelegate.h>

@class FBUserSession, FBUpdateGraphDataFetcherHelper, FBNetworkerRequest, NSString;

@interface FBUpdateDataFetcherWithSession : FBUpdateDataFetcher <FBNetworkerRequestDelegate> {

	FBUserSession* _session;
	FBUpdateGraphDataFetcherHelper* _dataFetcherHelper;
	unsigned long long _status;
	FBNetworkerRequest* _downloadRequest;

}

@property (assign,nonatomic) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) FBNetworkerRequest * downloadRequest;              //@synthesize downloadRequest=_downloadRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequestDidStart:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didReceiveData:(id)arg2 ;
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 params:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)fetchData;
-(void)setDownloadRequest:(FBNetworkerRequest *)arg1 ;
-(FBNetworkerRequest *)downloadRequest;
@end

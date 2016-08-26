/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCancelable;
@interface MNMontageViewModelGenerationRequestInfo : NSObject {

	unsigned long long _userStoreRequestId;
	id<FBCancelable> _cancelTokenForMessageRequest;
	unsigned long long _threadStoreRequestId;

}

@property (assign,nonatomic) unsigned long long userStoreRequestId;                      //@synthesize userStoreRequestId=_userStoreRequestId - In the implementation block
@property (nonatomic,retain) id<FBCancelable> cancelTokenForMessageRequest;              //@synthesize cancelTokenForMessageRequest=_cancelTokenForMessageRequest - In the implementation block
@property (assign,nonatomic) unsigned long long threadStoreRequestId;                    //@synthesize threadStoreRequestId=_threadStoreRequestId - In the implementation block
-(unsigned long long)userStoreRequestId;
-(void)setUserStoreRequestId:(unsigned long long)arg1 ;
-(id<FBCancelable>)cancelTokenForMessageRequest;
-(void)setCancelTokenForMessageRequest:(id<FBCancelable>)arg1 ;
-(unsigned long long)threadStoreRequestId;
-(void)setThreadStoreRequestId:(unsigned long long)arg1 ;
-(id)init;
@end

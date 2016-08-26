/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNPendingThread, NSSet;

@interface MNThreadViewModelLoaderForPendingThreadRequest : NSObject {

	unsigned long long _userStoreRequestID;
	/*^block*/id _successBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _failureBlock;
	MNPendingThread* _pendingThread;
	NSSet* _requestedUserIds;

}

@property (assign,nonatomic) unsigned long long userStoreRequestID;               //@synthesize userStoreRequestID=_userStoreRequestID - In the implementation block
@property (nonatomic,readonly) id successBlock;                                   //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,readonly) id progressBlock;                                  //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,readonly) id failureBlock;                                   //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy,readonly) MNPendingThread * pendingThread;              //@synthesize pendingThread=_pendingThread - In the implementation block
@property (nonatomic,copy,readonly) NSSet * requestedUserIds;                     //@synthesize requestedUserIds=_requestedUserIds - In the implementation block
-(id)successBlock;
-(id)initWithPendingThread:(id)arg1 requestedUserIds:(id)arg2 successBlock:(/*^block*/id)arg3 progressBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(unsigned long long)userStoreRequestID;
-(void)setUserStoreRequestID:(unsigned long long)arg1 ;
-(MNPendingThread *)pendingThread;
-(NSSet *)requestedUserIds;
-(id)description;
-(id)progressBlock;
-(id)failureBlock;
@end

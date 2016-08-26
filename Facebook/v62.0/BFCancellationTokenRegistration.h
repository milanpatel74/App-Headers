/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:54 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BFCancellationToken, NSObject;

@interface BFCancellationTokenRegistration : NSObject {

	BOOL _disposed;
	BFCancellationToken* _token;
	/*^block*/id _cancellationObserverBlock;
	NSObject* _lock;

}

@property (assign,nonatomic,__weak) BFCancellationToken * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id cancellationObserverBlock;                      //@synthesize cancellationObserverBlock=_cancellationObserverBlock - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL disposed;                                   //@synthesize disposed=_disposed - In the implementation block
+(id)registrationWithToken:(id)arg1 delegate:(/*^block*/id)arg2 ;
-(void)setCancellationObserverBlock:(id)arg1 ;
-(BOOL)disposed;
-(void)setDisposed:(BOOL)arg1 ;
-(void)throwIfDisposed;
-(id)cancellationObserverBlock;
-(id)init;
-(NSObject *)lock;
-(BFCancellationToken *)token;
-(void)setToken:(BFCancellationToken *)arg1 ;
-(void)notifyDelegate;
-(void)dispose;
-(void)setLock:(NSObject *)arg1 ;
@end

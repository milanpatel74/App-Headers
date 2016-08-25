/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSObject;

@interface BFCancellationToken : NSObject {

	BOOL _cancellationRequested;
	BOOL _disposed;
	NSMutableArray* _registrations;
	NSObject* _lock;

}

@property (assign,getter=isCancellationRequested,nonatomic) BOOL cancellationRequested;              //@synthesize cancellationRequested=_cancellationRequested - In the implementation block
@property (nonatomic,retain) NSMutableArray * registrations;                                         //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                                        //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL disposed;                                                          //@synthesize disposed=_disposed - In the implementation block
-(void)throwIfDisposed;
-(void)cancelPrivate;
-(NSMutableArray *)registrations;
-(void)notifyCancellation:(id)arg1 ;
-(BOOL)isCancellationRequested;
-(BOOL)disposed;
-(void)setDisposed:(BOOL)arg1 ;
-(id)registerCancellationObserverWithBlock:(/*^block*/id)arg1 ;
-(void)unregisterRegistration:(id)arg1 ;
-(void)cancelAfterDelay:(int)arg1 ;
-(void)setCancellationRequested:(BOOL)arg1 ;
-(void)setRegistrations:(NSMutableArray *)arg1 ;
-(void)cancel;
-(id)init;
-(NSObject *)lock;
-(void)dispose;
-(void)setLock:(NSObject *)arg1 ;
@end

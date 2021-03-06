/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBServiceTransactionMutating, MNInboxFetcherDelegate, MNInboxFetcherDataSource;
@class FBUserSession, NSObject;

@interface MNInboxFetcher : NSObject {

	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBServiceTransactionMutating> _token;
	id<MNInboxFetcherDelegate> _delegate;
	id<MNInboxFetcherDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<MNInboxFetcherDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNInboxFetcherDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)fetchWithFetchConfig:(id)arg1 ;
-(void)_handleFetchedViewer:(id)arg1 ;
-(id)initWithSession:(id)arg1 queue:(id)arg2 ;
-(void)setDataSource:(id<MNInboxFetcherDataSource>)arg1 ;
-(void)setDelegate:(id<MNInboxFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInboxFetcherDataSource>)dataSource;
-(id<MNInboxFetcherDelegate>)delegate;
@end


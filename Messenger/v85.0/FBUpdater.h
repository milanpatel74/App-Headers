/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUpdaterDelegate;
@class NSDate, FBUpdateDataFetcher;

@interface FBUpdater : NSObject {

	unsigned long long _checkInterval;
	NSDate* _lastUpdateDate;
	FBUpdateDataFetcher* _dataFetcher;
	id<FBUpdaterDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long checkInterval;                   //@synthesize checkInterval=_checkInterval - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateDate;                          //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,retain) FBUpdateDataFetcher * dataFetcher;                  //@synthesize dataFetcher=_dataFetcher - In the implementation block
@property (assign,nonatomic,__weak) id<FBUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)registeredDefaultUpdateCoordinator;
-(void)registerDefaultDelegate;
-(id)registeredDefaultUpdateController;
-(id)initWithUserSession:(id)arg1 forceManualUpdate:(BOOL)arg2 ;
-(void)registerDefaultDataFetcherWithUserSession:(id)arg1 ;
-(BOOL)forceFetchingData;
-(BOOL)runService;
-(FBUpdateDataFetcher *)dataFetcher;
-(void)setCheckInterval:(unsigned long long)arg1 ;
-(id)initWithDataFetcher:(id)arg1 delegate:(id)arg2 forceManualUpdate:(BOOL)arg3 ;
-(unsigned long long)checkInterval;
-(void)setDataFetcher:(FBUpdateDataFetcher *)arg1 ;
-(void)stopService;
-(void)setDelegate:(id<FBUpdaterDelegate>)arg1 ;
-(id<FBUpdaterDelegate>)delegate;
-(NSDate *)lastUpdateDate;
@end

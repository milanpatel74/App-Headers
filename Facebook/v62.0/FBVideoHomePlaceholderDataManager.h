/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoHomeGuideDataFetcherListener.h>

@class FBVideoHomeGuideDataFetcher, FBDiskCache, NSString;

@interface FBVideoHomePlaceholderDataManager : NSObject <FBVideoHomeGuideDataFetcherListener> {

	double _dataRefreshInterval;
	double _lastRequestTime;
	FBVideoHomeGuideDataFetcher* _dataFetcher;
	FBDiskCache* _diskCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setDataFetcher:(id)arg1 ;
-(void)_updateWithUnits:(id)arg1 ;
-(void)cacheUnits:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPlaceholderDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)videoHomeGuideDataFetcherWillLoadUnits:(id)arg1 loadType:(unsigned long long)arg2 ;
-(void)videoHomeGuideDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3 requestType:(unsigned long long)arg4 error:(id)arg5 ;
-(void)videoHomeGuideDataFetcherDidClearDataAndRequests:(id)arg1 ;
-(void)videoHomeGuideDataFetcherDidMarkDataDirty:(id)arg1 withReason:(id)arg2 ;
-(void)requestPlaceholderData;
-(id)initWithDataRefreshInterval:(double)arg1 gqlccFactory:(id)arg2 diskCache:(id)arg3 ;
@end

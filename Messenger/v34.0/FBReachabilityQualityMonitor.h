/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBReachabilityQualityDelegate.h>
#import <Messenger/FBReachabilityListener.h>

@protocol FBReachabilityQualityMonitorDelegate, FBMovingAverage, OS_dispatch_queue;
@class FBRadioTechnologyFetcher, NSObject, NSString;

@interface FBReachabilityQualityMonitor : NSObject <FBReachabilityQualityDelegate, FBReachabilityListener> {

	id<FBReachabilityQualityMonitorDelegate> _delegate;
	id<FBMovingAverage> _downloadBandwidthMovingAverage;
	id<FBMovingAverage> _uploadBandwidthMovingAverage;
	id<FBMovingAverage> _latencyMovingAverage;
	FBRadioTechnologyFetcher* _radioTechnologyFetcher;
	shared_ptr<bool>* _initOutstanding;
	double _initialDownloadBandwidthEstimate;
	double _initialUploadBandwidthEstimate;
	double _initialLatencyEstimate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	mutex _lock;

}

@property (nonatomic,readonly) FBQualityEstimate downloadBandwidthEstimate; 
@property (nonatomic,readonly) FBQualityEstimate uploadBandwidthEstimate; 
@property (nonatomic,readonly) FBQualityEstimate latencyEstimate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 downloadBandwidthMovingAverageFactory:(/*^block*/id)arg2 uploadBandwidthMovingAverageFactory:(/*^block*/id)arg3 latencyMovingAverageFactory:(/*^block*/id)arg4 notificationQueue:(id)arg5 ;
-(FBQualityEstimate)downloadBandwidthEstimate;
-(FBQualityEstimate)uploadBandwidthEstimate;
-(FBQualityEstimate)latencyEstimate;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)initWithDelegate:(id)arg1 downloadBandwidthMovingAverageFactory:(/*^block*/id)arg2 uploadBandwidthMovingAverageFactory:(/*^block*/id)arg3 latencyMovingAverageFactory:(/*^block*/id)arg4 radioTechnologyFetcher:(id)arg5 notificationQueue:(id)arg6 concurrentQueue:(id)arg7 ;
-(FBQualityEstimate)_getDownloadBandwidthEstimate_unlocked;
-(FBQualityEstimate)_getUploadBandwidthEstimate_unlocked;
-(FBQualityEstimate)_getLatencyEstimate_unlocked;
-(double)_downloadBandwidthEstimateForReachabilityState:(unsigned long long)arg1 ;
-(double)_uploadBandwidthEstimateForReachabilityState:(unsigned long long)arg1 ;
-(double)_latencyEstimateForReachabilityState:(unsigned long long)arg1 ;
-(void)downloadBandwidthEstimate:(double)arg1 ;
-(void)uploadBandwidthEstimate:(double)arg1 ;
-(void)latencyEstimate:(double)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSMutableArray, NSDictionary, NSThread, NSString;

@interface UnityAdsAnalyticsUploader : NSObject <NSURLConnectionDelegate> {

	NSMutableArray* _uploadQueue;
	NSDictionary* _currentUpload;
	dispatch_queue_sRef _analyticsQueue;
	NSThread* _backgroundThread;

}

@property (nonatomic,retain) NSMutableArray * uploadQueue;                    //@synthesize uploadQueue=_uploadQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * currentUpload;                    //@synthesize currentUpload=_currentUpload - In the implementation block
@property (assign,nonatomic) dispatch_queue_sRef analyticsQueue;              //@synthesize analyticsQueue=_analyticsQueue - In the implementation block
@property (nonatomic,retain) NSThread * backgroundThread;                     //@synthesize backgroundThread=_backgroundThread - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSDictionary *)currentUpload;
-(void)setCurrentUpload:(NSDictionary *)arg1 ;
-(BOOL)_startNextUpload;
-(void)_queueURL:(id)arg1 body:(id)arg2 httpMethod:(id)arg3 retries:(id)arg4 ;
-(void)setAnalyticsQueue:(dispatch_queue_sRef)arg1 ;
-(void)_backgroundRunLoop:(id)arg1 ;
-(void)setBackgroundThread:(NSThread *)arg1 ;
-(NSThread *)backgroundThread;
-(dispatch_queue_sRef)analyticsQueue;
-(void)sendAnalyticsRequestWithQueryString:(id)arg1 ;
-(void)sendTrackingCallWithQueryString:(id)arg1 ;
-(void)_queueWithURLString:(id)arg1 queryString:(id)arg2 httpMethod:(id)arg3 retries:(id)arg4 ;
-(void)_saveFailedUpload:(id)arg1 ;
-(void)sendOpenAppStoreRequest:(id)arg1 ;
-(void)logVideoAnalyticsWithPosition:(int)arg1 campaignId:(id)arg2 viewed:(BOOL)arg3 cached:(BOOL)arg4 ;
-(void)sendInstallTrackingCallWithQueryDictionary:(id)arg1 ;
-(void)retryFailedUploads;
-(void)setUploadQueue:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSMutableArray *)uploadQueue;
@end


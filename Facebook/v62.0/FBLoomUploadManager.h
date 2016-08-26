/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBLoomManager.h>
#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBLoomConfigurable.h>

@protocol OS_dispatch_queue, FBLoomUploadManagerDelegate, FBLoomNetworkingSource;
@class NSURL, NSObject, NSNumber, NSDate, NSString;

@interface FBLoomUploadManager : NSObject <FBLoomManager, FBNetworkerRequestDelegate, FBLoomConfigurable> {

	NSURL* _directoryUrl;
	unsigned long long _uploadsInFlight;
	NSObject*<OS_dispatch_queue> _queue;
	mutex _mutex;
	NSNumber* _maximumBytesUploadedPerTimeframe;
	NSNumber* _timeframeDuration;
	id<FBLoomUploadManagerDelegate> _delegate;
	id<FBLoomNetworkingSource> _source;

}

@property (retain) NSNumber * maximumBytesUploadedPerTimeframe; 
@property (retain) NSNumber * timeframeDuration; 
@property (retain) NSDate * timeframeStart; 
@property (assign) unsigned long long bytesUploadedInTimeframe; 
@property (__weak) id<FBLoomUploadManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<FBLoomNetworkingSource> source;                        //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyForConfiguration;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(id)initWithUploadDirectory:(id)arg1 ;
-(void)attemptTraceUploads;
-(void)invalidateConfiguration;
-(void)updateConfigurationWithDictionary:(id)arg1 ;
-(BOOL)deductBandwidthToUploadFile:(id)arg1 ;
-(void)recordUploadAction:(short)arg1 ;
-(void)setMaximumBytesUploadedPerTimeframe:(NSNumber *)arg1 ;
-(void)setTimeframeDuration:(NSNumber *)arg1 ;
-(NSDate *)timeframeStart;
-(NSNumber *)timeframeDuration;
-(unsigned long long)bytesUploadedInTimeframe;
-(void)setTimeframeStart:(NSDate *)arg1 ;
-(NSNumber *)maximumBytesUploadedPerTimeframe;
-(void)setBytesUploadedInTimeframe:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBLoomUploadManagerDelegate>)arg1 ;
-(id<FBLoomUploadManagerDelegate>)delegate;
-(void)setSource:(id<FBLoomNetworkingSource>)arg1 ;
-(id<FBLoomNetworkingSource>)source;
-(id)delegateQueue;
@end

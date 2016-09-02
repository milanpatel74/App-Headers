/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPBannerAdapterDelegate;
#import <Reddit/Reddit-Structs.h>
@class MPAdConfiguration, MPTimer, NSURL;

@interface MPBaseBannerAdapter : NSObject {

	id<MPBannerAdapterDelegate> _delegate;
	MPAdConfiguration* _configuration;
	MPTimer* _timeoutTimer;
	NSURL* _impressionTrackingURL;
	NSURL* _clickTrackingURL;

}

@property (nonatomic,retain) MPAdConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) MPTimer * timeoutTimer;                                   //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic,__weak) id<MPBannerAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * impressionTrackingURL;                              //@synthesize impressionTrackingURL=_impressionTrackingURL - In the implementation block
@property (nonatomic,copy) NSURL * clickTrackingURL;                                   //@synthesize clickTrackingURL=_clickTrackingURL - In the implementation block
-(void)unregisterDelegate;
-(void)setClickTrackingURL:(NSURL *)arg1 ;
-(void)setImpressionTrackingURL:(NSURL *)arg1 ;
-(NSURL *)clickTrackingURL;
-(NSURL *)impressionTrackingURL;
-(void)trackImpression;
-(void)trackClick;
-(void)startTimeoutTimer;
-(void)didStopLoading;
-(void)didDisplayAd;
-(void)getAdWithConfiguration:(id)arg1 containerSize:(CGSize)arg2 ;
-(void)_getAdWithConfiguration:(id)arg1 containerSize:(CGSize)arg2 ;
-(void)setDelegate:(id<MPBannerAdapterDelegate>)arg1 ;
-(void)dealloc;
-(id<MPBannerAdapterDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(void)rotateToOrientation:(long long)arg1 ;
-(MPAdConfiguration *)configuration;
-(void)timeout;
-(void)setTimeoutTimer:(MPTimer *)arg1 ;
-(MPTimer *)timeoutTimer;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/GADSlotAdEventDelegate.h>
#import <eBay/GADSlotAdKeyDelegate.h>
#import <eBay/GADSlotAdLoadDelegate.h>
#import <eBay/GADSlotAdResponseDelegate.h>
#import <eBay/GADSlotDelegate.h>

@protocol OS_dispatch_queue, GADPlacementDelegate, GADPlacementAdRequestDelegate, GADPlacementUserInterfaceDelegate, GADInAppPurchaseDelegate, GADAdMediationDelegate;
@class NSObject, NSDictionary, GADRequest, GADSlot, NSArray, NSString, GADAdType, GADCorrelator;

@interface GADPlacement : NSObject <GADSlotAdEventDelegate, GADSlotAdKeyDelegate, GADSlotAdLoadDelegate, GADSlotAdResponseDelegate, GADSlotDelegate> {

	NSObject*<OS_dispatch_queue> _lockQueue;
	unsigned _previousCorrelationID;
	BOOL _hasLoadedAd;
	NSDictionary* _cachedViewHierarchyInformation;
	GADRequest* _lastRequest;
	GADSlot* _slot;
	id<GADPlacementDelegate> _delegate;
	id<GADPlacementAdRequestDelegate> _adRequestDelegate;
	id<GADPlacementUserInterfaceDelegate> _userInterfaceDelegate;
	id<GADInAppPurchaseDelegate> _inAppPurchaseDelegate;
	id<GADAdMediationDelegate> _mediationDelegate;
	NSArray* _validAdSizes;

}

@property (readonly) GADSlot * slot; 
@property (__weak) id<GADPlacementDelegate> delegate; 
@property (__weak) id<GADPlacementAdRequestDelegate> adRequestDelegate; 
@property (__weak) id<GADPlacementUserInterfaceDelegate> userInterfaceDelegate; 
@property (__weak) id<GADInAppPurchaseDelegate> inAppPurchaseDelegate; 
@property (__weak) id<GADAdMediationDelegate> mediationDelegate; 
@property (nonatomic,readonly) BOOL hasAutoRefreshed; 
@property (assign,nonatomic) BOOL autoRequestEnabled; 
@property (nonatomic,copy) NSString * adUnitID; 
@property (nonatomic,retain) GADAdType * adType; 
@property (nonatomic,retain) NSArray * validAdSizes;                                         //@synthesize validAdSizes=_validAdSizes - In the implementation block
@property (assign,nonatomic) BOOL manualImpressionsEnabled; 
@property (nonatomic,retain) GADCorrelator * correlator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdType:(GADAdType *)arg1 ;
-(void)setAdUnitID:(NSString *)arg1 ;
-(NSString *)adUnitID;
-(id<GADInAppPurchaseDelegate>)inAppPurchaseDelegate;
-(void)setInAppPurchaseDelegate:(id<GADInAppPurchaseDelegate>)arg1 ;
-(void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2 ;
-(void)slotFinishedLoadingAdContent:(id)arg1 ;
-(void)setMediationDelegate:(id<GADAdMediationDelegate>)arg1 ;
-(void)slotWillPresentScreen:(id)arg1 ;
-(void)slotWillDismissScreen:(id)arg1 ;
-(void)slotDidDismissScreen:(id)arg1 ;
-(void)slotWillLeaveApplication:(id)arg1 ;
-(BOOL)slot:(id)arg1 shouldLoadRequest:(id)arg2 error:(id*)arg3 ;
-(BOOL)slotShouldReloadCurrentRequest:(id)arg1 ;
-(BOOL)slotShouldPreemptInProgressRequest:(id)arg1 ;
-(CGRect)frameInInterface;
-(void)slot:(id)arg1 didReceiveAdView:(id)arg2 ;
-(void)slot:(id)arg1 contentSizeDidChange:(CGSize)arg2 ;
-(void)setAdSize:(GADAdSize)arg1 andReload:(BOOL)arg2 ;
-(NSArray *)validAdSizes;
-(void)slot:(id)arg1 willResizeToAdSize:(GADAdSize)arg2 ;
-(void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3 ;
-(BOOL)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id*)arg3 ;
-(void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2 ;
-(void)slotDidReceiveAdClick:(id)arg1 ;
-(BOOL)slot:(id)arg1 shouldChangeAudioSessionCategoryTo:(id)arg2 ;
-(BOOL)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id*)arg3 ;
-(BOOL)slot:(id)arg1 shouldProcessMediatedAdResponse:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasAutoRefreshed;
-(void)cacheViewHierarchyInformationForSlot:(id)arg1 ;
-(id)viewHierarchyInformationForSlot:(id)arg1 ;
-(BOOL)manualImpressionsEnabled;
-(void)setManualImpressionsEnabled:(BOOL)arg1 ;
-(GADCorrelator *)correlator;
-(void)setCorrelator:(GADCorrelator *)arg1 ;
-(id<GADPlacementAdRequestDelegate>)adRequestDelegate;
-(BOOL)autoRequestEnabled;
-(id<GADPlacementUserInterfaceDelegate>)userInterfaceDelegate;
-(id<GADAdMediationDelegate>)mediationDelegate;
-(void)setAdRequestDelegate:(id<GADPlacementAdRequestDelegate>)arg1 ;
-(void)setUserInterfaceDelegate:(id<GADPlacementUserInterfaceDelegate>)arg1 ;
-(BOOL)setSlot:(id)arg1 error:(id*)arg2 ;
-(void)setAutoRequestEnabled:(BOOL)arg1 ;
-(void)setValidAdSizes:(NSArray *)arg1 ;
-(GADSlot *)slot;
-(CGRect)bounds;
-(void)setDelegate:(id<GADPlacementDelegate>)arg1 ;
-(id)init;
-(CGRect)frame;
-(id<GADPlacementDelegate>)delegate;
-(id)rootViewController;
-(void)loadRequest:(id)arg1 ;
-(GADAdType *)adType;
@end

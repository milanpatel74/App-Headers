/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBDisplayAdControllerDelegate.h>
#import <SportyTrader/FBAdViewabilityValidatorDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBNativeAdDelegate;
@class NSString, FBDisplayAdController, FBAdProvider, NSDictionary, FBAdViewabilityValidator, NSHashTable, UIViewController, NSDate, FBNativeAdDataModel, FBAdImage, NSURL, FBNativeAdViewAttributes, UIView;

@interface FBNativeAd : NSObject <FBDisplayAdControllerDelegate, FBAdViewabilityValidatorDelegate, UIGestureRecognizerDelegate> {

	BOOL _hasBeenUsed;
	BOOL _hasCalledLoadAd;
	BOOL _isHScroll;
	BOOL _usedByMediaView;
	BOOL _viewabilityValidatorDisabled;
	BOOL _bypassValidation;
	NSString* _placementID;
	long long _mediaCachePolicy;
	id<FBNativeAdDelegate> _delegate;
	FBDisplayAdController* _adController;
	FBAdProvider* _adProvider;
	NSDictionary* _mediaViewConfiguration;
	FBAdViewabilityValidator* _viewabilityValidator;
	NSHashTable* _gestureRecognizers;
	long long _minViewabilityPercentage;
	UIViewController* _viewController;
	NSDate* _loadAdStartTime;
	FBNativeAdDataModel* _dataModel;
	FBAdImage* _adChoicesIcon;
	NSURL* _adChoicesLinkURL;
	NSString* _adChoicesText;
	FBNativeAdViewAttributes* _adViewAttributes;
	UIView* _nativeAdView;
	NSHashTable* _clickableViews;
	/*^block*/id _onImpression;
	/*^block*/id _onClick;
	/*^block*/id _onVideoPlay;
	/*^block*/id _onVideoTime;

}

@property (nonatomic,copy) NSString * placementID;                                             //@synthesize placementID=_placementID - In the implementation block
@property (nonatomic,readonly) FBAdStarRating starRating; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * socialContext; 
@property (nonatomic,copy,readonly) NSString * callToAction; 
@property (nonatomic,readonly) FBAdImage * icon; 
@property (nonatomic,readonly) FBAdImage * coverImage; 
@property (nonatomic,copy,readonly) NSString * body; 
@property (assign,nonatomic) long long mediaCachePolicy;                                       //@synthesize mediaCachePolicy=_mediaCachePolicy - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeAdDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAdValid,nonatomic,readonly) BOOL adValid; 
@property (assign,nonatomic) BOOL hasBeenUsed;                                                 //@synthesize hasBeenUsed=_hasBeenUsed - In the implementation block
@property (nonatomic,retain) FBDisplayAdController * adController;                             //@synthesize adController=_adController - In the implementation block
@property (nonatomic,retain) FBAdProvider * adProvider;                                        //@synthesize adProvider=_adProvider - In the implementation block
@property (assign,nonatomic) BOOL hasCalledLoadAd;                                             //@synthesize hasCalledLoadAd=_hasCalledLoadAd - In the implementation block
@property (assign,nonatomic) BOOL isHScroll;                                                   //@synthesize isHScroll=_isHScroll - In the implementation block
@property (assign,nonatomic) BOOL usedByMediaView;                                             //@synthesize usedByMediaView=_usedByMediaView - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaViewConfiguration;                            //@synthesize mediaViewConfiguration=_mediaViewConfiguration - In the implementation block
@property (nonatomic,retain) FBAdViewabilityValidator * viewabilityValidator;                  //@synthesize viewabilityValidator=_viewabilityValidator - In the implementation block
@property (nonatomic,retain) NSHashTable * gestureRecognizers;                                 //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (assign,nonatomic) long long minViewabilityPercentage;                               //@synthesize minViewabilityPercentage=_minViewabilityPercentage - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                         //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSDate * loadAdStartTime;                                         //@synthesize loadAdStartTime=_loadAdStartTime - In the implementation block
@property (nonatomic,retain) FBNativeAdDataModel * dataModel;                                  //@synthesize dataModel=_dataModel - In the implementation block
@property (nonatomic,retain) FBAdImage * adChoicesIcon;                                        //@synthesize adChoicesIcon=_adChoicesIcon - In the implementation block
@property (nonatomic,copy) NSURL * adChoicesLinkURL;                                           //@synthesize adChoicesLinkURL=_adChoicesLinkURL - In the implementation block
@property (nonatomic,copy) NSString * adChoicesText;                                           //@synthesize adChoicesText=_adChoicesText - In the implementation block
@property (nonatomic,retain) FBNativeAdViewAttributes * adViewAttributes;                      //@synthesize adViewAttributes=_adViewAttributes - In the implementation block
@property (assign,nonatomic,__weak) UIView * nativeAdView;                                     //@synthesize nativeAdView=_nativeAdView - In the implementation block
@property (nonatomic,retain) NSHashTable * clickableViews;                                     //@synthesize clickableViews=_clickableViews - In the implementation block
@property (assign,nonatomic) BOOL viewabilityValidatorDisabled;                                //@synthesize viewabilityValidatorDisabled=_viewabilityValidatorDisabled - In the implementation block
@property (assign,getter=shouldBypassValidation,nonatomic) BOOL bypassValidation;              //@synthesize bypassValidation=_bypassValidation - In the implementation block
@property (nonatomic,copy) id onImpression;                                                    //@synthesize onImpression=_onImpression - In the implementation block
@property (nonatomic,copy) id onClick;                                                         //@synthesize onClick=_onClick - In the implementation block
@property (nonatomic,copy) id onVideoPlay;                                                     //@synthesize onVideoPlay=_onVideoPlay - In the implementation block
@property (nonatomic,copy) id onVideoTime;                                                     //@synthesize onVideoTime=_onVideoTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)unregisterOutstandingRequest:(id)arg1 ;
+(id)viewToNativeAdMap;
+(id)fakeNativeAd;
+(void)registerOutstandingRequest:(id)arg1 ;
-(void)logImpression;
-(void)checkManualLoggingEligibility;
-(id)getManualLoggingExtraData;
-(void)handleClickWithViewController:(id)arg1 ;
-(id)getExternalLoggingExtraDataWithSource:(id)arg1 ;
-(void)logExternalImpressionFromSource:(id)arg1 ;
-(void)handleExternalClickWithViewController:(id)arg1 fromSource:(id)arg2 ;
-(id)multiProductAdContent;
-(BOOL)autoPlayEnabled;
-(id)videoPlayReportTime;
-(void)logVideoPlayWithInlineView:(BOOL)arg1 withAutoplay:(BOOL)arg2 ;
-(void)logVideoTime:(double)arg1 withInlineView:(BOOL)arg2 withAutoplay:(BOOL)arg3 ;
-(id)videoURL;
-(void)loadAd;
-(NSString *)callToAction;
-(id)initWithPlacementID:(id)arg1 ;
-(NSString *)socialContext;
-(void)registerViewForInteraction:(id)arg1 withViewController:(id)arg2 withClickableViews:(id)arg3 ;
-(void)setPlacementID:(NSString *)arg1 ;
-(NSString *)placementID;
-(BOOL)isAdValid;
-(void)registerViewForInteraction:(id)arg1 withViewController:(id)arg2 ;
-(void)unregisterView;
-(void)setMediaCachePolicy:(long long)arg1 ;
-(void)setAdProvider:(FBAdProvider *)arg1 ;
-(FBAdProvider *)adProvider;
-(long long)mediaCachePolicy;
-(id)initWithPlacementID:(id)arg1 adProvider:(id)arg2 ;
-(BOOL)viewDidAppearOnScreen;
-(FBAdViewabilityValidator *)viewabilityValidator;
-(void)setViewabilityValidator:(FBAdViewabilityValidator *)arg1 ;
-(long long)minViewabilityPercentage;
-(void)setMinViewabilityPercentage:(long long)arg1 ;
-(void)setBypassValidation:(BOOL)arg1 ;
-(void)unregisterViewInternal;
-(id)onImpression;
-(id)onClick;
-(id)onVideoPlay;
-(id)onVideoTime;
-(void)populateFromDataModel:(id)arg1 minViewability:(long long)arg2 onImpression:(/*^block*/id)arg3 onClick:(/*^block*/id)arg4 onVideoPlay:(/*^block*/id)arg5 onVideoTime:(/*^block*/id)arg6 ;
-(BOOL)hasCalledLoadAd;
-(void)setHasCalledLoadAd:(BOOL)arg1 ;
-(void)loadAdInternal;
-(void)setLoadAdStartTime:(NSDate *)arg1 ;
-(void)setAdController:(FBDisplayAdController *)arg1 ;
-(FBDisplayAdController *)adController;
-(void)setDataModel:(FBNativeAdDataModel *)arg1 ;
-(void)setAdChoicesIcon:(FBAdImage *)arg1 ;
-(void)setAdChoicesLinkURL:(NSURL *)arg1 ;
-(NSString *)adChoicesText;
-(void)setAdChoicesText:(NSString *)arg1 ;
-(void)setAdViewAttributes:(FBNativeAdViewAttributes *)arg1 ;
-(void)setOnImpression:(id)arg1 ;
-(void)setOnClick:(id)arg1 ;
-(void)setOnVideoPlay:(id)arg1 ;
-(void)setOnVideoTime:(id)arg1 ;
-(NSDate *)loadAdStartTime;
-(void)setViewabilityValidatorDisabled:(BOOL)arg1 ;
-(BOOL)shouldBypassValidation;
-(BOOL)viewabilityValidatorDisabled;
-(void)attachTapGestureRecognizer:(id)arg1 ;
-(void)detachTapGestureRecognizers;
-(id)generateLoggingDataWithExtraData:(id)arg1 ;
-(BOOL)isHScroll;
-(BOOL)usedByMediaView;
-(NSDictionary *)mediaViewConfiguration;
-(id)generateViewLogging;
-(id)generateViewSnapshot;
-(id)generateLoggingWithView:(id)arg1 withClickableViews:(id)arg2 ;
-(id)loggingDataForView:(id)arg1 withSubviews:(BOOL)arg2 ;
-(id)generateViewSnapshotData;
-(id)generateTapLoggingWithLocation:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(BOOL)hasBeenUsed;
-(void)setHasBeenUsed:(BOOL)arg1 ;
-(id)generateLoggingData;
-(id)generateViewPostData;
-(void)displayAdControllerLoaded:(id)arg1 ;
-(void)displayAdControllerStopped:(id)arg1 ;
-(void)displayAdController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)displayAdController:(id)arg1 presentedData:(id)arg2 onImpression:(/*^block*/id)arg3 onClick:(/*^block*/id)arg4 onVideoPlay:(/*^block*/id)arg5 onVideoTime:(/*^block*/id)arg6 ;
-(void)displayAdControllerImpression:(id)arg1 ;
-(void)displayAdController:(id)arg1 clickThruWithURL:(id)arg2 ;
-(void)displayAdControllerUserClosed:(id)arg1 ;
-(void)disableViewabilityValidator;
-(void)setIsHScroll:(BOOL)arg1 ;
-(FBNativeAdViewAttributes *)adViewAttributes;
-(FBAdImage *)adChoicesIcon;
-(NSURL *)adChoicesLinkURL;
-(void)setClickableViews:(NSHashTable *)arg1 ;
-(NSHashTable *)clickableViews;
-(void)setUsedByMediaView:(BOOL)arg1 ;
-(void)setMediaViewConfiguration:(NSDictionary *)arg1 ;
-(void)handleTap:(id)arg1 withEvent:(id)arg2 ;
-(void)setNativeAdView:(UIView *)arg1 ;
-(UIView *)nativeAdView;
-(BOOL)isRegistered;
-(id)init;
-(void)setDelegate:(id<FBNativeAdDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNativeAdDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(NSString *)title;
-(NSHashTable *)gestureRecognizers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGestureRecognizers:(NSHashTable *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(NSString *)body;
-(NSString *)subtitle;
-(FBAdImage *)icon;
-(void)handleTap:(id)arg1 ;
-(FBAdStarRating)starRating;
-(FBAdImage *)coverImage;
-(FBNativeAdDataModel *)dataModel;
-(void)used;
@end


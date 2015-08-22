/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GADMRAIDEventHandling;
#import <SportyTrader/SportyTrader-Structs.h>
@class NSMutableSet, GADStatisticDictionary, NSURL, NSString, NSDictionary, GADSwipeToViewControllerConfigurations, NSSet;

@interface GADAd : NSObject {

	NSMutableSet* _clickURLs;
	NSMutableSet* _impressionURLs;
	NSMutableSet* _manualImpressionURLs;
	BOOL _scrollEnabled;
	BOOL _hasAdNetworkJavaScript;
	GADStatisticDictionary* _statistics;
	NSURL* _adBaseURL;
	NSString* _adHTML;
	NSURL* _adURL;
	NSDictionary* _responseHeaders;
	NSDictionary* _activeViewConfigurations;
	GADSwipeToViewControllerConfigurations* _swipeToViewControllerConfigurations;
	unsigned long long _responseType;
	id<GADMRAIDEventHandling> _MRAIDEventHandler;
	double _reloadInterval;
	unsigned long long _supportedOrientations;
	NSString* _debugDialog;
	NSString* _customAdSizeString;
	NSURL* _adNetworkPassbackURL;
	GADAdSize _size;

}

@property (nonatomic,retain) GADStatisticDictionary * statistics;                                                       //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,copy) NSURL * adBaseURL;                                                                           //@synthesize adBaseURL=_adBaseURL - In the implementation block
@property (nonatomic,copy) NSString * adHTML;                                                                           //@synthesize adHTML=_adHTML - In the implementation block
@property (nonatomic,copy) NSURL * adURL;                                                                               //@synthesize adURL=_adURL - In the implementation block
@property (nonatomic,copy) NSDictionary * responseHeaders;                                                              //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,copy,readonly) NSSet * clickURLs;                                                                  //@synthesize clickURLs=_clickURLs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * impressionURLs;                                                             //@synthesize impressionURLs=_impressionURLs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * manualImpressionURLs;                                                       //@synthesize manualImpressionURLs=_manualImpressionURLs - In the implementation block
@property (nonatomic,copy) NSDictionary * activeViewConfigurations;                                                     //@synthesize activeViewConfigurations=_activeViewConfigurations - In the implementation block
@property (nonatomic,retain) GADSwipeToViewControllerConfigurations * swipeToViewControllerConfigurations;              //@synthesize swipeToViewControllerConfigurations=_swipeToViewControllerConfigurations - In the implementation block
@property (assign,nonatomic) unsigned long long responseType;                                                           //@synthesize responseType=_responseType - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled;                                                 //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<GADMRAIDEventHandling> MRAIDEventHandler;                                        //@synthesize MRAIDEventHandler=_MRAIDEventHandler - In the implementation block
@property (assign,nonatomic) GADAdSize size;                                                                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double reloadInterval;                                                                     //@synthesize reloadInterval=_reloadInterval - In the implementation block
@property (assign,nonatomic) unsigned long long supportedOrientations;                                                  //@synthesize supportedOrientations=_supportedOrientations - In the implementation block
@property (nonatomic,copy) NSString * debugDialog;                                                                      //@synthesize debugDialog=_debugDialog - In the implementation block
@property (nonatomic,copy) NSString * customAdSizeString;                                                               //@synthesize customAdSizeString=_customAdSizeString - In the implementation block
@property (nonatomic,readonly) BOOL hasAdNetworkJavaScript;                                                             //@synthesize hasAdNetworkJavaScript=_hasAdNetworkJavaScript - In the implementation block
@property (nonatomic,copy,readonly) NSURL * adNetworkPassbackURL;                                                       //@synthesize adNetworkPassbackURL=_adNetworkPassbackURL - In the implementation block
-(NSString *)adHTML;
-(void)setAdURL:(NSURL *)arg1 ;
-(id<GADMRAIDEventHandling>)MRAIDEventHandler;
-(BOOL)hasAdNetworkJavaScript;
-(void)setReloadInterval:(double)arg1 ;
-(double)reloadInterval;
-(NSString *)customAdSizeString;
-(NSString *)debugDialog;
-(NSURL *)adBaseURL;
-(NSSet *)clickURLs;
-(NSSet *)impressionURLs;
-(void)removeAllImpressionURLs;
-(NSSet *)manualImpressionURLs;
-(void)removeAllManualImpressionURLs;
-(NSURL *)adURL;
-(void)addClickURLsFromArray:(id)arg1 ;
-(void)addImpressionURLsFromArray:(id)arg1 ;
-(void)addManualImpressionURLsFromArray:(id)arg1 ;
-(void)setActiveViewConfigurations:(NSDictionary *)arg1 ;
-(void)setDebugDialog:(NSString *)arg1 ;
-(void)setCustomAdSizeString:(NSString *)arg1 ;
-(void)setSwipeToViewControllerConfigurations:(GADSwipeToViewControllerConfigurations *)arg1 ;
-(void)setAdHTML:(NSString *)arg1 ;
-(void)setAdBaseURL:(NSURL *)arg1 ;
-(void)setMRAIDEventHandler:(id<GADMRAIDEventHandling>)arg1 ;
-(NSDictionary *)activeViewConfigurations;
-(GADSwipeToViewControllerConfigurations *)swipeToViewControllerConfigurations;
-(NSURL *)adNetworkPassbackURL;
-(GADAdSize)size;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)isScrollEnabled;
-(void)setSize:(GADAdSize)arg1 ;
-(void)setSupportedOrientations:(unsigned long long)arg1 ;
-(unsigned long long)supportedOrientations;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)responseHeaders;
-(GADStatisticDictionary *)statistics;
-(void)setResponseType:(unsigned long long)arg1 ;
-(void)setStatistics:(GADStatisticDictionary *)arg1 ;
-(unsigned long long)responseType;
@end

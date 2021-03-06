/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/GSAdModel.h>

@interface GSFullscreenAd : GSAdModel {

	BOOL m_lockedOrientation;
	int m_gsOrientation;
	long long m_interfaceOrientation;
	BOOL m_isDisplayingBrowser;
	BOOL _didBeginNotificationUpdates;
	BOOL _didDisplay;

}

@property (readonly) BOOL lockedOrientation; 
@property (readonly) int gsOrientation; 
@property (readonly) long long interfaceOrientation; 
@property (readonly) BOOL isDisplayingBrowser; 
@property (assign,nonatomic) BOOL didBeginNotificationUpdates;              //@synthesize didBeginNotificationUpdates=_didBeginNotificationUpdates - In the implementation block
@property (assign,nonatomic) BOOL didDisplay;                               //@synthesize didDisplay=_didDisplay - In the implementation block
-(BOOL)displayFromViewController:(id)arg1 ;
-(BOOL)sendFetchDidFailNotificationWithError:(int)arg1 ;
-(void)applicationDidLoadExternalAppURL;
-(BOOL)sendFetchDidSucceedNotification;
-(BOOL)sendAdClickedThroughNotification;
-(void)clickthroughToBrowser:(id)arg1 ;
-(void)presentClickthroughViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissClickthroughViewController;
-(void)dismissSocialViewController;
-(void)dismissBrowserAnimated:(BOOL)arg1 ;
-(void)updateOrientationPropertiesWithAllowOrientationChange:(id)arg1 ForceOrientation:(id)arg2 ;
-(void)startObservingOrientationChanges;
-(void)setDidBeginNotificationUpdates:(BOOL)arg1 ;
-(BOOL)didDisplay;
-(void)setDidDisplay:(BOOL)arg1 ;
-(BOOL)didBeginNotificationUpdates;
-(BOOL)lockedOrientation;
-(int)gsOrientation;
-(id)initWithDelegate:(id)arg1 GUID:(id)arg2 ;
-(void)setFetchAllowed;
-(void)setThrottleTimeout:(long long)arg1 ;
-(BOOL)isDisplayingBrowser;
-(BOOL)sendWillDismissModalViewControllerNotification;
-(void)didChangeToInterfaceOrientation:(long long)arg1 gsOrientation:(int)arg2 ;
-(void)useCamera:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)interfaceOrientation;
-(void)setOrientation:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)fetch;
-(void)orientationChanged:(id)arg1 ;
-(void)playVideo:(id)arg1 ;
-(void)lockOrientation;
@end


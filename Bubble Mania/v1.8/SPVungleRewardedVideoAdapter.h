/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/SPRewardedVideoNetworkAdapter.h>
#import <BubbleMania/VungleSDKDelegate.h>

@protocol SPRewardedVideoNetworkAdapterDelegate;
@class SPVungleNetwork, UIViewController, NSString;

@interface SPVungleRewardedVideoAdapter : NSObject <SPRewardedVideoNetworkAdapter, VungleSDKDelegate> {

	BOOL _videoDidPlayFull;
	BOOL _videoAdIsClosed;
	id<SPRewardedVideoNetworkAdapterDelegate> delegate;
	SPVungleNetwork* _network;
	UIViewController* _parent;

}

@property (assign,nonatomic) SPVungleNetwork * network;                             //@synthesize network=_network - In the implementation block
@property (assign) BOOL videoDidPlayFull;                                           //@synthesize videoDidPlayFull=_videoDidPlayFull - In the implementation block
@property (assign) BOOL videoAdIsClosed;                                            //@synthesize videoAdIsClosed=_videoAdIsClosed - In the implementation block
@property (nonatomic,retain) UIViewController * parent;                             //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<SPRewardedVideoNetworkAdapterDelegate> delegate; 
-(void)setVideoDidPlayFull:(BOOL)arg1 ;
-(void)setVideoAdIsClosed:(BOOL)arg1 ;
-(BOOL)videoDidPlayFull;
-(void)reportAdDidClose;
-(BOOL)videoAdIsClosed;
-(BOOL)startAdapterWithDictionary:(id)arg1 ;
-(void)checkAvailability;
-(void)playVideoWithParentViewController:(id)arg1 ;
-(void)vungleSDKwillShowAd;
-(void)vungleSDKwillCloseAdWithViewInfo:(id)arg1 willPresentProductSheet:(BOOL)arg2 ;
-(void)vungleSDKwillCloseProductSheet:(id)arg1 ;
-(id)networkName;
-(void)setDelegate:(id<SPRewardedVideoNetworkAdapterDelegate>)arg1 ;
-(id<SPRewardedVideoNetworkAdapterDelegate>)delegate;
-(SPVungleNetwork *)network;
-(void)setNetwork:(SPVungleNetwork *)arg1 ;
-(UIViewController *)parent;
-(void)setParent:(UIViewController *)arg1 ;
@end

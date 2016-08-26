/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExperimentContext.h>

@interface FBFNFPlayerExperimentContext : FBExperimentContext {

	BOOL _livestreamEnabled;
	BOOL _livestreamEnabledWifiOnly;
	BOOL _livestreamDashEnabled;
	BOOL _vodDashEnabled;
	BOOL _filterByIndex;
	BOOL _rtmpSendPauseOnAssetLoaded;
	BOOL _rtmpPrefetchEnabled;
	BOOL _rtmpPrefetchEnabledOnVideoHome;
	BOOL _rtmpPrefetchEnabledOnNotifications;
	BOOL _processRTMPDryCommands;
	BOOL _rtmpShouldReconnectOnError;
	BOOL _rtmpShouldReconnectOnErrorRepeatedly;
	BOOL _rtmpDelayServerPause;
	BOOL _rtmpEnablePreconnect;
	BOOL _dashLivePrefetchEnabled;
	BOOL _dashLivePrefetchEnabledOnVideoHome;
	BOOL _vodDashPrefetchEnabled;
	BOOL _abrFilterSizeScreen;
	BOOL _localFileEnabled;
	BOOL _offMainThreadRendering;
	BOOL _is360Enabled;
	BOOL _seamlessLoopEnabled;
	BOOL _vodEnabled;
	unsigned _rtmpSendPauseDelayInMs;
	unsigned _rtmpMaxBufferSizeInMs;
	unsigned _rtmpSendPauseDelayOnPrefetchInMs;
	unsigned _rtmpSendPauseDelayOnNotificationPrefetchInMs;
	unsigned _rtmpPrefetchDelayBeforeDealloc;
	unsigned _rtmpNotificationPrefetchDelayBeforeDealloc;
	unsigned _rtmpNotificationDelayBeforeIgnore;
	unsigned _rtmpServerBufferingInMs;
	int _ptsJumpTimeInMs;
	unsigned _dashLivePrefetchDelayBeforeDealloc;
	unsigned _dashNotificationDelayBeforeIgnore;
	unsigned _dashLiveSegmentsFromEndToStart;
	int _dashLiveStaleMpdUpdatesThreshold;
	unsigned _abrSelectorType;
	double _fetchBufferSizeInSeconds;
	double _unstallBufferSizeInSeconds;
	double _stallBufferSizeInSeconds;
	double _firstFetchSizeInSeconds;
	double _fetchBufferMultiplier;
	double _unstallBufferMultiplier;
	unsigned long long _videoNetworkerInMemoryCacheInBytes;
	unsigned long long _videoNetworkerPrefetchInMemoryCacheInBytes;
	double _rtmpStallBufferInSeconds;
	double _rtmpUnstallBufferInSeconds;
	double _rtmpInitialReconnectDelayS;
	double _rtmpMaximumReconnectDelayS;
	double _dashLiveFetchBufferSizeInSeconds;
	double _dashLiveUnstallBufferSizeInSeconds;
	double _dashLiveStallBufferSizeInSeconds;
	double _dashLiveFirstFetchSizeInSeconds;
	double _dashLiveFetchBufferMultiplier;
	double _dashLiveUnstallBufferMultiplier;
	double _dashVodFetchBufferSizeInSeconds;
	double _dashVodUnstallBufferSizeInSeconds;
	double _dashVodStallBufferSizeInSeconds;
	double _dashVodFirstFetchSizeInSeconds;
	double _dashVodFetchBufferMultiplier;
	double _dashVodUnstallBufferMultiplier;
	double _abrSelectorBandwidthFraction;
	double _renderingThreadPriority;

}

@property (nonatomic,readonly) BOOL vodEnabled;                                                            //@synthesize vodEnabled=_vodEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isVodEnabled; 
@property (nonatomic,readonly) BOOL livestreamEnabled;                                                     //@synthesize livestreamEnabled=_livestreamEnabled - In the implementation block
@property (nonatomic,readonly) BOOL livestreamEnabledWifiOnly;                                             //@synthesize livestreamEnabledWifiOnly=_livestreamEnabledWifiOnly - In the implementation block
@property (nonatomic,readonly) BOOL livestreamDashEnabled;                                                 //@synthesize livestreamDashEnabled=_livestreamDashEnabled - In the implementation block
@property (nonatomic,readonly) BOOL vodDashEnabled;                                                        //@synthesize vodDashEnabled=_vodDashEnabled - In the implementation block
@property (nonatomic,readonly) double fetchBufferSizeInSeconds;                                            //@synthesize fetchBufferSizeInSeconds=_fetchBufferSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double unstallBufferSizeInSeconds;                                          //@synthesize unstallBufferSizeInSeconds=_unstallBufferSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double stallBufferSizeInSeconds;                                            //@synthesize stallBufferSizeInSeconds=_stallBufferSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double firstFetchSizeInSeconds;                                             //@synthesize firstFetchSizeInSeconds=_firstFetchSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double fetchBufferMultiplier;                                               //@synthesize fetchBufferMultiplier=_fetchBufferMultiplier - In the implementation block
@property (nonatomic,readonly) double unstallBufferMultiplier;                                             //@synthesize unstallBufferMultiplier=_unstallBufferMultiplier - In the implementation block
@property (nonatomic,readonly) unsigned long long videoNetworkerInMemoryCacheInBytes;                      //@synthesize videoNetworkerInMemoryCacheInBytes=_videoNetworkerInMemoryCacheInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long videoNetworkerPrefetchInMemoryCacheInBytes;              //@synthesize videoNetworkerPrefetchInMemoryCacheInBytes=_videoNetworkerPrefetchInMemoryCacheInBytes - In the implementation block
@property (nonatomic,readonly) BOOL filterByIndex;                                                         //@synthesize filterByIndex=_filterByIndex - In the implementation block
@property (nonatomic,readonly) BOOL rtmpSendPauseOnAssetLoaded;                                            //@synthesize rtmpSendPauseOnAssetLoaded=_rtmpSendPauseOnAssetLoaded - In the implementation block
@property (nonatomic,readonly) unsigned rtmpSendPauseDelayInMs;                                            //@synthesize rtmpSendPauseDelayInMs=_rtmpSendPauseDelayInMs - In the implementation block
@property (nonatomic,readonly) unsigned rtmpMaxBufferSizeInMs;                                             //@synthesize rtmpMaxBufferSizeInMs=_rtmpMaxBufferSizeInMs - In the implementation block
@property (nonatomic,readonly) BOOL rtmpPrefetchEnabled;                                                   //@synthesize rtmpPrefetchEnabled=_rtmpPrefetchEnabled - In the implementation block
@property (nonatomic,readonly) BOOL rtmpPrefetchEnabledOnVideoHome;                                        //@synthesize rtmpPrefetchEnabledOnVideoHome=_rtmpPrefetchEnabledOnVideoHome - In the implementation block
@property (nonatomic,readonly) BOOL rtmpPrefetchEnabledOnNotifications;                                    //@synthesize rtmpPrefetchEnabledOnNotifications=_rtmpPrefetchEnabledOnNotifications - In the implementation block
@property (nonatomic,readonly) unsigned rtmpSendPauseDelayOnPrefetchInMs;                                  //@synthesize rtmpSendPauseDelayOnPrefetchInMs=_rtmpSendPauseDelayOnPrefetchInMs - In the implementation block
@property (nonatomic,readonly) unsigned rtmpSendPauseDelayOnNotificationPrefetchInMs;                      //@synthesize rtmpSendPauseDelayOnNotificationPrefetchInMs=_rtmpSendPauseDelayOnNotificationPrefetchInMs - In the implementation block
@property (nonatomic,readonly) BOOL processRTMPDryCommands;                                                //@synthesize processRTMPDryCommands=_processRTMPDryCommands - In the implementation block
@property (nonatomic,readonly) unsigned rtmpPrefetchDelayBeforeDealloc;                                    //@synthesize rtmpPrefetchDelayBeforeDealloc=_rtmpPrefetchDelayBeforeDealloc - In the implementation block
@property (nonatomic,readonly) unsigned rtmpNotificationPrefetchDelayBeforeDealloc;                        //@synthesize rtmpNotificationPrefetchDelayBeforeDealloc=_rtmpNotificationPrefetchDelayBeforeDealloc - In the implementation block
@property (nonatomic,readonly) unsigned rtmpNotificationDelayBeforeIgnore;                                 //@synthesize rtmpNotificationDelayBeforeIgnore=_rtmpNotificationDelayBeforeIgnore - In the implementation block
@property (nonatomic,readonly) unsigned rtmpServerBufferingInMs;                                           //@synthesize rtmpServerBufferingInMs=_rtmpServerBufferingInMs - In the implementation block
@property (nonatomic,readonly) double rtmpStallBufferInSeconds;                                            //@synthesize rtmpStallBufferInSeconds=_rtmpStallBufferInSeconds - In the implementation block
@property (nonatomic,readonly) double rtmpUnstallBufferInSeconds;                                          //@synthesize rtmpUnstallBufferInSeconds=_rtmpUnstallBufferInSeconds - In the implementation block
@property (nonatomic,readonly) BOOL rtmpShouldReconnectOnError;                                            //@synthesize rtmpShouldReconnectOnError=_rtmpShouldReconnectOnError - In the implementation block
@property (nonatomic,readonly) BOOL rtmpShouldReconnectOnErrorRepeatedly;                                  //@synthesize rtmpShouldReconnectOnErrorRepeatedly=_rtmpShouldReconnectOnErrorRepeatedly - In the implementation block
@property (nonatomic,readonly) double rtmpInitialReconnectDelayS;                                          //@synthesize rtmpInitialReconnectDelayS=_rtmpInitialReconnectDelayS - In the implementation block
@property (nonatomic,readonly) double rtmpMaximumReconnectDelayS;                                          //@synthesize rtmpMaximumReconnectDelayS=_rtmpMaximumReconnectDelayS - In the implementation block
@property (nonatomic,readonly) BOOL rtmpDelayServerPause;                                                  //@synthesize rtmpDelayServerPause=_rtmpDelayServerPause - In the implementation block
@property (nonatomic,readonly) int ptsJumpTimeInMs;                                                        //@synthesize ptsJumpTimeInMs=_ptsJumpTimeInMs - In the implementation block
@property (nonatomic,readonly) BOOL rtmpEnablePreconnect;                                                  //@synthesize rtmpEnablePreconnect=_rtmpEnablePreconnect - In the implementation block
@property (nonatomic,readonly) BOOL dashLivePrefetchEnabled;                                               //@synthesize dashLivePrefetchEnabled=_dashLivePrefetchEnabled - In the implementation block
@property (nonatomic,readonly) BOOL dashLivePrefetchEnabledOnVideoHome;                                    //@synthesize dashLivePrefetchEnabledOnVideoHome=_dashLivePrefetchEnabledOnVideoHome - In the implementation block
@property (nonatomic,readonly) unsigned dashLivePrefetchDelayBeforeDealloc;                                //@synthesize dashLivePrefetchDelayBeforeDealloc=_dashLivePrefetchDelayBeforeDealloc - In the implementation block
@property (nonatomic,readonly) unsigned dashNotificationDelayBeforeIgnore;                                 //@synthesize dashNotificationDelayBeforeIgnore=_dashNotificationDelayBeforeIgnore - In the implementation block
@property (nonatomic,readonly) BOOL vodDashPrefetchEnabled;                                                //@synthesize vodDashPrefetchEnabled=_vodDashPrefetchEnabled - In the implementation block
@property (nonatomic,readonly) unsigned dashLiveSegmentsFromEndToStart;                                    //@synthesize dashLiveSegmentsFromEndToStart=_dashLiveSegmentsFromEndToStart - In the implementation block
@property (nonatomic,readonly) double dashLiveFetchBufferSizeInSeconds;                                    //@synthesize dashLiveFetchBufferSizeInSeconds=_dashLiveFetchBufferSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double dashLiveUnstallBufferSizeInSeconds;                                  //@synthesize dashLiveUnstallBufferSizeInSeconds=_dashLiveUnstallBufferSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double dashLiveStallBufferSizeInSeconds;                                    //@synthesize dashLiveStallBufferSizeInSeconds=_dashLiveStallBufferSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double dashLiveFirstFetchSizeInSeconds;                                     //@synthesize dashLiveFirstFetchSizeInSeconds=_dashLiveFirstFetchSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double dashLiveFetchBufferMultiplier;                                       //@synthesize dashLiveFetchBufferMultiplier=_dashLiveFetchBufferMultiplier - In the implementation block
@property (nonatomic,readonly) double dashLiveUnstallBufferMultiplier;                                     //@synthesize dashLiveUnstallBufferMultiplier=_dashLiveUnstallBufferMultiplier - In the implementation block
@property (nonatomic,readonly) double dashVodFetchBufferSizeInSeconds;                                     //@synthesize dashVodFetchBufferSizeInSeconds=_dashVodFetchBufferSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double dashVodUnstallBufferSizeInSeconds;                                   //@synthesize dashVodUnstallBufferSizeInSeconds=_dashVodUnstallBufferSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double dashVodStallBufferSizeInSeconds;                                     //@synthesize dashVodStallBufferSizeInSeconds=_dashVodStallBufferSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double dashVodFirstFetchSizeInSeconds;                                      //@synthesize dashVodFirstFetchSizeInSeconds=_dashVodFirstFetchSizeInSeconds - In the implementation block
@property (nonatomic,readonly) double dashVodFetchBufferMultiplier;                                        //@synthesize dashVodFetchBufferMultiplier=_dashVodFetchBufferMultiplier - In the implementation block
@property (nonatomic,readonly) double dashVodUnstallBufferMultiplier;                                      //@synthesize dashVodUnstallBufferMultiplier=_dashVodUnstallBufferMultiplier - In the implementation block
@property (nonatomic,readonly) int dashLiveStaleMpdUpdatesThreshold;                                       //@synthesize dashLiveStaleMpdUpdatesThreshold=_dashLiveStaleMpdUpdatesThreshold - In the implementation block
@property (nonatomic,readonly) unsigned abrSelectorType;                                                   //@synthesize abrSelectorType=_abrSelectorType - In the implementation block
@property (nonatomic,readonly) double abrSelectorBandwidthFraction;                                        //@synthesize abrSelectorBandwidthFraction=_abrSelectorBandwidthFraction - In the implementation block
@property (nonatomic,readonly) BOOL abrFilterSizeScreen;                                                   //@synthesize abrFilterSizeScreen=_abrFilterSizeScreen - In the implementation block
@property (nonatomic,readonly) BOOL localFileEnabled;                                                      //@synthesize localFileEnabled=_localFileEnabled - In the implementation block
@property (nonatomic,readonly) BOOL offMainThreadRendering;                                                //@synthesize offMainThreadRendering=_offMainThreadRendering - In the implementation block
@property (nonatomic,readonly) double renderingThreadPriority;                                             //@synthesize renderingThreadPriority=_renderingThreadPriority - In the implementation block
@property (nonatomic,readonly) BOOL is360Enabled;                                                          //@synthesize is360Enabled=_is360Enabled - In the implementation block
@property (nonatomic,readonly) BOOL seamlessLoopEnabled;                                                   //@synthesize seamlessLoopEnabled=_seamlessLoopEnabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(id)rtmpURLWithServerSideBuffering:(id)arg1 serverSideBuffering:(unsigned)arg2 ;
-(FNFRtmpAssetConfig)configForPrefetching;
-(FNFRtmpAssetConfig)configForNotificationPrefetching;
-(FNFRtmpAssetConfig)configForPrepareToPlay;
-(FNFDashAssetConfig)configForLiveDash;
-(FNFDashAssetConfig)configForVodDash;
-(BOOL)vodDashEnabled;
-(BOOL)vodDashPrefetchEnabled;
-(BOOL)livestreamDashEnabled;
-(BOOL)livestreamEnabled;
-(unsigned)rtmpPrefetchDelayBeforeDealloc;
-(BOOL)dashLivePrefetchEnabled;
-(unsigned)dashNotificationDelayBeforeIgnore;
-(BOOL)rtmpPrefetchEnabledOnNotifications;
-(unsigned)rtmpNotificationDelayBeforeIgnore;
-(unsigned)rtmpNotificationPrefetchDelayBeforeDealloc;
-(BOOL)isVodEnabled;
-(BOOL)livestreamEnabledWifiOnly;
-(BOOL)is360Enabled;
-(BOOL)localFileEnabled;
-(BOOL)dashLivePrefetchEnabledOnVideoHome;
-(BOOL)rtmpPrefetchEnabledOnVideoHome;
-(BOOL)rtmpPrefetchEnabled;
-(unsigned)rtmpServerBufferingInMs;
-(BOOL)rtmpEnablePreconnect;
-(double)fetchBufferSizeInSeconds;
-(double)unstallBufferSizeInSeconds;
-(double)stallBufferSizeInSeconds;
-(double)firstFetchSizeInSeconds;
-(double)fetchBufferMultiplier;
-(double)unstallBufferMultiplier;
-(double)dashLiveFetchBufferSizeInSeconds;
-(double)dashLiveUnstallBufferSizeInSeconds;
-(double)dashLiveStallBufferSizeInSeconds;
-(double)dashLiveFirstFetchSizeInSeconds;
-(double)dashLiveFetchBufferMultiplier;
-(double)dashLiveUnstallBufferMultiplier;
-(unsigned)dashLiveSegmentsFromEndToStart;
-(int)dashLiveStaleMpdUpdatesThreshold;
-(double)abrSelectorBandwidthFraction;
-(BOOL)abrFilterSizeScreen;
-(double)dashVodFetchBufferSizeInSeconds;
-(double)dashVodUnstallBufferSizeInSeconds;
-(double)dashVodStallBufferSizeInSeconds;
-(double)dashVodFirstFetchSizeInSeconds;
-(double)dashVodFetchBufferMultiplier;
-(double)dashVodUnstallBufferMultiplier;
-(unsigned)abrSelectorType;
-(unsigned)rtmpMaxBufferSizeInMs;
-(unsigned)rtmpSendPauseDelayOnNotificationPrefetchInMs;
-(BOOL)processRTMPDryCommands;
-(BOOL)rtmpShouldReconnectOnError;
-(BOOL)rtmpShouldReconnectOnErrorRepeatedly;
-(double)rtmpInitialReconnectDelayS;
-(double)rtmpMaximumReconnectDelayS;
-(BOOL)rtmpDelayServerPause;
-(int)ptsJumpTimeInMs;
-(unsigned)rtmpSendPauseDelayOnPrefetchInMs;
-(BOOL)rtmpSendPauseOnAssetLoaded;
-(unsigned)rtmpSendPauseDelayInMs;
-(unsigned)dashLivePrefetchDelayBeforeDealloc;
-(BOOL)offMainThreadRendering;
-(double)renderingThreadPriority;
-(unsigned long long)videoNetworkerInMemoryCacheInBytes;
-(unsigned long long)videoNetworkerPrefetchInMemoryCacheInBytes;
-(BOOL)vodEnabled;
-(BOOL)filterByIndex;
-(double)rtmpStallBufferInSeconds;
-(double)rtmpUnstallBufferInSeconds;
-(BOOL)seamlessLoopEnabled;
@end

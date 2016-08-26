/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RTCVideoFilterHandler.h>

@class FBUserSession, FBFilterAssetManager, FBFilterAssetPack, FBVideoProcessor, NSString;

@interface FBWebRTCVideoFilterController : NSObject <RTCVideoFilterHandler> {

	FBUserSession* _userSession;
	FBFilterAssetManager* _assetManager;
	FBFilterAssetPack* _assetPack;
	FBVideoProcessor* _videoProcessor;
	unsigned long long _filterStartedTimeStamp;
	BOOL _filterEnabled;
	double _filteredDuration;

}

@property (assign,nonatomic) BOOL filterEnabled;                     //@synthesize filterEnabled=_filterEnabled - In the implementation block
@property (nonatomic,readonly) double filteredDuration;              //@synthesize filteredDuration=_filteredDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)filteredDuration;
-(void)_downloadAssetsIfNeeded;
-(void)_setCurrentFilter:(id)arg1 ;
-(opaqueCMSampleBufferRef)applyFilterToVideo:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(BOOL)filterEnabled;
-(BOOL)isFilterEnabled;
-(void)setFilterEnabled:(BOOL)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBProfileVideoUploadExperimentContext : FBExperimentContext {

	BOOL _enableStagingGround;
	BOOL _enableSilhouette;
	BOOL _enableProfileVideoReuseUpsell;
	BOOL _enableColorFilter;
	BOOL _enableStaticFilteredImage;
	BOOL _enableFrameSelection;

}

@property (nonatomic,readonly) BOOL enableStagingGround;                        //@synthesize enableStagingGround=_enableStagingGround - In the implementation block
@property (nonatomic,readonly) BOOL enableSilhouette;                           //@synthesize enableSilhouette=_enableSilhouette - In the implementation block
@property (nonatomic,readonly) BOOL enableProfileVideoReuseUpsell;              //@synthesize enableProfileVideoReuseUpsell=_enableProfileVideoReuseUpsell - In the implementation block
@property (nonatomic,readonly) BOOL enableColorFilter;                          //@synthesize enableColorFilter=_enableColorFilter - In the implementation block
@property (nonatomic,readonly) BOOL enableStaticFilteredImage;                  //@synthesize enableStaticFilteredImage=_enableStaticFilteredImage - In the implementation block
@property (nonatomic,readonly) BOOL enableFrameSelection;                       //@synthesize enableFrameSelection=_enableFrameSelection - In the implementation block
+(BOOL)profileVideoUploadFromCameraRollAllowedForSession:(id)arg1 ;
+(BOOL)liveCameraInMediaPickerAllowedForSession:(id)arg1 ;
+(BOOL)profileVideoUploadUseNewTranscoderAllowedForSession:(id)arg1 ;
+(BOOL)profileVideoUploadAllowedForSession:(id)arg1 ;
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)enableSilhouette;
-(BOOL)enableStagingGround;
-(BOOL)enableProfileVideoReuseUpsell;
-(BOOL)enableColorFilter;
-(BOOL)enableStaticFilteredImage;
-(BOOL)enableFrameSelection;
@end

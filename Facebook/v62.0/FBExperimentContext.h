/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBExperimentManager, FBMobileConfigContextImpl;

@interface FBExperimentContext : NSObject {

	FBExperimentManager* _experimentManager;
	FBMobileConfigContextImpl* _mobileConfigContext;

}

@property (assign,nonatomic,__weak) FBExperimentManager * experimentManager;                 //@synthesize experimentManager=_experimentManager - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextImpl * mobileConfigContext;              //@synthesize mobileConfigContext=_mobileConfigContext - In the implementation block
+(id)contextInSession:(id)arg1 ;
+(id)universeName;
+(id)tunneledContextInSession:(id)arg1 ;
+(id)parameterConfigurations;
+(id)contextWithExperimentManager:(id)arg1 ;
+(id)autoExposedContextInSession:(id)arg1 ;
+(id)autoExposedContextWithExperimentManager:(id)arg1 ;
+(BOOL)experimentOverridesEnforcedByBackingGatekeeper;
+(BOOL)invalidateSessionOnChange;
+(BOOL)clearCacheOnChange;
+(id)loggingModule;
+(BOOL)useExtendedTimeout;
+(id)configurationName;
-(FBExperimentManager *)experimentManager;
-(void)logExposure;
-(void)logEventWithType:(id)arg1 identifier:(id)arg2 extraData:(id)arg3 ;
-(void)logConversion;
-(void)setExperimentManager:(FBExperimentManager *)arg1 ;
-(void)logEventWithType:(id)arg1 ;
-(id)initWithMobileConfig:(id)arg1 ;
-(FBMobileConfigContextImpl *)mobileConfigContext;
@end

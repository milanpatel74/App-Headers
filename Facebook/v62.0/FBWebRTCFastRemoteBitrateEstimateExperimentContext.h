/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBWebRTCFastRemoteBitrateEstimateExperimentContext : FBExperimentContext {

	int _mode;
	int _br_increase;
	int _br_decrease;

}

@property (nonatomic,readonly) int mode;                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int br_increase;              //@synthesize br_increase=_br_increase - In the implementation block
@property (nonatomic,readonly) int br_decrease;              //@synthesize br_decrease=_br_decrease - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(int)br_increase;
-(int)br_decrease;
-(int)mode;
@end

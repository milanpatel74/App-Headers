/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBDiodeExperimentContext : FBExperimentContext {

	BOOL _shouldUseMessengerAppStoreURL;
	BOOL _shouldTriggerInstallWhenUserTapsOnDiodeImage;
	BOOL _shouldShowLearnMoreLink;
	unsigned long long _diodeInstallButtonColorScheme;
	unsigned long long _diodeInstallButtonSize;
	unsigned long long _diodeAppStoreIntegrationType;

}

@property (nonatomic,readonly) unsigned long long diodeInstallButtonColorScheme;               //@synthesize diodeInstallButtonColorScheme=_diodeInstallButtonColorScheme - In the implementation block
@property (nonatomic,readonly) unsigned long long diodeInstallButtonSize;                      //@synthesize diodeInstallButtonSize=_diodeInstallButtonSize - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseMessengerAppStoreURL;                             //@synthesize shouldUseMessengerAppStoreURL=_shouldUseMessengerAppStoreURL - In the implementation block
@property (nonatomic,readonly) unsigned long long diodeAppStoreIntegrationType;                //@synthesize diodeAppStoreIntegrationType=_diodeAppStoreIntegrationType - In the implementation block
@property (nonatomic,readonly) BOOL shouldTriggerInstallWhenUserTapsOnDiodeImage;              //@synthesize shouldTriggerInstallWhenUserTapsOnDiodeImage=_shouldTriggerInstallWhenUserTapsOnDiodeImage - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowLearnMoreLink;                                   //@synthesize shouldShowLearnMoreLink=_shouldShowLearnMoreLink - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(unsigned long long)diodeAppStoreIntegrationType;
-(BOOL)shouldUseMessengerAppStoreURL;
-(unsigned long long)diodeInstallButtonColorScheme;
-(unsigned long long)diodeInstallButtonSize;
-(BOOL)shouldTriggerInstallWhenUserTapsOnDiodeImage;
-(BOOL)shouldShowLearnMoreLink;
@end

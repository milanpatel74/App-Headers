/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBMomentsPhotoOverlayPromotionExperimentContext : FBExperimentContext {

	long long _impressionCap;
	long long _capWindowInHours;

}

@property (nonatomic,readonly) long long impressionCap;                 //@synthesize impressionCap=_impressionCap - In the implementation block
@property (nonatomic,readonly) long long capWindowInHours;              //@synthesize capWindowInHours=_capWindowInHours - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(long long)capWindowInHours;
-(long long)impressionCap;
@end

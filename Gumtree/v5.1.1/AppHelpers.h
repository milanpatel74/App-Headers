/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AppHelpers : NSObject
+(id)infoPlistDictionary;
+(id)sApplicationVersion;
+(id)sBuildNumber;
+(void)callPhoneWithNumber:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)sIsPhoneAvailable;
+(id)sApplicationBundleIdentifier;
+(id)sApplicationVersionWithBuildIdentifier:(BOOL)arg1 ;
+(id)sApplicationAPIVersion;
+(id)sApplicationDisplayName;
+(id)sApplicationSchemes;
+(id)sHardwarePlatform;
+(id)sSystemVersion;
+(void)callPhoneWithNumber:(id)arg1 forAd:(id)arg2 ;
+(void)openMapsAppForAd:(id)arg1 ;
+(void)openMapsAppForAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)openURLString:(id)arg1 fromController:(id)arg2 ;
+(BOOL)sIsCameraAvailable;
+(id)currentConnectionType;
+(void)sNetworkActivitySpinner:(BOOL)arg1 ;
+(id)currentOrientation;
@end

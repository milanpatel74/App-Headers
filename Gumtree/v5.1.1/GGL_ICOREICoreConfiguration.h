/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_PBGeneratedMessage.h>

@class NSString, GSDK_PBMutableArray, GGL_ICOREErrorInfo;

@interface GGL_ICOREICoreConfiguration : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasPodName; 
@property (assign,nonatomic) int podName; 
@property (assign,nonatomic) BOOL hasConfigurationType; 
@property (assign,nonatomic) int configurationType; 
@property (assign,nonatomic) BOOL hasVersionName; 
@property (nonatomic,retain) NSString * versionName; 
@property (assign,nonatomic) BOOL hasBuildNumber; 
@property (assign,nonatomic) long long buildNumber; 
@property (assign,nonatomic) BOOL hasBuildType; 
@property (assign,nonatomic) int buildType; 
@property (assign,nonatomic) BOOL hasPlistVersion; 
@property (nonatomic,retain) NSString * plistVersion; 
@property (assign,nonatomic) BOOL hasSdkServiceEnabledArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * sdkServiceEnabledArray; 
@property (assign,nonatomic) BOOL hasSdkServiceInstalledArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * sdkServiceInstalledArray; 
@property (assign,nonatomic) BOOL hasErrorInfo; 
@property (nonatomic,retain) GGL_ICOREErrorInfo * errorInfo; 
@property (assign,nonatomic) BOOL hasSubspecErrorInfoArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * subspecErrorInfoArray; 
@property (assign,nonatomic) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel; 
@property (assign,nonatomic) BOOL hasAppId; 
@property (nonatomic,retain) NSString * appId; 
@property (assign,nonatomic) BOOL hasProjectNumber; 
@property (assign,nonatomic) long long projectNumber; 
@property (assign,nonatomic) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId; 
@property (assign,nonatomic) BOOL hasClientId; 
@property (nonatomic,retain) NSString * clientId; 
@property (assign,nonatomic) BOOL hasInstall; 
@property (nonatomic,retain) NSString * install; 
+(id)descriptor;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RCTBundleURLProvider : NSObject

@property (nonatomic,copy) NSString * jsLocation; 
@property (assign,nonatomic) BOOL enableLiveReload; 
@property (assign,nonatomic) BOOL enableMinification; 
@property (assign,nonatomic) BOOL enableDev; 
+(id)jsBundleURLForBundleRoot:(id)arg1 packagerHost:(id)arg2 enableDev:(BOOL)arg3 enableMinification:(BOOL)arg4 ;
+(id)sharedSettings;
-(NSString *)jsLocation;
-(BOOL)enableDev;
-(BOOL)enableMinification;
-(id)jsBundleURLForBundleRoot:(id)arg1 fallbackResource:(id)arg2 ;
-(id)packagerServerURL;
-(void)settingsUpdated;
-(id)packagerServerHost;
-(void)updateValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)enableLiveReload;
-(void)setEnableDev:(BOOL)arg1 ;
-(void)setEnableLiveReload:(BOOL)arg1 ;
-(void)setJsLocation:(NSString *)arg1 ;
-(void)setEnableMinification:(BOOL)arg1 ;
-(id)init;
-(void)resetToDefaults;
-(void)setDefaults;
-(id)defaults;
@end

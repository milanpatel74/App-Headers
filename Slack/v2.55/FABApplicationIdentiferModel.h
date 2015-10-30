/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Slack/Slack-Structs.h>
@class NSDictionary, NSString, FABIcon;

@interface FABApplicationIdentiferModel : NSObject {

	NSDictionary* _architectureUUIDMap;
	NSString* _installID;
	FABIcon* _icon;
	NSString* _bundleIdentifier;
	NSString* _instanceIdentifier;
	SCD_Struct_FA48 _builtSDK;
	SCD_Struct_FA48 _minimumSDK;

}

@property (nonatomic,copy) NSDictionary * architectureUUIDMap;              //@synthesize architectureUUIDMap=_architectureUUIDMap - In the implementation block
@property (nonatomic,readonly) NSString * builtSDKString; 
@property (nonatomic,readonly) NSString * minimumSDKString; 
@property (nonatomic,readonly) NSString * installID;                        //@synthesize installID=_installID - In the implementation block
@property (nonatomic,readonly) FABIcon * icon;                              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * instanceIdentifier;                   //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FA48 builtSDK;                    //@synthesize builtSDK=_builtSDK - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FA48 minimumSDK;                  //@synthesize minimumSDK=_minimumSDK - In the implementation block
-(NSString *)installID;
-(NSString *)instanceIdentifier;
-(BOOL)computeExecutableInfo;
-(BOOL)computeInstanceIdentifier;
-(NSDictionary *)architectureUUIDMap;
-(id)initWithInstallID:(id)arg1 ;
-(NSString *)builtSDKString;
-(NSString *)minimumSDKString;
-(void)setArchitectureUUIDMap:(NSDictionary *)arg1 ;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(SCD_Struct_FA48)builtSDK;
-(SCD_Struct_FA48)minimumSDK;
-(NSString *)bundleIdentifier;
-(FABIcon *)icon;
@end

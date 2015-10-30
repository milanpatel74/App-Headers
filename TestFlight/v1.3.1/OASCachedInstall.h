/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OASObjectCacheObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OASApp, OASAppBuild, NSString, NSNumber, OASServerInstallResponse;

@interface OASCachedInstall : OASObjectCacheObject <NSCopying> {

	OASApp* _app;
	OASAppBuild* _appBuild;
	long long _previousInstallStatus;
	NSString* _bundleID;
	NSNumber* _percentComplete;
	long long _persistentIdentifier;
	/*^block*/id _completionBlock;
	NSString* _KBSync;
	OASServerInstallResponse* _serverInstallResponse;

}

@property (nonatomic,retain) OASApp * app;                                                  //@synthesize app=_app - In the implementation block
@property (nonatomic,retain) OASAppBuild * appBuild;                                        //@synthesize appBuild=_appBuild - In the implementation block
@property (assign,nonatomic) long long previousInstallStatus;                               //@synthesize previousInstallStatus=_previousInstallStatus - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * percentComplete;                                    //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) long long persistentIdentifier;                                //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,copy) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSString * KBSync;                                             //@synthesize KBSync=_KBSync - In the implementation block
@property (nonatomic,retain) OASServerInstallResponse * serverInstallResponse;              //@synthesize serverInstallResponse=_serverInstallResponse - In the implementation block
+(BOOL)insertObjectOnUpdate;
+(id)primaryKey;
+(id)objectType;
-(void)setAppBuild:(OASAppBuild *)arg1 ;
-(void)setPreviousInstallStatus:(long long)arg1 ;
-(void)setKBSync:(NSString *)arg1 ;
-(void)setServerInstallResponse:(OASServerInstallResponse *)arg1 ;
-(OASServerInstallResponse *)serverInstallResponse;
-(long long)previousInstallStatus;
-(OASAppBuild *)appBuild;
-(NSString *)KBSync;
-(NSString *)bundleID;
-(id)description;
-(NSNumber *)percentComplete;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPercentComplete:(NSNumber *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setApp:(OASApp *)arg1 ;
-(OASApp *)app;
-(long long)persistentIdentifier;
-(void)setPersistentIdentifier:(long long)arg1 ;
@end


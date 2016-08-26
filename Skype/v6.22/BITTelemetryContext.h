/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, BITPersistence, NSObject, BITApplication, BITDevice, BITSession, BITUser, BITInternal, BITOrderedDictionary;

@interface BITTelemetryContext : NSObject {

	NSString* _appIdentifier;
	BITPersistence* _persistence;
	NSObject*<OS_dispatch_queue> _operationsQueue;
	BITApplication* _application;
	BITDevice* _device;
	BITSession* _session;
	BITUser* _user;
	BITInternal* _internal;
	BITOrderedDictionary* _tags;

}

@property (nonatomic,retain) BITPersistence * persistence;                              //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,copy) NSString * appIdentifier;                                    //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> operationsQueue;              //@synthesize operationsQueue=_operationsQueue - In the implementation block
@property (nonatomic,readonly) BITApplication * application;                            //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) BITDevice * device;                                      //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) BITSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BITUser * user;                                          //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) BITInternal * internal;                                  //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) BITOrderedDictionary * tags;                               //@synthesize tags=_tags - In the implementation block
-(void)setOsName:(id)arg1 ;
-(void)setPersistence:(BITPersistence *)arg1 ;
-(void)setSdkVersion:(id)arg1 ;
-(id)loadUser;
-(id)newUser;
-(void)saveUser:(id)arg1 ;
-(id)initWithAppIdentifier:(id)arg1 persistence:(id)arg2 ;
-(id)anonymousUserId;
-(void)setAnonymousUserId:(id)arg1 ;
-(id)anonymousUserAquisitionDate;
-(void)setAnonymousUserAquisitionDate:(id)arg1 ;
-(id)isFirstSession;
-(void)setIsFirstSession:(id)arg1 ;
-(id)isNewSession;
-(void)setIsNewSession:(id)arg1 ;
-(id)deviceOemName;
-(void)setDeviceOemName:(id)arg1 ;
-(id)osLocale;
-(void)setOsLocale:(id)arg1 ;
-(id)osLanguage;
-(void)setOsLanguage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)operationsQueue;
-(void)setOperationsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BITUser *)user;
-(void)dealloc;
-(id)init;
-(BITOrderedDictionary *)tags;
-(id)sessionId;
-(void)setSessionId:(id)arg1 ;
-(void)setOsVersion:(id)arg1 ;
-(id)osVersion;
-(id)screenResolution;
-(void)setScreenResolution:(id)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(id)appVersion;
-(void)setAppVersion:(id)arg1 ;
-(id)osName;
-(BITApplication *)application;
-(void)setDeviceType:(id)arg1 ;
-(id)deviceType;
-(BITPersistence *)persistence;
-(id)contextDictionary;
-(BITSession *)session;
-(id)sdkVersion;
-(void)setDeviceId:(id)arg1 ;
-(void)setTags:(BITOrderedDictionary *)arg1 ;
-(BITInternal *)internal;
-(BITDevice *)device;
-(id)deviceModel;
-(void)setDeviceModel:(id)arg1 ;
-(id)deviceId;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBLocationAuthorizationListener.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBUserSession, FBLocationManager, FBFNSettingsData, FBMemPrivacyOptionsLocationConnection, FBFNSettingsRequest, NSString;

@interface FBFNSettingsDataController : NSObject <FBLocationAuthorizationListener, NSCopying> {

	FBUserSession* _session;
	FBLocationManager* _locationManager;
	int _state;
	FBFNSettingsData* _settingsData;
	FBMemPrivacyOptionsLocationConnection* _privacyLocationOptions;
	FBFNSettingsRequest* _settingsRequest;

}

@property (nonatomic,retain) FBFNSettingsRequest * settingsRequest;                                       //@synthesize settingsRequest=_settingsRequest - In the implementation block
@property (assign,nonatomic) int state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBFNSettingsData * settingsData;                                             //@synthesize settingsData=_settingsData - In the implementation block
@property (nonatomic,retain) FBMemPrivacyOptionsLocationConnection * privacyLocationOptions;              //@synthesize privacyLocationOptions=_privacyLocationOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSettingsTrackingEnabled:(BOOL)arg1 sharingEnabled:(BOOL)arg2 ;
-(FBFNSettingsData *)settingsData;
-(FBMemPrivacyOptionsLocationConnection *)privacyLocationOptions;
-(void)setLocationTracking:(BOOL)arg1 privacySettings:(id)arg2 onDone:(/*^block*/id)arg3 ;
-(void)setSettingsSelectedPrivacyOption:(id)arg1 ;
-(void)loadSettingsData:(/*^block*/id)arg1 ;
-(void)setLocationTracking:(BOOL)arg1 onDone:(/*^block*/id)arg2 ;
-(void)locationAuthorizationDidChange:(int)arg1 ;
-(void)_setupAuthorizationStateManagement;
-(void)setSettingsData:(FBFNSettingsData *)arg1 ;
-(void)setSettingsRequest:(FBFNSettingsRequest *)arg1 ;
-(void)_loadSettingsDataWithLocationSharing:(id)arg1 privacySetting:(id)arg2 privacyConnection:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setPrivacyLocationOptions:(FBMemPrivacyOptionsLocationConnection *)arg1 ;
-(void)setLocationHistoryEnabled:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_notifySettingsChanged;
-(FBFNSettingsRequest *)settingsRequest;
-(void)setNotificationSettingEnabled:(BOOL)arg1 onDone:(/*^block*/id)arg2 ;
-(void)updateNUXStatus:(unsigned long long)arg1 privacySettings:(id)arg2 onDone:(/*^block*/id)arg3 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

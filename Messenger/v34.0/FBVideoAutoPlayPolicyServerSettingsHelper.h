/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBVideoAutoPlayPolicySettingsHelperProtocol.h>

@class FBUserSession;

@interface FBVideoAutoPlayPolicyServerSettingsHelper : NSObject <FBVideoAutoPlayPolicySettingsHelperProtocol> {

	FBUserSession* _session;
	BOOL _defaultsRegistered;
	long long _defaultAutoplaySetting;
	BOOL _hasMigrated;

}
-(void)setDefaultAutoplaySettings;
-(void)syncServerAndLocalAutoplaySettingsIfNeeded:(/*^block*/id)arg1 ;
-(void)retrieveAutoplayServerSettingIfCacheHasExpired;
-(long long)currentDefaultAutoplaySetting;
-(void)setSmartAutoplay:(BOOL)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 ;
-(void)setAutoplaySetting:(long long)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 ;
-(BOOL)autoplaySettingIsCurrentlyBeingWrittenToTheServer;
-(BOOL)autoplaySettingIsCurrentlyBeingReadFromTheServer;
-(void)_pushLocalSettingToServer:(/*^block*/id)arg1 migrationType:(id)arg2 ;
-(void)_retrieveAutoplayServerSetting;
-(long long)_dataInputToAutoPlayValue:(id)arg1 ;
-(void)_processSetAutoplaySettingSuccess;
-(id)_autoPlayValueToDataInputValue:(long long)arg1 ;
-(void)_handleRetrieveAutoplayServerSettingSuccess:(id)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 ;
-(void)_updateLocalAutoplayMigrateSuccess:(id)arg1 isSmartAutoplay:(BOOL)arg2 postLocalCacheUpdateCallback:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end

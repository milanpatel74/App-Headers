/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamListener.h>

@class FBUserSession, NSMutableDictionary, FBUserPreferences, FBSavedDashboardStoreManagerListenerAnnouncer, NSString;

@interface FBSavedDashboardStoreManager : NSObject <FBStreamListener> {

	FBUserSession* _session;
	NSMutableDictionary* _storeDictionary;
	FBUserPreferences* _preferences;
	FBSavedDashboardStoreManagerListenerAnnouncer* _announcer;
	NSMutableDictionary* _sectionStreamDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)prefetchEdgesForSection:(id)arg1 numberOfEdges:(int)arg2 ;
-(BOOL)hasNoResultsStateForSection:(id)arg1 ;
-(void)recordNoResultsForSection:(id)arg1 hasNoResults:(BOOL)arg2 ;
-(id)cachedEdgesForSection:(id)arg1 ;
-(id)_connectionWithTargetID:(id)arg1 session:(id)arg2 ;
-(id)savedDashboardStoreForSection:(id)arg1 ;
-(id)_noResultsKeyForSection:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end


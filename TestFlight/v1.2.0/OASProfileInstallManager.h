/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TestFlight/TestFlight-Structs.h>
@class OASObjectCache, NSObject;

@interface OASProfileInstallManager : NSObject {

	OASObjectCache* _cache;
	NSObject*<OS_dispatch_queue> _managerQueue;

}

@property (nonatomic,readonly) OASObjectCache * cache;                                 //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> managerQueue;              //@synthesize managerQueue=_managerQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)managerQueue;
-(BOOL)installProfilesFromServerResponse:(id)arg1 forApp:(id)arg2 ;
-(long long)profileStatus:(id)arg1 ;
-(long long)profileStatusForBundleID:(id)arg1 ;
-(id)cachedProfileForBundleID:(id)arg1 ;
-(void)backgroundEnumerateProfiles;
-(void)uninstallSuperfluousPrereleaseProfiles;
-(BOOL)uninstallProfileWithUUID:(id)arg1 ;
-(void)enumerateProfiles;
-(MISProfileRef)installProfileFromData:(id)arg1 ;
-(void)_uninstallSuperfluousPrereleaseProfiles;
-(id)profileExpirationDate:(id)arg1 ;
-(void)uninstallPrereleaseProfilesForApp:(id)arg1 ;
-(id)initWithCache:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(OASObjectCache *)cache;
@end

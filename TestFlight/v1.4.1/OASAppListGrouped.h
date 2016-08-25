/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/OASAppList.h>

@class NSMutableDictionary;

@interface OASAppListGrouped : OASAppList {

	NSMutableDictionary* _installedPrereleaseApps;

}
-(id)initWithSessionContext:(id)arg1 ;
-(void)_baseAppsCatalogUpdated:(id)arg1 withCatalogChanges:(id)arg2 ;
-(void)appDidExpire:(id)arg1 ;
-(void)installStatusChanged:(id)arg1 ;
-(void)_appsChanged:(id)arg1 catalogChanges:(id)arg2 statusChangedBundleIDs:(id)arg3 ;
-(id)groupContext;
-(long long)sortApp1:(id)arg1 andApp2:(id)arg2 withContext:(id)arg3 ;
-(BOOL)appShouldBeIncluded:(id)arg1 withContext:(id)arg2 ;
-(unsigned long long)groupIndexForApp:(id)arg1 withContext:(id)arg2 ;
-(id)groupNames;
-(unsigned long long)indexOfApp:(id)arg1 inGroup:(id)arg2 withContext:(id)arg3 ;
-(void)dealloc;
-(unsigned long long)groupCount;
@end

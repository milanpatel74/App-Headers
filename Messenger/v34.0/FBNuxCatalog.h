/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSDictionary, NSMutableDictionary, NSOrderedSet, NSArray;

@interface FBNuxCatalog : NSObject {

	NSDictionary* _catalogEntries;
	NSMutableDictionary* _nuxPresenterMap;
	NSOrderedSet* _serverEligibleNuxIDs;
	NSDictionary* _triggerIDServerEligibleNuxIDsMap;
	NSMutableDictionary* _eligibilityOverrides;
	Mutex _lock;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * nuxIDs; 
+(id)_catalogEntriesFromNuxConfigurations:(id)arg1 ;
-(id)configurationProfile;
-(id)nuxPresenterForNuxID:(id)arg1 ;
-(void)overrideServerEligibility:(BOOL)arg1 forNuxWithID:(id)arg2 ;
-(void)removeViewRecordsForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3 ;
-(id)nuxNameForNuxID:(id)arg1 ;
-(void)registerNuxPresenter:(id)arg1 ;
-(id)_catalogEntryByNuxID:(id)arg1 ;
-(id)_allRecordListsForNuxID:(id)arg1 event:(id)arg2 ;
-(id)_recordListForNuxID:(id)arg1 event:(id)arg2 versionID:(id)arg3 ;
-(id)_lastOccurrenceTimeForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3 ;
-(BOOL)_eventWithLastEventTime:(id)arg1 occurredWithinTimeInterval:(double)arg2 ;
-(void)_updateTriggerIDServerEligibleNuxIDsMap;
-(unsigned long long)occurrenceCountForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3 ;
-(id)lastOccurrenceTimeForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3 ;
-(id)overriddenEligibilityForNuxID:(id)arg1 ;
-(id)initWithConfigurationProfile:(id)arg1 ;
-(BOOL)isServerEligibleNuxID:(id)arg1 ;
-(void)unregisterNuxPresenter:(id)arg1 ;
-(void)updateWithServerEligibleNuxIDs:(id)arg1 ;
-(NSArray *)nuxIDs;
-(BOOL)nuxWithID:(id)arg1 versionID:(id)arg2 hadEvent:(id)arg3 withinTimeInterval:(double)arg4 ;
-(id)eligibleNuxIDsForTriggerID:(id)arg1 withTriggerContext:(id)arg2 ;
-(void)recordEvent:(id)arg1 nuxID:(id)arg2 timestamp:(id)arg3 versionID:(id)arg4 ;
-(id)initWithCatalogEntries:(id)arg1 ;
-(id)archivedCatalogEntries;
-(unsigned long long)count;
-(id)debugDescription;
@end


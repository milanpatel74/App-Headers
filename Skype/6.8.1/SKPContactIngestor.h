//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INGIngestionLibWrapper, NSDate, NSTimer;

@interface SKPContactIngestor : NSObject
{
    _Bool _active;
    _Bool _isPerformingLookup;
    _Bool _shouldSynchronizeContactsAfterBatch;
    NSDate *_lastUpdateCompletionDate;
    unsigned long long _numberOfResolvedContacts;
    INGIngestionLibWrapper *_ingestionLib;
    NSTimer *_timer;
}

@property(nonatomic) _Bool shouldSynchronizeContactsAfterBatch; // @synthesize shouldSynchronizeContactsAfterBatch=_shouldSynchronizeContactsAfterBatch;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) INGIngestionLibWrapper *ingestionLib; // @synthesize ingestionLib=_ingestionLib;
@property(nonatomic) unsigned long long numberOfResolvedContacts; // @synthesize numberOfResolvedContacts=_numberOfResolvedContacts;
@property(retain, nonatomic) NSDate *lastUpdateCompletionDate; // @synthesize lastUpdateCompletionDate=_lastUpdateCompletionDate;
@property(nonatomic) _Bool isPerformingLookup; // @synthesize isPerformingLookup=_isPerformingLookup;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (CDUnknownBlockType)lookupDoneBlock;
- (CDUnknownBlockType)batchDoneBlock;
- (id)lookupOperationWithAuthToken:(id)arg1;
- (id)updateContactsOperationWithContacts:(id)arg1;
- (void)submitContactInformation:(id)arg1;
- (void)collectContactInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)update:(id)arg1;
@property(retain, nonatomic) NSDate *lastUpdateStartDate;
- (_Bool)shouldSubmitNewQuery;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isEnabledInPreferences;
- (void)dealloc;
- (id)init;

@end


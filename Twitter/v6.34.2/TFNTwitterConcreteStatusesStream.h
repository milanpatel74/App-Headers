/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterStatusStream.h>

@class NSString, NSDate, TFNTwitterDummyStatus, TFNTwitterStatus;

@interface TFNTwitterConcreteStatusesStream : TFNTwitterStatusStream {

	NSString* _guid;
	NSDate* _lastUpdated;
	TFNTwitterDummyStatus* _dummyEndOfStream;
	TFNTwitterDummyStatus* _dummyLoading;
	TFNTwitterStatus* _newestStatus;
	struct {
		unsigned isLoadingNewer : 1;
		unsigned isLoadingOlder : 1;
		unsigned isAtEnd : 1;
		unsigned loadingOlderLessThan20Count : 5;
		unsigned needsToLoadFromDisk : 1;
		unsigned loadConservatively : 1;
	}  _flags;
	BOOL _shouldObserveDeleteStatusNotifications;
	BOOL _requestCountExperimentEnabled;
	BOOL _requestCountOverrideEnabled;
	unsigned long long _customRequestCount;

}

@property (assign,nonatomic) BOOL loadConservatively; 
@property (assign,nonatomic) BOOL shouldObserveDeleteStatusNotifications;              //@synthesize shouldObserveDeleteStatusNotifications=_shouldObserveDeleteStatusNotifications - In the implementation block
@property (assign,nonatomic) BOOL requestCountExperimentEnabled;                       //@synthesize requestCountExperimentEnabled=_requestCountExperimentEnabled - In the implementation block
@property (assign,nonatomic) BOOL requestCountOverrideEnabled;                         //@synthesize requestCountOverrideEnabled=_requestCountOverrideEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long customRequestCount;                    //@synthesize customRequestCount=_customRequestCount - In the implementation block
-(BOOL)loadNewerWithSource:(long long)arg1 ;
-(BOOL)isLoadingNewer;
-(void)removeStreamObject:(id)arg1 ;
-(id)statuses;
-(id)autosaveName;
-(void)postStatusesChangedNotificationWithName:(id)arg1 type:(long long)arg2 resultCount:(unsigned long long)arg3 source:(long long)arg4 error:(id)arg5 ;
-(void)addStatus:(id)arg1 ;
-(void)removeAllStreamObjects;
-(BOOL)loadGap:(id)arg1 withSource:(long long)arg2 ;
-(id)_errorStatusForError:(id)arg1 ;
-(void)removeHalfOfStreamObjects;
-(void)setShouldObserveDeleteStatusNotifications:(BOOL)arg1 ;
-(void)setLoadConservatively:(BOOL)arg1 ;
-(id)itemsToBeSerialized;
-(void)setIsLoadingNewer:(BOOL)arg1 ;
-(void)setIsLoadingOlder:(BOOL)arg1 ;
-(BOOL)loadOlderWithSource:(long long)arg1 ;
-(BOOL)loadConservatively;
-(BOOL)isLoadingOlder;
-(void)removeContentRelatedToUser:(id)arg1 ;
-(id)definitiveStatuses:(id)arg1 ;
-(void)removeFirstNStreamObjects:(unsigned long long)arg1 ;
-(id)newestStatus;
-(void)removeLastNStreamObjects:(unsigned long long)arg1 ;
-(void)_deleteStatusNotification:(id)arg1 ;
-(void)setStatuses:(id)arg1 ;
-(void)addFooterObjectsToStatuses:(id)arg1 ;
-(void)_retryLoadOlderWithSource:(long long)arg1 ;
-(id)_emptyStreamStatus;
-(BOOL)shouldIndexUsersInAutocomplete;
-(id)_sortStreamObjects:(id)arg1 ;
-(long long)maxObjectsCount;
-(void)markAtEnd;
-(void)addStreamObjects:(id)arg1 needsSortAndDedupe:(BOOL)arg2 notify:(BOOL)arg3 ;
-(id)oldestStatus;
-(void)_streamResponse:(id)arg1 couldBeGap:(BOOL)arg2 isFromFillingInGap:(BOOL)arg3 source:(long long)arg4 ;
-(BOOL)requestCountOverrideEnabled;
-(BOOL)requestCountExperimentEnabled;
-(void)_loadNewerWithSource:(long long)arg1 ;
-(void)_loadOlderWithSource:(long long)arg1 ;
-(void)_loadBeforeGap:(id)arg1 source:(long long)arg2 ;
-(id)_guid;
-(void)postStatusesChangedNotificationWithName:(id)arg1 type:(long long)arg2 resultCount:(unsigned long long)arg3 source:(long long)arg4 error:(id)arg5 injectedCount:(unsigned long long)arg6 ;
-(long long)minStatusesToConsiderBeingGap;
-(BOOL)_status:(id)arg1 isNewerThanStatus:(id)arg2 ;
-(id)newestStatusID;
-(id)oldestStatusID;
-(/*^block*/id)loadNewerResponseBlock:(long long)arg1 ;
-(/*^block*/id)loadOlderResponseBlock:(long long)arg1 ;
-(/*^block*/id)loadGapResponseBlock:(id)arg1 source:(long long)arg2 ;
-(BOOL)hasRealData;
-(id)newestStatusThatIsNotMine;
-(id)_storedStreamPath;
-(BOOL)shouldObserveDeleteStatusNotifications;
-(void)setRequestCountExperimentEnabled:(BOOL)arg1 ;
-(void)setRequestCountOverrideEnabled:(BOOL)arg1 ;
-(unsigned long long)customRequestCount;
-(void)setCustomRequestCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isAtEnd;
-(BOOL)hasData;
-(id)lastUpdated;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class FBAnalytics, NSString, NSMutableArray;

@interface MNPeopleSearchControllerLogger : NSObject <FBClassProvidable> {

	FBAnalytics* _analytics;
	NSString* _sessionId;
	NSString* _targetId;
	NSString* _resultIndex;
	NSString* _resultSectionName;
	unsigned long long _numSearchAttempts;
	BOOL _didSelectResult;
	unsigned long long _peopleCount;
	unsigned long long _searchStartTime;
	unsigned long long _surface;
	NSMutableArray* _searchTerms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 ;
-(void)recordSearchResultSelectedWithAnalyticsExtras:(id)arg1 ;
-(void)_logSearchSessionStarted;
-(void)_addSearchTerm:(id)arg1 ;
-(void)_logSearchSessionEndedWithSearchTime:(unsigned long long)arg1 resultIds:(id)arg2 ;
-(void)_resetSearchSession;
-(void)startSearchSessionWithSessionId:(id)arg1 surface:(unsigned long long)arg2 ;
-(void)recordSearchAttemptWithText:(id)arg1 ;
-(void)endSearchSessionWithResultIds:(id)arg1 ;
@end

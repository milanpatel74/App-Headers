/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadSummarySubscribing.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class NSArray, NSMutableArray, NSString;

@interface MNPinnedGroupsEditManager : NSObject <MNThreadSummarySubscribing, FBViewerContextClassProvidable> {

	NSArray* _previousGroupThreads;
	NSMutableArray* _removedThreadKeys;
	NSArray* _currentGroupThreads;
	NSArray* _currentRemovedThreadKeys;
	NSArray* _currentRemovedThreadFbIds;

}

@property (nonatomic,copy) NSArray * currentGroupThreads;                            //@synthesize currentGroupThreads=_currentGroupThreads - In the implementation block
@property (nonatomic,copy) NSArray * currentRemovedThreadFbIds;                      //@synthesize currentRemovedThreadFbIds=_currentRemovedThreadFbIds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * currentRemovedThreadKeys;              //@synthesize currentRemovedThreadKeys=_currentRemovedThreadKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)saveCurrentGroupThreads:(id)arg1 ;
-(void)restorePreviousGroupThreads;
-(void)removeGroupThreadByKey:(id)arg1 ;
-(NSArray *)currentGroupThreads;
-(NSArray *)currentRemovedThreadKeys;
-(void)setCurrentGroupThreads:(NSArray *)arg1 ;
-(void)setCurrentRemovedThreadFbIds:(NSArray *)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(NSArray *)currentRemovedThreadFbIds;
-(BOOL)hasEdits;
-(void)moveGroupAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
@end

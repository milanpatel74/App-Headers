/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBLocalContactsSyncStatusListener.h>

@protocol FBLocalContactsSyncStatusListener;
@class FBSyncedLocalContactsDeduplicationTracker, NSString;

@interface FBSyncedLocalContactsDeduplicator : NSObject <FBLocalContactsSyncStatusListener> {

	id<FBLocalContactsSyncStatusListener> _listener;
	FBSyncedLocalContactsDeduplicationTracker* _deduplicationTracker;

}

@property (nonatomic,retain) FBSyncedLocalContactsDeduplicationTracker * deduplicationTracker;              //@synthesize deduplicationTracker=_deduplicationTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)localContactsSyncFailedDueToContactImportingBeingLocked;
-(void)localContactsSyncStarted;
-(void)foundLocalContactChangesWithNumberOfChanges:(unsigned long long)arg1 ;
-(void)foundNoLocalContactChanges;
-(void)localContactsSyncProgressedWithStatus:(id)arg1 ;
-(void)localContactsSyncCompleted;
-(void)localContactsSyncFailed;
-(void)setDeduplicationTracker:(FBSyncedLocalContactsDeduplicationTracker *)arg1 ;
-(FBSyncedLocalContactsDeduplicationTracker *)deduplicationTracker;
-(id)initWithListener:(id)arg1 ;
@end

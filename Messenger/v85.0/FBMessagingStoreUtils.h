/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBMessagingStoreUtils : NSObject
+(id)pinnedGroupInfoFromRow:(id)arg1 ;
+(NSNumber*)timestampFromRow:(id)arg1 ;
+(id)parameterListForRestoreThreadListOfFolderType:(long long)arg1 allowArchivedThreads:(BOOL)arg2 minTimestamp:(unsigned long long)arg3 maxTimestamp:(unsigned long long)arg4 limit:(long long)arg5 ;
+(id)threadSummaryFromRow:(id)arg1 ;
+(id)coreMessagePropertiesFromRow:(id)arg1 ;
+(id)extensiblePropertiesRawDataRowsFromQueryResult:(id)arg1 ;
+(id)parameterListForRestoreOldestThreadTimestampOfFolderType:(long long)arg1 allowArchivedThreads:(BOOL)arg2 minTimestamp:(unsigned long long)arg3 ;
+(id)_userIDFromRow:(id)arg1 ;
+(id)userIDFromParticipantRow:(id)arg1 ;
+(id)userFromRow:(id)arg1 ;
+(id)fetchedThreadKeysFromRow:(id)arg1 ;
@end

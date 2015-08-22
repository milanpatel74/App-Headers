/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FetchThreadMethod : NSObject
+(unsigned long long)numberOfMessagesInFQLResult:(id)arg1 ;
+(id)getFqlByThreadFbId:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3 ;
+(id)getCanonicalFqlByUserId:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3 ;
+(id)getFqlByThreadId_DEPRECATED:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3 ;
+(id)getThreadMetadataFqlByThreadFbId:(id)arg1 ;
+(id)getThreadMetadataFqlByUserId:(id)arg1 ;
+(id)getThreadMetadataFqlByThreadId_DEPRECATED:(id)arg1 ;
+(id)getFqlByThreadKey:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3 ;
+(id)getThreadMetadataFqlByThreadKey:(id)arg1 ;
+(id)handleFqlResult:(id)arg1 threadJSONUpdater:(id)arg2 announcer:(id)arg3 viewerFBID:(id)arg4 mailboxType:(unsigned long long)arg5 ;
+(id)getCanonicalThreadByUsernameFql:(id)arg1 ;
+(id)getUidFromUsernameFqlResult:(id)arg1 ;
+(id)getDisplayNameFromUsernameFqlResult:(id)arg1 ;
+(id)getFqlQueriesByThreadId_DEPRECATED:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3 ;
+(id)_getFqlQueriesByThreadWhere:(id)arg1 messagesWhere:(id)arg2 actionsWhere:(id)arg3 since:(long long)arg4 shouldQueryUserInfo:(BOOL)arg5 ;
+(id)_threadMetadataFqlWithThreadWhere:(id)arg1 ;
+(id)_getSignalOccurenceString:(id)arg1 fromUsernameFqlResult:(id)arg2 ;
+(id)getFqlByThreadDescriptor:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3 ;
+(id)getCanonicalThreadFql:(id)arg1 since:(long long)arg2 ;
+(id)getThreadMetadataFqlByThreadDescriptor:(id)arg1 ;
+(id)handleFqlResult:(id)arg1 threadJSONUpdater:(id)arg2 announcer:(id)arg3 viewerFBID:(id)arg4 ;
+(id)getRequestForThreadKey:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3 ;
@end

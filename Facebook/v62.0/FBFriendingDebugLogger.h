/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFriendingDebugLogger : NSObject
+(void)logFriendingActionPerformWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 friendshipBeforeAction:(id)arg4 action:(unsigned long long)arg5 ;
+(void)logFriendingActionFailWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 friendshipAfterRollback:(id)arg4 failedAction:(unsigned long long)arg5 ;
+(void)logFriendingActionCancelWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 friendshipAfterCancel:(id)arg4 canceledAction:(unsigned long long)arg5 ;
+(void)logFriendshipResetWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 friendship:(id)arg4 ;
+(void)logFriendingErrorDetailWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 errorDomain:(id)arg4 errorCode:(id)arg5 errorDescription:(id)arg6 ;
@end

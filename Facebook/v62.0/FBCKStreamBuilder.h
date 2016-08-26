/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCKStreamBuilder : NSObject
+(id)streamWithFeedbackID:(id)arg1 focusedCommentID:(id)arg2 viewerActsAsPageID:(id)arg3 commentOrder:(unsigned long long)arg4 userSession:(id)arg5 commentsStore:(id)arg6 processingDelegate:(id)arg7 shouldFetchCommentInteractors:(BOOL)arg8 shouldFetchFriendCommenters:(BOOL)arg9 shouldFetchInterestingRepliers:(BOOL)arg10 shouldUseDefaultActor:(BOOL)arg11 feedbackIncludeReactionsOnCommentAuthor:(BOOL)arg12 feedbackIncludeReactionsForComment:(BOOL)arg13 fetchAvailableCommentOrderings:(BOOL)arg14 fetchFriendResharers:(BOOL)arg15 fetchResharePreviews:(BOOL)arg16 accurateShareCountUnderEqualTo:(unsigned long long)arg17 fetchLimitProvider:(/*^block*/id)arg18 replyPreviewConfigurationProvider:(/*^block*/id)arg19 scenePath:(id)arg20 ;
+(id)_queryForFeedbackID:(id)arg1 focusedCommentID:(id)arg2 commentOrder:(unsigned long long)arg3 loadType:(unsigned long long)arg4 cursor:(id)arg5 count:(unsigned long long)arg6 fetchAvailableCommentOrderings:(BOOL)arg7 fetchFriendResharers:(BOOL)arg8 fetchResharePreviews:(BOOL)arg9 accurateShareCountUnderEqualTo:(unsigned long long)arg10 topLevelCommentParameters:(id)arg11 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCommentStreamSourceListComponentTrackerAdapter, FBCommentStreamSourceCollectionViewDataSourceAdapter, FBCommentStreamLifecycleListComponentTracker;

@interface FBCommentStreamFeedbackSentencesListComponentManager : NSObject {

	FBCommentStreamSourceListComponentTrackerAdapter* _listComponentTrackerAdapter;
	FBCommentStreamSourceCollectionViewDataSourceAdapter* _listComponentDataSourceAdapter;
	FBCommentStreamLifecycleListComponentTracker* _listComponentTracker;

}
-(id)initWithFeedback:(id)arg1 lifeCycleAnnouncer:(id)arg2 feedbackUpdateAnnouncer:(id)arg3 socialSentenceType:(unsigned long long)arg4 dataSourceWriteInterface:(id)arg5 commentStreamComponentContext:(id)arg6 ;
@end

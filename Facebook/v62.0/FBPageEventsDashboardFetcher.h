/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemPage, FBUserSession, FBMemPagedDownloadController, NSArray;

@interface FBPageEventsDashboardFetcher : NSObject {

	FBMemPage* _page;
	FBUserSession* _session;
	unsigned long long _type;
	FBMemPagedDownloadController* _downloadController;
	NSArray* _eventIds;

}
-(id)initWithFetcherType:(unsigned long long)arg1 session:(id)arg2 pageId:(id)arg3 eventIds:(id)arg4 ;
-(BOOL)canLoadMore;
-(void)loadMore:(/*^block*/id)arg1 ;
-(id)_eventsFromEdges:(id)arg1 ;
-(void)reset;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>

@class FBUserSession, FBMemFeedback, NSMutableArray;

@interface FBUFIReactionsFacepileAndTextCountsComponentController : CKComponentController {

	FBUserSession* _session;
	FBMemFeedback* _feedback;
	BOOL _loading;
	NSMutableArray* _reactions;
	unsigned long long _selectedIndex;

}
-(void)didUpdateComponent;
-(void)handleComponent:(id)arg1 pan:(id)arg2 ;
-(void)willMount;
-(void)_toggleViewerReaction;
-(long long)_viewerReactionIndex;
-(void)_downloadCompletionBlockWithReactors:(id)arg1 ;
-(id)init;
-(void)_loadData;
@end

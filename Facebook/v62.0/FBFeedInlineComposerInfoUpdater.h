/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerDataFetchListener.h>

@protocol FBFeedInlineComposerInfoUpdaterDelegate;
@class FBUserSession, NSString, FBConsistentLookasideCacheObservationHandle, FBInlineComposerRichDataFetchingExperimentContext;

@interface FBFeedInlineComposerInfoUpdater : NSObject <FBComposerDataFetchListener> {

	FBUserSession* _session;
	id<FBFeedInlineComposerInfoUpdaterDelegate> _delegate;
	NSString* _viewerFBID;
	FBConsistentLookasideCacheObservationHandle* _observationHandle;
	FBInlineComposerRichDataFetchingExperimentContext* _experimentContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_requestUpdatedActorInfo;
-(void)_registerAsComposerDataFetchListener;
-(void)_requestUpdatedComposerInfoIfNeeded;
-(void)_processParsedResponse:(id)arg1 ;
-(void)_subscribeToActorUpdatesIfNeeded:(id)arg1 ;
-(void)_actorModelUpdated:(id)arg1 ;
-(void)failedToLoadDataForRequest:(id)arg1 ;
-(void)loadedDataWithResponse:(id)arg1 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 viewerFBID:(id)arg3 ;
-(void)startUpdater;
-(void)stopUpdater;
@end

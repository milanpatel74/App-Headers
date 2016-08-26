/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMBatchThreadCreatorListening.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNPendingThreadCreateWithMessageAPIRequester.h>
#import <Messenger/MNPendingThreadCreateAsMontageAPIRequester.h>

@protocol FBProvider;
@class NSMutableDictionary, NSString;

@interface FBMPendingThreadKitAdapter : NSObject <FBMBatchThreadCreatorListening, FBViewerContextClassProvidable, MNPendingThreadCreateWithMessageAPIRequester, MNPendingThreadCreateAsMontageAPIRequester> {

	id<FBProvider> _batchThreadCreatorProvider;
	NSMutableDictionary* _offlineIdToThreadCreationResponserMap;
	NSMutableDictionary* _offlineIdToBatchThreadCreatorMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_cleanUpThreadCreationForOfflineId:(id)arg1 ;
-(void)cancelThreadCreationWithOfflineId:(id)arg1 ;
-(void)_cancelThreadCreationForOfflineId:(id)arg1 ;
-(id)_offlineIdForBatchThreadCreator:(id)arg1 ;
-(void)batchThreadCreator:(id)arg1 didCreateThreadSummary:(id)arg2 ;
-(void)batchThreadCreator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)createThreadWithOfflineId:(id)arg1 message:(id)arg2 invitees:(id)arg3 useExistingGroup:(BOOL)arg4 callbackQueue:(id)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(void)createThreadWithOfflineId:(id)arg1 message:(id)arg2 callbackQueue:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)cancelMontageThreadCreationWithOfflineId:(id)arg1 ;
@end

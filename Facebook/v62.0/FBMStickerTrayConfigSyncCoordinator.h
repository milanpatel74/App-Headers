/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMStickerTrayConfigSyncPolicy.h>
#import <Facebook/FBMStickerTrayConfigSyncListener.h>

@class FBMStickerTrayConfigSyncListenerAnnouncer, FBMStickerTrayConfigSyncOperation, FBMStickerTrayConfigSyncPolicy, NSString;

@interface FBMStickerTrayConfigSyncCoordinator : NSObject <FBMStickerTrayConfigSyncPolicy, FBMStickerTrayConfigSyncListener> {

	FBMStickerTrayConfigSyncListenerAnnouncer* _syncAnnouncer;
	FBMStickerTrayConfigSyncOperation* _syncOperation;
	FBMStickerTrayConfigSyncPolicy* _syncPolicy;
	/*^block*/id _syncOperationProvider;
	BOOL _syncEnabled;
	BOOL _isNewSyncOperationScheduled;
	unsigned long long _scheduledSyncOperationType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startNewFullSyncOperation;
-(void)_scheduleNewOperationWithType:(unsigned long long)arg1 ;
-(void)_startNewPartialSyncOperation;
-(void)stickerSyncOperationWillStart;
-(void)stickerSyncOperationDidFinish:(id)arg1 ;
-(void)_startNewOperationIfScheduled;
-(void)stickerSyncOperationDidFail:(id)arg1 ;
-(void)_cancelSyncOperation;
-(void)syncRequired;
-(void)partialSyncRequired;
-(id)initWithStickerTrayConfigSyncPolicy:(id)arg1 syncOperationProvider:(/*^block*/id)arg2 ;
-(void)addSyncListener:(id)arg1 ;
-(void)removeSyncListener:(id)arg1 ;
-(void)stop;
-(void)start;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WABackupViewControllerDataProvider.h>

@class WACloudStatus, WAWeakTimer;

@interface WABackupViewControllerMediaRestoreDataProvider : WABackupViewControllerDataProvider {

	WACloudStatus* _cloudStatus;
	id _cloudStatusListener;
	WAWeakTimer* _timer;

}
+(id)errorForMediaRestoreStatus:(unsigned long long)arg1 ;
-(id)initWithBackupViewController:(id)arg1 delegate:(id)arg2 ;
-(void)sendAllUpdates;
-(void)requestAllUpdates;
-(void)sendErrorUpdate;
-(BOOL)hasCloudStatusNetworkError;
-(void)startTimerIfNeeded;
-(void)stopTimerIfNeeded;
-(void)mediaRestoreStatusDidChange:(id)arg1 ;
-(void)updateCurrentRestore;
-(void)sendAnimateCloudUpdate;
-(void)sendButtonTextUpdate;
-(void)sendStatusTextUpdate;
-(void)mediaRestorePhaseDidChange:(id)arg1 ;
-(void)cloudStatusDidChange:(id)arg1 ;
-(void)dealloc;
-(void)updateCloudStatus;
@end

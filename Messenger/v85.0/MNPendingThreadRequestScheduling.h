/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPendingThreadRequestScheduling <MNThreadSyncEventListening>
@required
-(void)cancelThreadCreationWithOfflineId:(id)arg1;
-(void)createGroupThreadWithOfflineId:(id)arg1 name:(id)arg2 profileImage:(id)arg3 inviteeByUserId:(id)arg4 shouldPinGroup:(BOOL)arg5;
-(void)sendMessage:(id)arg1 toPendingThreadWithOfflineId:(id)arg2;
-(void)cancelMessageSendWithOfflineThreadingId:(id)arg1 fromPendingThreadWithOfflineId:(id)arg2;
-(void)retryThreadCreationWithOfflineId:(id)arg1 messageOfflineThreadingId:(id)arg2;
-(void)retryThreadCreationWithOfflineId:(id)arg1;
-(void)createCanonicalThreadWithOtherUserId:(id)arg1 message:(id)arg2;
-(void)createGroupThreadWithOfflineId:(id)arg1 message:(id)arg2 invitees:(id)arg3 useExistingGroup:(BOOL)arg4;
-(void)createGroupThreadWithOfflineId:(id)arg1 message:(id)arg2 inviteeByUserId:(id)arg3 useExistingGroup:(BOOL)arg4;
-(void)createMontageThreadWithOfflineId:(id)arg1 message:(id)arg2;

@end

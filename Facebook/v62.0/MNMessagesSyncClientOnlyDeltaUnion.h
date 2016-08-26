/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncDeltaAdminAddedToGroupThread, MNMessagesSyncDeltaAdminRemovedFromGroupThread, MNMessagesSyncDeltaJoinableMode, MNMessagesSyncDeltaApprovalMode, MNMessagesSyncDeltaApprovalQueue, MNMessagesSyncDeltaRtcCallData, MNMessagesSyncClientOnlyDeltaGroupThreadDescription, MNMessagesSyncClientOnlyDeltaLiveLocationData, MNMessagesSyncClientOnlyDeltaPaymentPinProtectionStatusData, NSString;

@interface MNMessagesSyncClientOnlyDeltaUnion : NSObject <TBase, NSCoding> {

	MNMessagesSyncDeltaAdminAddedToGroupThread* __deltaAdminAddedToGroupThread;
	MNMessagesSyncDeltaAdminRemovedFromGroupThread* __deltaAdminRemovedFromGroupThread;
	MNMessagesSyncDeltaJoinableMode* __deltaJoinableMode;
	MNMessagesSyncDeltaApprovalMode* __deltaApprovalMode;
	MNMessagesSyncDeltaApprovalQueue* __deltaApprovalQueue;
	MNMessagesSyncDeltaRtcCallData* __deltaRtcCallData;
	MNMessagesSyncClientOnlyDeltaGroupThreadDescription* __deltaGroupThreadDescription;
	MNMessagesSyncClientOnlyDeltaLiveLocationData* __liveLocationData;
	MNMessagesSyncClientOnlyDeltaPaymentPinProtectionStatusData* __deltaPaymentPinProtectionStatusData;
	BOOL __deltaAdminAddedToGroupThread_isset;
	BOOL __deltaAdminRemovedFromGroupThread_isset;
	BOOL __deltaJoinableMode_isset;
	BOOL __deltaApprovalMode_isset;
	BOOL __deltaApprovalQueue_isset;
	BOOL __deltaRtcCallData_isset;
	BOOL __deltaGroupThreadDescription_isset;
	BOOL __liveLocationData_isset;
	BOOL __deltaPaymentPinProtectionStatusData_isset;

}

@property (setter=setDeltaAdminAddedToGroupThread:,getter=deltaAdminAddedToGroupThread,nonatomic,retain) MNMessagesSyncDeltaAdminAddedToGroupThread * deltaAdminAddedToGroupThread; 
@property (setter=setDeltaAdminRemovedFromGroupThread:,getter=deltaAdminRemovedFromGroupThread,nonatomic,retain) MNMessagesSyncDeltaAdminRemovedFromGroupThread * deltaAdminRemovedFromGroupThread; 
@property (setter=setDeltaJoinableMode:,getter=deltaJoinableMode,nonatomic,retain) MNMessagesSyncDeltaJoinableMode * deltaJoinableMode; 
@property (setter=setDeltaApprovalMode:,getter=deltaApprovalMode,nonatomic,retain) MNMessagesSyncDeltaApprovalMode * deltaApprovalMode; 
@property (setter=setDeltaApprovalQueue:,getter=deltaApprovalQueue,nonatomic,retain) MNMessagesSyncDeltaApprovalQueue * deltaApprovalQueue; 
@property (setter=setDeltaRtcCallData:,getter=deltaRtcCallData,nonatomic,retain) MNMessagesSyncDeltaRtcCallData * deltaRtcCallData; 
@property (setter=setDeltaGroupThreadDescription:,getter=deltaGroupThreadDescription,nonatomic,retain) MNMessagesSyncClientOnlyDeltaGroupThreadDescription * deltaGroupThreadDescription; 
@property (setter=setLiveLocationData:,getter=liveLocationData,nonatomic,retain) MNMessagesSyncClientOnlyDeltaLiveLocationData * liveLocationData; 
@property (setter=setDeltaPaymentPinProtectionStatusData:,getter=deltaPaymentPinProtectionStatusData,nonatomic,retain) MNMessagesSyncClientOnlyDeltaPaymentPinProtectionStatusData * deltaPaymentPinProtectionStatusData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNMessagesSyncClientOnlyDeltaLiveLocationData *)liveLocationData;
-(void)read:(id)arg1 ;
-(MNMessagesSyncDeltaAdminAddedToGroupThread *)deltaAdminAddedToGroupThread;
-(MNMessagesSyncDeltaAdminRemovedFromGroupThread *)deltaAdminRemovedFromGroupThread;
-(MNMessagesSyncDeltaApprovalMode *)deltaApprovalMode;
-(MNMessagesSyncDeltaApprovalQueue *)deltaApprovalQueue;
-(MNMessagesSyncDeltaJoinableMode *)deltaJoinableMode;
-(MNMessagesSyncDeltaRtcCallData *)deltaRtcCallData;
-(void)setDeltaGroupThreadDescription:(MNMessagesSyncClientOnlyDeltaGroupThreadDescription *)arg1 ;
-(void)setLiveLocationData:(MNMessagesSyncClientOnlyDeltaLiveLocationData *)arg1 ;
-(void)setDeltaPaymentPinProtectionStatusData:(MNMessagesSyncClientOnlyDeltaPaymentPinProtectionStatusData *)arg1 ;
-(id)initWithDeltaAdminAddedToGroupThread:(id)arg1 deltaAdminRemovedFromGroupThread:(id)arg2 deltaJoinableMode:(id)arg3 deltaApprovalMode:(id)arg4 deltaApprovalQueue:(id)arg5 deltaRtcCallData:(id)arg6 deltaGroupThreadDescription:(id)arg7 liveLocationData:(id)arg8 deltaPaymentPinProtectionStatusData:(id)arg9 ;
-(MNMessagesSyncClientOnlyDeltaGroupThreadDescription *)deltaGroupThreadDescription;
-(BOOL)deltaGroupThreadDescriptionIsSet;
-(void)unsetDeltaGroupThreadDescription;
-(BOOL)liveLocationDataIsSet;
-(void)unsetLiveLocationData;
-(MNMessagesSyncClientOnlyDeltaPaymentPinProtectionStatusData *)deltaPaymentPinProtectionStatusData;
-(BOOL)deltaPaymentPinProtectionStatusDataIsSet;
-(void)unsetDeltaPaymentPinProtectionStatusData;
-(void)setDeltaAdminAddedToGroupThread:(MNMessagesSyncDeltaAdminAddedToGroupThread *)arg1 ;
-(void)setDeltaAdminRemovedFromGroupThread:(MNMessagesSyncDeltaAdminRemovedFromGroupThread *)arg1 ;
-(void)setDeltaRtcCallData:(MNMessagesSyncDeltaRtcCallData *)arg1 ;
-(void)setDeltaJoinableMode:(MNMessagesSyncDeltaJoinableMode *)arg1 ;
-(void)setDeltaApprovalMode:(MNMessagesSyncDeltaApprovalMode *)arg1 ;
-(void)setDeltaApprovalQueue:(MNMessagesSyncDeltaApprovalQueue *)arg1 ;
-(BOOL)deltaAdminAddedToGroupThreadIsSet;
-(void)unsetDeltaAdminAddedToGroupThread;
-(BOOL)deltaAdminRemovedFromGroupThreadIsSet;
-(void)unsetDeltaAdminRemovedFromGroupThread;
-(BOOL)deltaRtcCallDataIsSet;
-(void)unsetDeltaRtcCallData;
-(BOOL)deltaJoinableModeIsSet;
-(void)unsetDeltaJoinableMode;
-(BOOL)deltaApprovalModeIsSet;
-(void)unsetDeltaApprovalMode;
-(BOOL)deltaApprovalQueueIsSet;
-(void)unsetDeltaApprovalQueue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

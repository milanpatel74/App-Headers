/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, FBStringWithRedactedDescription, FBMThreadQueueType, FBMRTCCallData, FBMGroupThreadPropertiesFetchStatus;

@interface FBMGroupThreadPropertiesBuilder : NSObject {

	NSString* _fbId;
	NSSet* _otherParticipantIds;
	FBStringWithRedactedDescription* _customName;
	FBStringWithRedactedDescription* _threadDescription;
	NSString* _customPicHash;
	NSSet* _adminUserIds;
	NSString* _fbGroupId;
	NSString* _fbEventId;
	FBMThreadQueueType* _threadQueueType;
	FBMRTCCallData* _threadCallData;
	FBMGroupThreadPropertiesFetchStatus* _fetchStatus;

}
+(id)groupThreadPropertiesFromExistingGroupThreadProperties:(id)arg1 ;
+(id)groupThreadProperties;
-(id)withCustomName:(id)arg1 ;
-(id)withFetchStatus:(id)arg1 ;
-(id)withAdminUserIds:(id)arg1 ;
-(id)withThreadCallData:(id)arg1 ;
-(id)withOtherParticipantIds:(id)arg1 ;
-(id)withCustomPicHash:(id)arg1 ;
-(id)withFbId:(id)arg1 ;
-(id)withThreadDescription:(id)arg1 ;
-(id)withFbGroupId:(id)arg1 ;
-(id)withFbEventId:(id)arg1 ;
-(id)withThreadQueueType:(id)arg1 ;
-(id)build;
@end

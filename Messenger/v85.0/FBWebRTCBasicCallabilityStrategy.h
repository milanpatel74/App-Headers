/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCDeviceListener.h>
#import <Messenger/MNPresenceUpdateListening.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBWebRTCUserCallabilityStrategy.h>

@class FBWebRTCDevice, MNPresenceSubscriptionService, FBCache, NSMutableDictionary, NSString;

@interface FBWebRTCBasicCallabilityStrategy : NSObject <FBWebRTCDeviceListener, MNPresenceUpdateListening, FBViewerContextClassProvidable, FBWebRTCUserCallabilityStrategy> {

	FBWebRTCDevice* _rtcDevice;
	MNPresenceSubscriptionService* _presenceSubscriptionService;
	FBCache* _presenceCache;
	NSMutableDictionary* _observers;

}

@property (nonatomic,retain) MNPresenceSubscriptionService * presenceSubscriptionService;              //@synthesize presenceSubscriptionService=_presenceSubscriptionService - In the implementation block
@property (nonatomic,retain) FBCache * presenceCache;                                                  //@synthesize presenceCache=_presenceCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) FBWebRTCDevice * rtcDevice;                                             //@synthesize rtcDevice=_rtcDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)deviceCallabilityChanged:(BOOL)arg1 ;
-(void)deviceDidBeginCall;
-(void)deviceDidEndCall;
-(void)removeCallabilityObserver:(id)arg1 ;
-(void)addCallabilityObserver:(id)arg1 forUser:(id)arg2 ;
-(void)removeCallabilityObserver:(id)arg1 forUser:(id)arg2 ;
-(id)callabilityForUser:(id)arg1 withName:(id)arg2 ;
-(id)initWithWebRTCDevice:(id)arg1 presenceSubscriptionService:(id)arg2 ;
-(void)_notifyAllObservers;
-(void)_notifyObserversForUserId:(id)arg1 ;
-(id)genericDisabledReason;
-(BOOL)canUseOneOnOneOverMultiway:(id)arg1 ;
-(id)genericDisabledReasonForUserName:(id)arg1 ;
-(FBWebRTCDevice *)rtcDevice;
-(MNPresenceSubscriptionService *)presenceSubscriptionService;
-(void)setPresenceSubscriptionService:(MNPresenceSubscriptionService *)arg1 ;
-(FBCache *)presenceCache;
-(void)setPresenceCache:(FBCache *)arg1 ;
-(void)refreshCallabilityForUser:(id)arg1 ;
-(void)dealloc;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)observers;
@end

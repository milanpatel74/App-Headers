/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCUserCallabilityObserver.h>
#import <Messenger/FBWebRTCCallControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBWebRTCCallabilityAwareCallControllerDelegate;
@class FBMUser, FBWebRTCCallController, FBExperimentManager, NSString;

@interface FBWebRTCCallabilityAwareCallController : NSObject <FBWebRTCUserCallabilityObserver, FBWebRTCCallControllerDelegate, FBClassProvidable> {

	FBMUser* _user;
	id<FBWebRTCCallabilityAwareCallControllerDelegate> _delegate;
	FBWebRTCCallController* _callController;
	FBExperimentManager* _experimentManager;

}

@property (nonatomic,retain) FBExperimentManager * experimentManager;                                         //@synthesize experimentManager=_experimentManager - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCCallabilityAwareCallControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBWebRTCCapabilities> callCapabilities; 
@property (nonatomic,readonly) BOOL isVoipEnabledToOtherUser; 
@property (nonatomic,readonly) FBWebRTCCallController * callController;                                       //@synthesize callController=_callController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithThreadSummary:(id)arg1 users:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBExperimentManager *)experimentManager;
-(FBWebRTCCallController *)callController;
-(void)configureWithUser:(id)arg1 ;
-(BOOL)isVoipEnabledToOtherUser;
-(id<FBWebRTCCapabilities>)callCapabilities;
-(void)refreshCallability;
-(id)otherUserCallability;
-(void)startCallWithTrigger:(id)arg1 isVideoCall:(BOOL)arg2 analyticsExtra:(id)arg3 ;
-(void)cancelModalUI;
-(void)startCallWithTrigger:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)callabilityDidUpdateForUser:(id)arg1 ;
-(void)callController:(id)arg1 canMakeOutboundCallDidChange:(BOOL)arg2 ;
-(void)setExperimentManager:(FBExperimentManager *)arg1 ;
-(void)showCannotCallAlert;
-(id)initWithCallController:(id)arg1 experimentManager:(id)arg2 ;
-(void)_stopListeningToCallability;
-(void)_startListeningToCallability;
-(void)_notifyDelegateOfChange;
-(void)setDelegate:(id<FBWebRTCCallabilityAwareCallControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCCallabilityAwareCallControllerDelegate>)delegate;
-(void)tearDown;
@end

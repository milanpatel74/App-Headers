/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBWebRTCUserCallabilityObserver.h>
#import <Messenger/FBWebRTCCallControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBWebRTCCallabilityAwareCallControllerDelegate;
@class FBWebRTCCallController, FBMUser, FBExperimentManager, NSString;

@interface FBWebRTCCallabilityAwareCallController : NSObject <FBWebRTCUserCallabilityObserver, FBWebRTCCallControllerDelegate, FBClassProvidable> {

	FBWebRTCCallController* _callController;
	FBMUser* _user;
	id<FBWebRTCCallabilityAwareCallControllerDelegate> _delegate;
	FBExperimentManager* _experimentManager;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallabilityAwareCallControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBWebRTCCapabilities> callCapabilities; 
@property (nonatomic,readonly) BOOL isVoipEnabledToOtherUser; 
@property (nonatomic,retain) FBExperimentManager * experimentManager;                                         //@synthesize experimentManager=_experimentManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithThreadSummary:(id)arg1 users:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBExperimentManager *)experimentManager;
-(void)setExperimentManager:(FBExperimentManager *)arg1 ;
-(void)cancelModalUI;
-(id<FBWebRTCCapabilities>)callCapabilities;
-(void)callController:(id)arg1 canMakeOutboundCallDidChange:(BOOL)arg2 ;
-(id)initWithCallController:(id)arg1 experimentManager:(id)arg2 ;
-(void)_stopListeningToCallability;
-(void)refreshCallability;
-(void)_startListeningToCallability;
-(void)configureWithUser:(id)arg1 ;
-(id)otherUserCallability;
-(void)_notifyDelegateOfChange;
-(void)callabilityDidUpdateForUser:(id)arg1 ;
-(BOOL)isVoipEnabledToOtherUser;
-(void)showCannotCallAlert;
-(void)startCallWithTrigger:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<FBWebRTCCallabilityAwareCallControllerDelegate>)arg1 ;
-(id)init;
-(id<FBWebRTCCallabilityAwareCallControllerDelegate>)delegate;
-(void)tearDown;
@end

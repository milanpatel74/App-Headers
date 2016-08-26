/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPArraySubscriberDelegate.h>
#import <Skype/SKPAudioSessionManagerClient.h>

@class SKPPhoneNumberFormatter, NSMutableArray, SKPArrayFilter, SKPActivityToken, SKPArraySubscriber, SKPPredicateObservationTrigger, NSMapTable, SKPAudioRecorder, SKPIntentToken, NSArray, NSString;

@interface SKPCallService : NSObject <SKPArraySubscriberDelegate, SKPAudioSessionManagerClient> {

	BOOL _loggedIn;
	SKPPhoneNumberFormatter* _numberFormatter;
	NSMutableArray* _mutableLiveCalls;
	NSMutableArray* _discardedCalls;
	SKPArrayFilter* _currentUserIsLiveOrRingingConversationsFilter;
	SKPActivityToken* _liveCallActivity;
	SKPArraySubscriber* _callsArraySubscriber;
	SKPPredicateObservationTrigger* _fetcher;
	NSMapTable* _requestedAudioSessionSettingsByCall;
	NSMapTable* _callPerformanceInformationByCall;
	NSMapTable* _localCallNotificationTokenByCall;
	SKPAudioRecorder* _audioRecorder;
	SKPIntentToken* _callHandlingIntent;

}

@property (nonatomic,retain) SKPPhoneNumberFormatter * numberFormatter;                                   //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) NSArray * liveCalls; 
@property (nonatomic,retain) NSMutableArray * mutableLiveCalls;                                           //@synthesize mutableLiveCalls=_mutableLiveCalls - In the implementation block
@property (nonatomic,retain) NSMutableArray * discardedCalls;                                             //@synthesize discardedCalls=_discardedCalls - In the implementation block
@property (assign,nonatomic) BOOL loggedIn;                                                               //@synthesize loggedIn=_loggedIn - In the implementation block
@property (nonatomic,retain) SKPArrayFilter * currentUserIsLiveOrRingingConversationsFilter;              //@synthesize currentUserIsLiveOrRingingConversationsFilter=_currentUserIsLiveOrRingingConversationsFilter - In the implementation block
@property (nonatomic,retain) SKPActivityToken * liveCallActivity;                                         //@synthesize liveCallActivity=_liveCallActivity - In the implementation block
@property (nonatomic,retain) SKPArraySubscriber * callsArraySubscriber;                                   //@synthesize callsArraySubscriber=_callsArraySubscriber - In the implementation block
@property (nonatomic,retain) SKPPredicateObservationTrigger * fetcher;                                    //@synthesize fetcher=_fetcher - In the implementation block
@property (nonatomic,retain) NSMapTable * requestedAudioSessionSettingsByCall;                            //@synthesize requestedAudioSessionSettingsByCall=_requestedAudioSessionSettingsByCall - In the implementation block
@property (nonatomic,retain) NSMapTable * callPerformanceInformationByCall;                               //@synthesize callPerformanceInformationByCall=_callPerformanceInformationByCall - In the implementation block
@property (nonatomic,retain) NSMapTable * localCallNotificationTokenByCall;                               //@synthesize localCallNotificationTokenByCall=_localCallNotificationTokenByCall - In the implementation block
@property (nonatomic,retain) SKPAudioRecorder * audioRecorder;                                            //@synthesize audioRecorder=_audioRecorder - In the implementation block
@property (nonatomic,retain) SKPIntentToken * callHandlingIntent;                                         //@synthesize callHandlingIntent=_callHandlingIntent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)errorCodeFromAudioSessionErrorCode:(long long)arg1 ;
-(void)setFetcher:(SKPPredicateObservationTrigger *)arg1 ;
-(SKPPredicateObservationTrigger *)fetcher;
-(void)arraySubscriber:(id)arg1 updatedKeyPath:(id)arg2 ofObject:(id)arg3 withChange:(id)arg4 ;
-(BOOL)canAnswerCall:(id)arg1 error:(id*)arg2 ;
-(id)liveCallForConversationIdentity:(id)arg1 ;
-(void)checkCameraPermissionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startCallWithConversation:(id)arg1 withVideo:(BOOL)arg2 withInitiationSource:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)canStartCallWithConversationCapabilities:(unsigned long long)arg1 ;
-(BOOL)canStartVideoCallWithConversationCapabilities:(unsigned long long)arg1 isConference:(BOOL)arg2 ;
-(BOOL)canStartCallWithConversation:(id)arg1 ;
-(BOOL)canStartVideoCallWithConversation:(id)arg1 ;
-(void)startCallWithValidatedPhoneNumber:(id)arg1 knownConversation:(id)arg2 phoneNumberLabel:(id)arg3 withInitiationSource:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)endAllCalls;
-(void)liveSessionDidMove:(id)arg1 ;
-(NSArray *)liveCalls;
-(id)existingCallWithConversationIdentity:(id)arg1 guid:(id)arg2 ;
-(BOOL)registerCall:(id)arg1 userTargetState:(long long)arg2 ;
-(void)unregisterCall:(id)arg1 ;
-(NSMutableArray *)discardedCalls;
-(void)registerDiscardedCall:(id)arg1 ;
-(NSMapTable *)localCallNotificationTokenByCall;
-(NSMapTable *)callPerformanceInformationByCall;
-(void)setLiveCallActivity:(SKPActivityToken *)arg1 ;
-(SKPArraySubscriber *)callsArraySubscriber;
-(void)setCallsArraySubscriber:(SKPArraySubscriber *)arg1 ;
-(void)setCallHandlingIntent:(SKPIntentToken *)arg1 ;
-(void)setLiveCalls:(NSArray *)arg1 ;
-(void)setDiscardedCalls:(NSMutableArray *)arg1 ;
-(BOOL)checkCallsInProgressForOutboundCallDirection:(BOOL)arg1 withError:(id*)arg2 ;
-(BOOL)checkPlatformAvailabilityForOutboundCallDirection:(BOOL)arg1 withError:(id*)arg2 ;
-(void)startCallWithConversation:(id)arg1 withCallServiceTargets:(id)arg2 withVideo:(BOOL)arg3 withInitiationSource:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)checkOwnPresenceWithError:(id*)arg1 ;
-(BOOL)checkReachabilityWithError:(id*)arg1 ;
-(BOOL)validateCallServiceTarget:(id)arg1 error:(id*)arg2 ;
-(BOOL)startEmergencyCallWithNumber:(id)arg1 ;
-(void)callIdentities:(id)arg1 conversation:(id)arg2 withVideo:(BOOL)arg3 pstn:(BOOL)arg4 withInitiationSource:(long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)checkMicrophonePermissionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)validateContact:(id)arg1 error:(id*)arg2 ;
-(id)liveCallForConversation:(id)arg1 matchingClass:(Class)arg2 ;
-(BOOL)checkNativeCallInProgressForOutboundCallDirection:(BOOL)arg1 withError:(id*)arg2 ;
-(id)createCallForConversation:(id)arg1 userTargetState:(long long)arg2 withInitiationSource:(long long)arg3 error:(id*)arg4 ;
-(id)audioSessionSettingsForCall:(id)arg1 ;
-(NSMapTable *)requestedAudioSessionSettingsByCall;
-(void)removeCallForConversation:(id)arg1 ;
-(SKPAudioRecorder *)audioRecorder;
-(BOOL)checkVoIPBlockedWithError:(id*)arg1 ;
-(void)setCurrentUserIsLiveOrRingingConversationsFilter:(SKPArrayFilter *)arg1 ;
-(SKPArrayFilter *)currentUserIsLiveOrRingingConversationsFilter;
-(void)addIncomingConversation:(id)arg1 ;
-(void)KVOSKPCallServiceLiveConversationsValueChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)setLoggedIn:(BOOL)arg1 ;
-(void)checkForBombInConversation:(id)arg1 ;
-(id)discardedCallForCallGUID:(id)arg1 ;
-(void)unregisterDiscardedCall:(id)arg1 ;
-(SKPActivityToken *)liveCallActivity;
-(id)liveCallForConversation:(id)arg1 ;
-(BOOL)prepareToHaveCall;
-(id)existingCallWithConversationIdentity:(id)arg1 guid:(id)arg2 matchingClass:(Class)arg3 ;
-(void)replaceObjectInLiveCallsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(BOOL)loggedIn;
-(void)insertObject:(id)arg1 inLiveCallsAtIndex:(unsigned long long)arg2 ;
-(void)removeLiveCallsAtIndexes:(id)arg1 ;
-(void)removeObjectFromLiveCallsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)mutableLiveCalls;
-(BOOL)isBombConversation:(id)arg1 ;
-(void)startPushCallWithGUID:(id)arg1 conversationIdentity:(id)arg2 unescapedDisplayName:(id)arg3 conference:(BOOL)arg4 videoCallHint:(BOOL)arg5 avatarURL:(id)arg6 ;
-(void)endPushCallWithGUID:(id)arg1 conversationIdentity:(id)arg2 endReason:(long long)arg3 ;
-(void)endRingingCallWithGUID:(id)arg1 conversationIdentity:(id)arg2 endReason:(long long)arg3 ;
-(void)joinConferenceCallWithHostIdentity:(id)arg1 accessToken:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)startCallWithConversation:(id)arg1 withIdentities:(id)arg2 withVideo:(BOOL)arg3 withInitiationSource:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)canStartCallWithIdentities:(id)arg1 withVideo:(BOOL)arg2 error:(id*)arg3 ;
-(void)joinLiveConversation:(id)arg1 ;
-(id)liveCallForCallGUID:(id)arg1 ;
-(void)setMutableLiveCalls:(NSMutableArray *)arg1 ;
-(void)setRequestedAudioSessionSettingsByCall:(NSMapTable *)arg1 ;
-(void)setCallPerformanceInformationByCall:(NSMapTable *)arg1 ;
-(void)setLocalCallNotificationTokenByCall:(NSMapTable *)arg1 ;
-(void)setAudioRecorder:(SKPAudioRecorder *)arg1 ;
-(SKPIntentToken *)callHandlingIntent;
-(void)setNumberFormatter:(SKPPhoneNumberFormatter *)arg1 ;
-(SKPPhoneNumberFormatter *)numberFormatter;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)errorWithCode:(long long)arg1 ;
@end

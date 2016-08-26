/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNAuthenticationManager, FBClock;
@class MNThreadViewModel, MNThreadParticipantNameFormatter, MessageSourceResources, MNDateFormatter, NSString;

@interface MNReadReceiptDisplayController : NSObject <MNThreadViewModelConfigurable> {

	MNThreadViewModel* _threadViewModel;
	id<MNAuthenticationManager> _authManager;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MessageSourceResources* _messageSourceResources;
	MNDateFormatter* _dateFormatter;
	id<FBClock> _clock;

}

@property (nonatomic,retain) MNThreadViewModel * threadViewModel;                           //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (nonatomic,retain) id<MNAuthenticationManager> authManager;                       //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,retain) MNThreadParticipantNameFormatter * nameFormatter;              //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,retain) MessageSourceResources * messageSourceResources;               //@synthesize messageSourceResources=_messageSourceResources - In the implementation block
@property (nonatomic,retain) MNDateFormatter * dateFormatter;                               //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) id<FBClock> clock;                                             //@synthesize clock=_clock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readReceiptDisplayControllerWithAuthManager:(id)arg1 participantNameFormatter:(id)arg2 messageSourceResources:(id)arg3 dateFormatter:(id)arg4 clock:(id)arg5 ;
-(void)setAuthManager:(id<MNAuthenticationManager>)arg1 ;
-(id<MNAuthenticationManager>)authManager;
-(MNThreadViewModel *)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(void)setNameFormatter:(MNThreadParticipantNameFormatter *)arg1 ;
-(void)setMessageSourceResources:(MessageSourceResources *)arg1 ;
-(BOOL)messageRow:(id)arg1 isSeenByEveryone:(id)arg2 ;
-(id)getDisplayReadTime:(long long)arg1 ;
-(MessageSourceResources *)messageSourceResources;
-(id)displayInfoForMessageRow:(id)arg1 width:(double)arg2 font:(id)arg3 ;
-(id<FBClock>)clock;
-(void)setClock:(id<FBClock>)arg1 ;
-(MNThreadParticipantNameFormatter *)nameFormatter;
-(void)setDateFormatter:(MNDateFormatter *)arg1 ;
-(MNDateFormatter *)dateFormatter;
@end

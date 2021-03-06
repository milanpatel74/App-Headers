/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationManager;
@class MNUserStore, MNThreadParticipantNameFormatter, NSString;

@interface MNContactsRetrieverWithThreadSummaries : NSObject <FBClassProvidable> {

	MNUserStore* _userStore;
	id<MNAuthenticationManager> _authManager;
	MNThreadParticipantNameFormatter* _nameFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(unsigned long long)retrieveContactsWithThreadSummaries:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelRetrievingWithRequestId:(unsigned long long)arg1 ;
-(id)initWithUserStore:(id)arg1 authManager:(id)arg2 nameFormatter:(id)arg3 ;
-(void)_handleMultipleUserRequestSuccessWithUsers:(id)arg1 threadSummaries:(id)arg2 viewerId:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_handleMultipleUserRequestFailureWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_conversationContactsFromThreadSummaries:(id)arg1 contactsByUserId:(id)arg2 usersByUserId:(id)arg3 viewerId:(id)arg4 ;
@end


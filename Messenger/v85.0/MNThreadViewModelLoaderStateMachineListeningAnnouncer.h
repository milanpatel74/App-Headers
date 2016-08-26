/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNThreadViewModelLoaderStateMachineListening.h>

@class NSString;

@interface MNThreadViewModelLoaderStateMachineListeningAnnouncer : FBAnnouncerBase <MNThreadViewModelLoaderStateMachineListening>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCleanUpViewModelRequestWithId:(unsigned long long)arg1 ;
-(void)stateForViewModelRequest:(unsigned long long)arg1 didUpdateFromThreadRequestState:(unsigned long long)arg2 toThreadRequestState:(unsigned long long)arg3 userRequestState:(unsigned long long)arg4 threadViewModelLoadResult:(id)arg5 error:(id)arg6 ;
-(void)stateForViewModelRequest:(unsigned long long)arg1 didUpdateFromUserRequestState:(unsigned long long)arg2 toUserRequestState:(unsigned long long)arg3 threadRequestState:(unsigned long long)arg4 threadViewModelLoadResult:(id)arg5 error:(id)arg6 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

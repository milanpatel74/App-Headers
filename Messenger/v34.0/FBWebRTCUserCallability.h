/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDate;

@interface FBWebRTCUserCallability : NSObject {

	BOOL _canCall;
	NSString* _disableReason;
	NSString* _disableReasonId;
	NSDate* _updatedAt;

}

@property (nonatomic,readonly) BOOL canCall;                                 //@synthesize canCall=_canCall - In the implementation block
@property (nonatomic,copy,readonly) NSString * disableReason;                //@synthesize disableReason=_disableReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * disableReasonId;              //@synthesize disableReasonId=_disableReasonId - In the implementation block
@property (nonatomic,readonly) NSDate * updatedAt;                           //@synthesize updatedAt=_updatedAt - In the implementation block
-(id)initWithCanCall:(BOOL)arg1 disabledReason:(id)arg2 disabledReasonId:(id)arg3 ;
-(BOOL)canCall;
-(NSString *)disableReasonId;
-(NSString *)disableReason;
-(NSDate *)updatedAt;
-(id)initWithCanCall:(BOOL)arg1 disabledReason:(id)arg2 disableReasonId:(id)arg3 updatedAt:(id)arg4 ;
@end

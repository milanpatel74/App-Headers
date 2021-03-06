/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray, FBEventContext;

@interface FBEventAdminRsvpData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _eventId;
	NSString* _targetId;
	NSString* _guestStatus;
	NSArray* _tracking;
	FBEventContext* _context;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * eventId;                       //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) NSString * targetId;                      //@synthesize targetId=_targetId - In the implementation block
@property (nonatomic,copy) NSString * guestStatus;                   //@synthesize guestStatus=_guestStatus - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                       //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) FBEventContext * context;                 //@synthesize context=_context - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setGuestStatus:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)guestStatus;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)targetId;
-(void)setTargetId:(NSString *)arg1 ;
-(FBEventContext *)context;
-(void)setTracking:(NSArray *)arg1 ;
-(void)setContext:(FBEventContext *)arg1 ;
-(NSArray *)tracking;
-(void)setEventId:(NSString *)arg1 ;
-(NSString *)eventId;
@end


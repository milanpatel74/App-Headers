/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
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
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(void)setGuestStatus:(NSString *)arg1 ;
-(NSString *)guestStatus;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)targetId;
-(void)setTargetId:(NSString *)arg1 ;
-(FBEventContext *)context;
-(void)setTracking:(NSArray *)arg1 ;
-(void)setContext:(FBEventContext *)arg1 ;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
-(NSArray *)tracking;
@end

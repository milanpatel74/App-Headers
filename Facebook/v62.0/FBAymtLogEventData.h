/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBAymtLogEventData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _channelId;
	NSString* _eventType;
	NSString* _tipId;
	NSString* _target;
	NSString* _surface;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * channelId;                     //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,copy) NSString * eventType;                     //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * tipId;                         //@synthesize tipId=_tipId - In the implementation block
@property (nonatomic,copy) NSString * target;                        //@synthesize target=_target - In the implementation block
@property (nonatomic,copy) NSString * surface;                       //@synthesize surface=_surface - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setSurface:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setTipId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)tipId;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(NSString *)surface;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBContactPersonalName;

@interface FBContactCreateNoshimData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _contactSurface;
	NSString* _profileId;
	NSString* _phone;
	NSString* _countryCode;
	NSString* _addUnlessDeleted;
	NSString* _sendAdminMessage;
	FBContactPersonalName* _name;
	NSString* _messengerContactCreationSource;

}

@property (nonatomic,copy) NSString * clientMutationId;                            //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                     //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * contactSurface;                              //@synthesize contactSurface=_contactSurface - In the implementation block
@property (nonatomic,copy) NSString * profileId;                                   //@synthesize profileId=_profileId - In the implementation block
@property (nonatomic,copy) NSString * phone;                                       //@synthesize phone=_phone - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * addUnlessDeleted;                            //@synthesize addUnlessDeleted=_addUnlessDeleted - In the implementation block
@property (nonatomic,copy) NSString * sendAdminMessage;                            //@synthesize sendAdminMessage=_sendAdminMessage - In the implementation block
@property (nonatomic,copy) FBContactPersonalName * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * messengerContactCreationSource;              //@synthesize messengerContactCreationSource=_messengerContactCreationSource - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)contactSurface;
-(void)setContactSurface:(NSString *)arg1 ;
-(NSString *)addUnlessDeleted;
-(void)setAddUnlessDeleted:(NSString *)arg1 ;
-(NSString *)sendAdminMessage;
-(void)setSendAdminMessage:(NSString *)arg1 ;
-(NSString *)messengerContactCreationSource;
-(void)setMessengerContactCreationSource:(NSString *)arg1 ;
-(void)setName:(FBContactPersonalName *)arg1 ;
-(FBContactPersonalName *)name;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setPhone:(NSString *)arg1 ;
-(NSString *)phone;
-(void)setProfileId:(NSString *)arg1 ;
-(NSString *)profileId;
@end

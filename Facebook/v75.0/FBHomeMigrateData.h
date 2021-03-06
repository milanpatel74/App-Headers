/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBPrivacyData;

@interface FBHomeMigrateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _pageId;
	NSString* _residenceId;
	NSString* _name;
	NSString* _cityId;
	NSString* _neighborhoodName;
	NSString* _address;
	FBPrivacyData* _privacy;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                        //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * residenceId;                   //@synthesize residenceId=_residenceId - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * cityId;                        //@synthesize cityId=_cityId - In the implementation block
@property (nonatomic,copy) NSString * neighborhoodName;              //@synthesize neighborhoodName=_neighborhoodName - In the implementation block
@property (nonatomic,copy) NSString * address;                       //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) FBPrivacyData * privacy;                  //@synthesize privacy=_privacy - In the implementation block
-(void)setPrivacy:(FBPrivacyData *)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(void)setPageId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)pageId;
-(NSString *)cityId;
-(void)setCityId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(FBPrivacyData *)privacy;
-(NSString *)actorId;
-(NSString *)neighborhoodName;
-(void)setNeighborhoodName:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)residenceId;
-(void)setResidenceId:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
@end


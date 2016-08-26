/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBProfileIntroCardPhotosSetData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSArray* _photoIds;
	NSString* _publishFeedStory;
	NSArray* _collageLayout;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSArray * photoIds;                       //@synthesize photoIds=_photoIds - In the implementation block
@property (nonatomic,copy) NSString * publishFeedStory;              //@synthesize publishFeedStory=_publishFeedStory - In the implementation block
@property (nonatomic,copy) NSArray * collageLayout;                  //@synthesize collageLayout=_collageLayout - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSArray *)collageLayout;
-(void)setPhotoIds:(NSArray *)arg1 ;
-(void)setPublishFeedStory:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)photoIds;
-(NSString *)publishFeedStory;
-(void)setCollageLayout:(NSArray *)arg1 ;
@end

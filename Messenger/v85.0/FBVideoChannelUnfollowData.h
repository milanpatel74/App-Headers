/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBVideoChannelUnfollowData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _videoChannelId;
	NSString* _storyId;
	NSString* _surface;
	NSString* _videoHomeSessionId;
	NSString* _videoId;

}

@property (nonatomic,copy) NSString * clientMutationId;                //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                         //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * videoChannelId;                  //@synthesize videoChannelId=_videoChannelId - In the implementation block
@property (nonatomic,copy) NSString * storyId;                         //@synthesize storyId=_storyId - In the implementation block
@property (nonatomic,copy) NSString * surface;                         //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * videoHomeSessionId;              //@synthesize videoHomeSessionId=_videoHomeSessionId - In the implementation block
@property (nonatomic,copy) NSString * videoId;                         //@synthesize videoId=_videoId - In the implementation block
-(NSString *)videoId;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setVideoChannelId:(NSString *)arg1 ;
-(void)setVideoHomeSessionId:(NSString *)arg1 ;
-(void)setVideoId:(NSString *)arg1 ;
-(void)setSurface:(NSString *)arg1 ;
-(void)setStoryId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)storyId;
-(NSString *)videoChannelId;
-(NSString *)videoHomeSessionId;
-(NSString *)surface;
@end

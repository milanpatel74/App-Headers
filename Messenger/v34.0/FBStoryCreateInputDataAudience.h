/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class FBStoryCreateInputDataAudiencePrivacy, NSString;

@interface FBStoryCreateInputDataAudience : FBGraphQLInput {

	FBStoryCreateInputDataAudiencePrivacy* _privacy;
	NSString* _toId;
	NSString* _appendStoryId;
	NSString* _postChannelId;

}

@property (nonatomic,copy) FBStoryCreateInputDataAudiencePrivacy * privacy;              //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy) NSString * toId;                                              //@synthesize toId=_toId - In the implementation block
@property (nonatomic,copy) NSString * appendStoryId;                                     //@synthesize appendStoryId=_appendStoryId - In the implementation block
@property (nonatomic,copy) NSString * postChannelId;                                     //@synthesize postChannelId=_postChannelId - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBStoryCreateInputDataAudiencePrivacy *)privacy;
-(void)setPrivacy:(FBStoryCreateInputDataAudiencePrivacy *)arg1 ;
-(NSString *)toId;
-(void)setToId:(NSString *)arg1 ;
-(NSString *)appendStoryId;
-(void)setAppendStoryId:(NSString *)arg1 ;
-(NSString *)postChannelId;
-(void)setPostChannelId:(NSString *)arg1 ;
@end

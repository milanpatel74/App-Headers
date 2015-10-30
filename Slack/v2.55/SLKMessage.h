/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/_SLKMessage.h>
#import <Slack/SLKMessageGenerics.h>

@class NSDate, NSString, NSArray, UIImage, SLKChannel, SLKGroup, SLKIM, SLKStar, NSManagedObjectID, NSManagedObjectContext, NSNumber, SLKUser, SLKFile, SLKComment;

@interface SLKMessage : _SLKMessage <SLKMessageGenerics> {

	BOOL _isJoinMessage;
	BOOL _isEdited;
	BOOL _canHaveChannelMentions;
	BOOL _hasFile;
	BOOL _isLeaveMessage;
	NSDate* _createdAt;
	NSString* _avatarImageUrl;
	NSString* _largestImageUrl;
	NSDate* _deletedAt;
	NSString* _name;
	unsigned long long _subtype;
	unsigned long long _type;
	NSArray* _reactions;
	SLKMessage* _editedMessage;
	NSArray* _mentions;
	unsigned long long _deliveryStatus;
	UIImage* _iconImage;
	NSString* _predicateKey;

}

@property (nonatomic,readonly) NSArray * stringMentions; 
@property (nonatomic,readonly) NSArray * userGroupMentions; 
@property (nonatomic,readonly) unsigned long long contextType; 
@property (nonatomic,readonly) NSDate * deletedAt;                                         //@synthesize deletedAt=_deletedAt - In the implementation block
@property (nonatomic,readonly) NSString * largestImageUrl;                                 //@synthesize largestImageUrl=_largestImageUrl - In the implementation block
@property (nonatomic,retain) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasReactions; 
@property (assign,nonatomic) BOOL isJoinMessage;                                           //@synthesize isJoinMessage=_isJoinMessage - In the implementation block
@property (assign,nonatomic) BOOL isLeaveMessage;                                          //@synthesize isLeaveMessage=_isLeaveMessage - In the implementation block
@property (assign,nonatomic) BOOL canHaveChannelMentions;                                  //@synthesize canHaveChannelMentions=_canHaveChannelMentions - In the implementation block
@property (nonatomic,readonly) BOOL isDeletedFileMessage; 
@property (nonatomic,readonly) BOOL isPurposeMessage; 
@property (assign,nonatomic) BOOL hasFile;                                                 //@synthesize hasFile=_hasFile - In the implementation block
@property (nonatomic,retain) NSArray * mentions;                                           //@synthesize mentions=_mentions - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                          //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) id<SLKChannelGenerics> genericChannel; 
@property (nonatomic,retain) SLKChannel * channel; 
@property (nonatomic,retain) SLKMessage * editedMessage;                                   //@synthesize editedMessage=_editedMessage - In the implementation block
@property (nonatomic,retain) SLKGroup * group; 
@property (nonatomic,retain) SLKIM * im; 
@property (nonatomic,readonly) SLKStar * star; 
@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,readonly) NSString * predicateKey;                                    //@synthesize predicateKey=_predicateKey - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain) NSNumber * starred; 
@property (nonatomic,readonly) BOOL isStarred; 
@property (nonatomic,retain) NSArray * reactions; 
@property (nonatomic,retain) id reactionsBlob; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * timestamp; 
@property (assign,nonatomic) unsigned long long deliveryStatus;                            //@synthesize deliveryStatus=_deliveryStatus - In the implementation block
@property (nonatomic,retain) NSDate * createdAt;                                           //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) BOOL canEdit; 
@property (nonatomic,readonly) BOOL canDelete; 
@property (nonatomic,retain) NSString * userId; 
@property (nonatomic,retain) NSNumber * isMention; 
@property (nonatomic,readonly) SLKUser * user; 
@property (nonatomic,retain) SLKFile * file; 
@property (nonatomic,retain) NSString * channelId; 
@property (nonatomic,retain) NSString * replyId; 
@property (nonatomic,retain) NSNumber * isEphemeral; 
@property (nonatomic,retain) NSNumber * canBeUnread; 
@property (nonatomic,retain) NSString * typeString; 
@property (nonatomic,readonly) BOOL isTopicMessage; 
@property (nonatomic,readonly) BOOL isJoinOrLeaveMessage; 
@property (nonatomic,retain) NSString * botId; 
@property (nonatomic,retain) NSString * image48Url; 
@property (nonatomic,retain) NSString * image64Url; 
@property (nonatomic,retain) NSString * image72Url; 
@property (nonatomic,retain) NSString * ignoreIfAttachmentsSupported; 
@property (nonatomic,retain) NSString * emojiUrl; 
@property (nonatomic,retain) NSString * subtypeString; 
@property (nonatomic,retain) NSString * username; 
@property (nonatomic,retain) NSNumber * isHidden; 
@property (nonatomic,readonly) BOOL isBotNotification; 
@property (nonatomic,readonly) BOOL isBotMessage; 
@property (nonatomic,readonly) BOOL isIntegrationBotMessage; 
@property (nonatomic,readonly) BOOL isFileMessage; 
@property (nonatomic,retain) NSNumber * timestampNumber; 
@property (assign,nonatomic) BOOL isEdited;                                                //@synthesize isEdited=_isEdited - In the implementation block
@property (nonatomic,retain) NSString * deletedTimestamp; 
@property (nonatomic,retain) NSNumber * upload; 
@property (assign,nonatomic) unsigned long long subtype;                                   //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * avatarImageUrl;                                    //@synthesize avatarImageUrl=_avatarImageUrl - In the implementation block
@property (nonatomic,retain) NSString * accessibilityLabel; 
@property (nonatomic,retain) NSString * commentId; 
@property (nonatomic,retain) SLKComment * comment; 
@property (nonatomic,retain) NSArray * sortedAttachments; 
+(id)messageForGenericChannel:(id)arg1 timestamp:(id)arg2 contextType:(unsigned long long)arg3 ;
+(id)messageForId:(id)arg1 contextType:(unsigned long long)arg2 ;
+(id)messageForChannelId:(id)arg1 timestamp:(id)arg2 contextType:(unsigned long long)arg3 ;
+(id)messagesForChannelId:(id)arg1 contextType:(unsigned long long)arg2 ;
+(id)messagesForChannelIdPredicate:(id)arg1 contextType:(unsigned long long)arg2 ;
+(id)messagesForGenericChannel:(id)arg1 ;
+(void)messagesForChannelId:(id)arg1 completion:(/*^block*/id)arg2 contextType:(unsigned long long)arg3 ;
+(id)distinctKey;
-(void)editWithNewText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)delete:(/*^block*/id)arg1 ;
-(NSString *)accessibilityLabel;
-(NSArray *)stringMentions;
-(NSArray *)userGroupMentions;
-(NSString *)tsid;
-(NSString *)largestImageUrl;
-(id<SLKChannelGenerics>)genericChannel;
-(NSString *)predicateKey;
-(id)attachmentForId:(id)arg1 ;
-(NSArray *)sortedAttachments;
-(NSString *)avatarImageUrl;
-(NSArray *)reactions;
-(void)setReactions:(NSArray *)arg1 ;
-(BOOL)isBotMessage;
-(void)setAvatarImageUrl:(NSString *)arg1 ;
-(BOOL)isTopicMessage;
-(BOOL)isJoinOrLeaveMessage;
-(BOOL)isBotNotification;
-(BOOL)isEdited;
-(void)setIsEdited:(BOOL)arg1 ;
-(BOOL)isIntegrationBotMessage;
-(BOOL)isStarred;
-(SLKStar *)star;
-(BOOL)hasReactions;
-(BOOL)isEditableByMe;
-(void)setDeliveryStatus:(unsigned long long)arg1 ;
-(BOOL)isFileMessage;
-(BOOL)isDeletedFileMessage;
-(BOOL)canHaveChannelMentions;
-(SLKIM *)im;
-(SLKMessage *)editedMessage;
-(NSDate *)deletedAt;
-(BOOL)calculatedIsMention;
-(BOOL)isJoinMessage;
-(BOOL)isLeaveMessage;
-(BOOL)isPurposeMessage;
-(void)setIsJoinMessage:(BOOL)arg1 ;
-(void)setCanHaveChannelMentions:(BOOL)arg1 ;
-(void)setHasFile:(BOOL)arg1 ;
-(void)setEditedMessage:(SLKMessage *)arg1 ;
-(void)setIsLeaveMessage:(BOOL)arg1 ;
-(SLKUser *)user;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setMentions:(NSArray *)arg1 ;
-(NSArray *)mentions;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)subtype;
-(void)setSubtype:(unsigned long long)arg1 ;
-(UIImage *)iconImage;
-(SLKGroup *)group;
-(BOOL)canDelete;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(unsigned long long)contextType;
-(unsigned long long)deliveryStatus;
-(BOOL)hasFile;
-(SLKComment *)comment;
-(SLKFile *)file;
-(BOOL)canEdit;
-(NSDate *)createdAt;
-(SLKChannel *)channel;
@end


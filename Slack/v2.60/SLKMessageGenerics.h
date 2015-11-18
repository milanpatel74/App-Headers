/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSString, NSDate, NSNumber, SLKUser, SLKFile, NSArray, SLKCallRoom, SLKComment;


@protocol SLKMessageGenerics <SLKStarred,SLKReacted>
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * timestamp; 
@property (assign,nonatomic) unsigned long long deliveryStatus; 
@property (nonatomic,retain) NSDate * createdAt; 
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
@property (nonatomic,readonly) BOOL isCallMessage; 
@property (nonatomic,retain) NSNumber * timestampNumber; 
@property (assign,nonatomic) BOOL isEdited; 
@property (nonatomic,retain) NSString * deletedTimestamp; 
@property (nonatomic,retain) NSNumber * upload; 
@property (nonatomic,retain) NSArray * reactions; 
@property (assign,nonatomic) unsigned long long subtype; 
@property (nonatomic,retain) SLKCallRoom * callRoom; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * avatarImageUrl; 
@property (nonatomic,retain) NSString * accessibilityLabel; 
@property (nonatomic,retain) NSString * commentId; 
@property (nonatomic,retain) SLKComment * comment; 
@property (nonatomic,retain) NSArray * sortedAttachments; 
@optional
-(id)attachmentForId:(id)arg1;
-(NSArray *)sortedAttachments;
-(NSString *)avatarImageUrl;
-(void)setAvatarImageUrl:(id)arg1;
-(void)editWithNewText:(id)arg1 completion:(/*^block*/id)arg2;
-(SLKCallRoom *)callRoom;
-(void)setCallRoom:(id)arg1;
-(void)setSortedAttachments:(id)arg1;
-(void)setComment:(id)arg1;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(id)arg1;
-(NSString *)displayName;
-(void)setCommentId:(id)arg1;
-(NSString *)commentId;
-(SLKComment *)comment;
-(void)setDisplayName:(id)arg1;

@required
-(NSNumber *)isMention;
-(void)setIsMention:(id)arg1;
-(NSString *)botId;
-(NSString *)emojiUrl;
-(NSArray *)reactions;
-(void)setReactions:(id)arg1;
-(BOOL)isBotMessage;
-(void)setEmojiUrl:(id)arg1;
-(BOOL)isTopicMessage;
-(BOOL)isJoinOrLeaveMessage;
-(BOOL)isBotNotification;
-(BOOL)isEdited;
-(void)setIsEdited:(BOOL)arg1;
-(BOOL)isIntegrationBotMessage;
-(void)setDeliveryStatus:(unsigned long long)arg1;
-(NSString *)replyId;
-(void)setReplyId:(id)arg1;
-(NSNumber *)canBeUnread;
-(void)setCanBeUnread:(id)arg1;
-(void)setTypeString:(id)arg1;
-(void)setBotId:(id)arg1;
-(NSString *)image48Url;
-(void)setImage48Url:(id)arg1;
-(NSString *)image64Url;
-(void)setImage64Url:(id)arg1;
-(NSString *)image72Url;
-(void)setImage72Url:(id)arg1;
-(NSString *)ignoreIfAttachmentsSupported;
-(void)setIgnoreIfAttachmentsSupported:(id)arg1;
-(NSString *)subtypeString;
-(void)setSubtypeString:(id)arg1;
-(BOOL)isFileMessage;
-(BOOL)isCallMessage;
-(NSNumber *)timestampNumber;
-(void)setTimestampNumber:(id)arg1;
-(NSString *)deletedTimestamp;
-(void)setDeletedTimestamp:(id)arg1;
-(NSNumber *)upload;
-(void)setUpload:(id)arg1;
-(SLKUser *)user;
-(NSNumber *)isHidden;
-(NSString *)timestamp;
-(void)setTimestamp:(id)arg1;
-(unsigned long long)subtype;
-(NSString *)text;
-(void)setText:(id)arg1;
-(void)setSubtype:(unsigned long long)arg1;
-(void)setIsHidden:(id)arg1;
-(BOOL)canDelete;
-(void)setUserId:(id)arg1;
-(NSString *)userId;
-(void)setCreatedAt:(id)arg1;
-(NSNumber *)isEphemeral;
-(NSString *)typeString;
-(unsigned long long)deliveryStatus;
-(void)setFile:(id)arg1;
-(SLKFile *)file;
-(BOOL)canEdit;
-(NSDate *)createdAt;
-(void)setIsEphemeral:(id)arg1;
-(NSString *)channelId;
-(void)setChannelId:(id)arg1;
-(void)setUsername:(id)arg1;
-(NSString *)username;

@end

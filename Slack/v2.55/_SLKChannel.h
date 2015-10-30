/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:56:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SLKChannelID, NSNumber, NSString, SLKTeam;

@interface _SLKChannel : NSManagedObject

@property (nonatomic,readonly) SLKChannelID * objectID; 
@property (nonatomic,retain) NSNumber * archived; 
@property (assign) BOOL archivedValue; 
@property (nonatomic,retain) NSNumber * created; 
@property (assign) double createdValue; 
@property (nonatomic,retain) NSString * creatorId; 
@property (nonatomic,retain) NSNumber * failedLoadingHistory; 
@property (assign) BOOL failedLoadingHistoryValue; 
@property (nonatomic,retain) NSNumber * failedMessage; 
@property (assign) BOOL failedMessageValue; 
@property (nonatomic,retain) NSNumber * general; 
@property (assign) BOOL generalValue; 
@property (nonatomic,retain) NSNumber * hasMore; 
@property (assign) BOOL hasMoreValue; 
@property (nonatomic,retain) NSNumber * isUnread; 
@property (assign) BOOL isUnreadValue; 
@property (nonatomic,retain) NSString * lastRead; 
@property (nonatomic,retain) NSString * latest; 
@property (nonatomic,retain) NSNumber * markedForDeletion; 
@property (assign) BOOL markedForDeletionValue; 
@property (nonatomic,retain) NSNumber * member; 
@property (assign) BOOL memberValue; 
@property (nonatomic,retain) id memberIds; 
@property (nonatomic,retain) NSNumber * mentionCount; 
@property (assign) int mentionCountValue; 
@property (nonatomic,retain) NSNumber * muted; 
@property (assign) BOOL mutedValue; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * purposeCreatorId; 
@property (nonatomic,retain) NSNumber * purposeLastSet; 
@property (assign) double purposeLastSetValue; 
@property (nonatomic,retain) NSString * purposeText; 
@property (nonatomic,retain) NSNumber * starred; 
@property (assign) BOOL starredValue; 
@property (nonatomic,retain) NSString * topicCreatorId; 
@property (nonatomic,retain) NSNumber * topicLastSet; 
@property (assign) double topicLastSetValue; 
@property (nonatomic,retain) NSString * topicText; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,retain) NSNumber * unreadCount; 
@property (assign) short unreadCountValue; 
@property (nonatomic,retain) NSNumber * viewCount; 
@property (assign) int viewCountValue; 
@property (nonatomic,retain) SLKTeam * team; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)markedForDeletionValue;
-(void)setMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)primitiveMarkedForDeletionValue;
-(void)setPrimitiveMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)starredValue;
-(BOOL)archivedValue;
-(void)setArchivedValue:(BOOL)arg1 ;
-(BOOL)primitiveArchivedValue;
-(void)setPrimitiveArchivedValue:(BOOL)arg1 ;
-(double)createdValue;
-(void)setCreatedValue:(double)arg1 ;
-(double)primitiveCreatedValue;
-(void)setPrimitiveCreatedValue:(double)arg1 ;
-(BOOL)failedLoadingHistoryValue;
-(void)setFailedLoadingHistoryValue:(BOOL)arg1 ;
-(BOOL)primitiveFailedLoadingHistoryValue;
-(void)setPrimitiveFailedLoadingHistoryValue:(BOOL)arg1 ;
-(BOOL)failedMessageValue;
-(void)setFailedMessageValue:(BOOL)arg1 ;
-(BOOL)primitiveFailedMessageValue;
-(void)setPrimitiveFailedMessageValue:(BOOL)arg1 ;
-(BOOL)generalValue;
-(void)setGeneralValue:(BOOL)arg1 ;
-(BOOL)primitiveGeneralValue;
-(void)setPrimitiveGeneralValue:(BOOL)arg1 ;
-(BOOL)hasMoreValue;
-(void)setHasMoreValue:(BOOL)arg1 ;
-(BOOL)primitiveHasMoreValue;
-(void)setPrimitiveHasMoreValue:(BOOL)arg1 ;
-(BOOL)isUnreadValue;
-(void)setIsUnreadValue:(BOOL)arg1 ;
-(BOOL)primitiveIsUnreadValue;
-(void)setPrimitiveIsUnreadValue:(BOOL)arg1 ;
-(BOOL)memberValue;
-(void)setMemberValue:(BOOL)arg1 ;
-(BOOL)primitiveMemberValue;
-(void)setPrimitiveMemberValue:(BOOL)arg1 ;
-(int)mentionCountValue;
-(void)setMentionCountValue:(int)arg1 ;
-(int)primitiveMentionCountValue;
-(void)setPrimitiveMentionCountValue:(int)arg1 ;
-(BOOL)mutedValue;
-(void)setMutedValue:(BOOL)arg1 ;
-(BOOL)primitiveMutedValue;
-(void)setPrimitiveMutedValue:(BOOL)arg1 ;
-(double)purposeLastSetValue;
-(void)setPurposeLastSetValue:(double)arg1 ;
-(double)primitivePurposeLastSetValue;
-(void)setPrimitivePurposeLastSetValue:(double)arg1 ;
-(void)setStarredValue:(BOOL)arg1 ;
-(BOOL)primitiveStarredValue;
-(void)setPrimitiveStarredValue:(BOOL)arg1 ;
-(double)topicLastSetValue;
-(void)setTopicLastSetValue:(double)arg1 ;
-(double)primitiveTopicLastSetValue;
-(void)setPrimitiveTopicLastSetValue:(double)arg1 ;
-(short)unreadCountValue;
-(void)setUnreadCountValue:(short)arg1 ;
-(short)primitiveUnreadCountValue;
-(void)setPrimitiveUnreadCountValue:(short)arg1 ;
-(int)viewCountValue;
-(void)setViewCountValue:(int)arg1 ;
-(int)primitiveViewCountValue;
-(void)setPrimitiveViewCountValue:(int)arg1 ;
-(SLKChannelID *)objectID;
@end


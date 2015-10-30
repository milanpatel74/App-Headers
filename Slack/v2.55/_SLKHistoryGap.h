/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SLKHistoryGapID, NSString, NSNumber;

@interface _SLKHistoryGap : NSManagedObject

@property (nonatomic,readonly) SLKHistoryGapID * objectID; 
@property (nonatomic,retain) NSString * channelId; 
@property (nonatomic,retain) NSString * latest; 
@property (nonatomic,retain) NSNumber * markedForDeletion; 
@property (assign) BOOL markedForDeletionValue; 
@property (nonatomic,retain) NSString * oldest; 
@property (nonatomic,retain) NSNumber * viewCount; 
@property (assign) int viewCountValue; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)markedForDeletionValue;
-(void)setMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)primitiveMarkedForDeletionValue;
-(void)setPrimitiveMarkedForDeletionValue:(BOOL)arg1 ;
-(int)viewCountValue;
-(void)setViewCountValue:(int)arg1 ;
-(int)primitiveViewCountValue;
-(void)setPrimitiveViewCountValue:(int)arg1 ;
-(SLKHistoryGapID *)objectID;
@end

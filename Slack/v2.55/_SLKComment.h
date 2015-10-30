/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SLKCommentID, NSString, NSNumber, SLKFile, SLKStar;

@interface _SLKComment : NSManagedObject

@property (nonatomic,readonly) SLKCommentID * objectID; 
@property (nonatomic,retain) NSString * fileId; 
@property (nonatomic,retain) NSNumber * markedForDeletion; 
@property (assign) BOOL markedForDeletionValue; 
@property (nonatomic,retain) NSNumber * pending; 
@property (assign) BOOL pendingValue; 
@property (nonatomic,retain) id reactionsBlob; 
@property (nonatomic,retain) NSNumber * starred; 
@property (assign) BOOL starredValue; 
@property (nonatomic,retain) NSNumber * starsCount; 
@property (assign) int starsCountValue; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * timestamp; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,retain) NSString * userId; 
@property (nonatomic,retain) SLKFile * file; 
@property (nonatomic,retain) SLKFile * initialFile; 
@property (nonatomic,retain) SLKStar * star; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)markedForDeletionValue;
-(void)setMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)primitiveMarkedForDeletionValue;
-(void)setPrimitiveMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)starredValue;
-(void)setStarredValue:(BOOL)arg1 ;
-(BOOL)primitiveStarredValue;
-(void)setPrimitiveStarredValue:(BOOL)arg1 ;
-(BOOL)pendingValue;
-(int)starsCountValue;
-(void)setStarsCountValue:(int)arg1 ;
-(int)primitiveStarsCountValue;
-(void)setPrimitiveStarsCountValue:(int)arg1 ;
-(void)setPendingValue:(BOOL)arg1 ;
-(BOOL)primitivePendingValue;
-(void)setPrimitivePendingValue:(BOOL)arg1 ;
-(SLKCommentID *)objectID;
@end

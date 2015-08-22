/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, ATFileMessage;

@interface ATFileAttachment : NSManagedObject

@property (nonatomic,retain) NSString * localPath; 
@property (nonatomic,retain) NSString * mimeType; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSNumber * source; 
@property (nonatomic,retain) NSNumber * transient; 
@property (nonatomic,retain) NSNumber * userVisible; 
@property (nonatomic,retain) ATFileMessage * fileMessage; 
-(void)deleteSidecarIfNecessary;
-(id)fullLocalPath;
-(id)fullLocalPathForFilename:(id)arg1 ;
-(id)filenameForThumbnailOfSize:(CGSize)arg1 ;
-(id)createThumbnailOfSize:(CGSize)arg1 ;
-(void)setFileFromSourcePath:(id)arg1 ;
-(id)thumbnailOfSize:(CGSize)arg1 ;
-(void)createThumbnailOfSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFileData:(id)arg1 ;
-(void)prepareForDeletion;
@end

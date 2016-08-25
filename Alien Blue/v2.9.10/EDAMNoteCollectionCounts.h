/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface EDAMNoteCollectionCounts : NSObject <NSCoding> {

	NSMutableDictionary* __notebookCounts;
	NSMutableDictionary* __tagCounts;
	int __trashCount;
	BOOL __notebookCounts_isset;
	BOOL __tagCounts_isset;
	BOOL __trashCount_isset;

}

@property (setter=setNotebookCounts:,getter=notebookCounts,nonatomic,retain) NSMutableDictionary * notebookCounts; 
@property (setter=setTagCounts:,getter=tagCounts,nonatomic,retain) NSMutableDictionary * tagCounts; 
@property (assign,setter=setTrashCount:,getter=trashCount,nonatomic) int trashCount; 
-(void)read:(id)arg1 ;
-(void)setNotebookCounts:(NSMutableDictionary *)arg1 ;
-(void)setTagCounts:(NSMutableDictionary *)arg1 ;
-(void)setTrashCount:(int)arg1 ;
-(id)initWithNotebookCounts:(id)arg1 tagCounts:(id)arg2 trashCount:(int)arg3 ;
-(NSMutableDictionary *)notebookCounts;
-(BOOL)notebookCountsIsSet;
-(void)unsetNotebookCounts;
-(NSMutableDictionary *)tagCounts;
-(BOOL)tagCountsIsSet;
-(void)unsetTagCounts;
-(int)trashCount;
-(BOOL)trashCountIsSet;
-(void)unsetTrashCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)write:(id)arg1 ;
@end

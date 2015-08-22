/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface ECSectionMap : NSObject {

	NSMutableArray* _internalSections;

}

@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,retain) NSMutableArray * internalSections;              //@synthesize internalSections=_internalSections - In the implementation block
-(long long)integerCount;
-(id)sectionAtIndexPath:(id)arg1 ;
-(unsigned long long)indexForIdentifier:(id)arg1 ;
-(void)insertSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)sectionEntriesForIdentifier:(id)arg1 ;
-(unsigned long long)indexForSection:(id)arg1 ;
-(unsigned long long)indexForIdentifier:(id)arg1 nthOccurrence:(unsigned long long)arg2 ;
-(NSMutableArray *)internalSections;
-(void)setInternalSections:(NSMutableArray *)arg1 ;
-(id)allSectionsIndexSet;
-(id)sectionsForIdentifier:(id)arg1 ;
-(unsigned long long)totalRowsInAllSections;
-(id)init;
-(id)description;
-(void)reset;
-(NSArray *)sections;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)addSection:(id)arg1 ;
-(id)rowAtIndexPath:(id)arg1 ;
-(void)removeSectionAtIndex:(unsigned long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray, NSMutableDictionary;

@interface SLKCenteredCollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _isDefaultLayout;
	NSMutableArray* _insertedIndexPaths;
	NSMutableArray* _removedIndexPaths;
	NSMutableArray* _insertedSectionIndices;
	NSMutableArray* _removedSectionIndices;
	NSMutableDictionary* _currentCellAttributes;
	NSMutableDictionary* _currentSupplementaryAttributesByKind;
	NSMutableDictionary* _cachedCellAttributes;
	NSMutableDictionary* _cachedSupplementaryAttributesByKind;

}

@property (assign,nonatomic) BOOL isDefaultLayout;                                                    //@synthesize isDefaultLayout=_isDefaultLayout - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertedIndexPaths;                                     //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedIndexPaths;                                      //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertedSectionIndices;                                 //@synthesize insertedSectionIndices=_insertedSectionIndices - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedSectionIndices;                                  //@synthesize removedSectionIndices=_removedSectionIndices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentCellAttributes;                             //@synthesize currentCellAttributes=_currentCellAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentSupplementaryAttributesByKind;              //@synthesize currentSupplementaryAttributesByKind=_currentSupplementaryAttributesByKind - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCellAttributes;                              //@synthesize cachedCellAttributes=_cachedCellAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedSupplementaryAttributesByKind;               //@synthesize cachedSupplementaryAttributesByKind=_cachedSupplementaryAttributesByKind - In the implementation block
-(void)setIsDefaultLayout:(BOOL)arg1 ;
-(void)setCurrentCellAttributes:(NSMutableDictionary *)arg1 ;
-(void)setCurrentSupplementaryAttributesByKind:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)currentCellAttributes;
-(void)setCachedCellAttributes:(NSMutableDictionary *)arg1 ;
-(void)setCachedSupplementaryAttributesByKind:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)currentSupplementaryAttributesByKind;
-(NSMutableDictionary *)cachedSupplementaryAttributesByKind;
-(BOOL)isDefaultLayout;
-(void)setInsertedIndexPaths:(NSMutableArray *)arg1 ;
-(void)setRemovedIndexPaths:(NSMutableArray *)arg1 ;
-(void)setInsertedSectionIndices:(NSMutableArray *)arg1 ;
-(void)setRemovedSectionIndices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)insertedSectionIndices;
-(NSMutableArray *)removedSectionIndices;
-(NSMutableArray *)removedIndexPaths;
-(NSMutableDictionary *)cachedCellAttributes;
-(id)previousIndexPathForIndexPath:(id)arg1 accountForItems:(BOOL)arg2 ;
-(void)useDefaultLayoutAimations;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(NSMutableArray *)insertedIndexPaths;
@end

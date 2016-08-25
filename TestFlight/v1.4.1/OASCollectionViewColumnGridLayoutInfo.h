/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TestFlight/TestFlight-Structs.h>
@class NSMutableArray, NSArray;

@interface OASCollectionViewColumnGridLayoutInfo : NSObject {

	BOOL _sectionHeadersPinToVisibleBounds;
	BOOL _drawSeparatorOnVeryLastRow;
	NSMutableArray* _sections;
	double _headerReferenceHeight;
	double _collectionViewFooterReferenceHeight;
	unsigned long long _numberOfSections;
	NSArray* _rowLayoutInfo;
	unsigned long long _numberOfColumns;
	CGSize _itemReferenceSize;
	CGSize _contentSize;
	CGRect _insetBoundsForSupplementaryViews;
	CGRect _footerFrame;

}

@property (nonatomic,retain) NSMutableArray * sections;                               //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) CGSize itemReferenceSize;                                //@synthesize itemReferenceSize=_itemReferenceSize - In the implementation block
@property (assign,nonatomic) double headerReferenceHeight;                            //@synthesize headerReferenceHeight=_headerReferenceHeight - In the implementation block
@property (assign,nonatomic) double collectionViewFooterReferenceHeight;              //@synthesize collectionViewFooterReferenceHeight=_collectionViewFooterReferenceHeight - In the implementation block
@property (assign,nonatomic) BOOL sectionHeadersPinToVisibleBounds;                   //@synthesize sectionHeadersPinToVisibleBounds=_sectionHeadersPinToVisibleBounds - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSections;                     //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (nonatomic,retain) NSArray * rowLayoutInfo;                                 //@synthesize rowLayoutInfo=_rowLayoutInfo - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                      //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGRect insetBoundsForSupplementaryViews;                 //@synthesize insetBoundsForSupplementaryViews=_insetBoundsForSupplementaryViews - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns;                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) CGRect footerFrame;                                      //@synthesize footerFrame=_footerFrame - In the implementation block
@property (assign,nonatomic) BOOL drawSeparatorOnVeryLastRow;                         //@synthesize drawSeparatorOnVeryLastRow=_drawSeparatorOnVeryLastRow - In the implementation block
-(CGSize)itemReferenceSize;
-(void)setItemReferenceSize:(CGSize)arg1 ;
-(double)headerReferenceHeight;
-(void)setHeaderReferenceHeight:(double)arg1 ;
-(double)collectionViewFooterReferenceHeight;
-(void)setCollectionViewFooterReferenceHeight:(double)arg1 ;
-(NSArray *)rowLayoutInfo;
-(void)setRowLayoutInfo:(NSArray *)arg1 ;
-(CGRect)insetBoundsForSupplementaryViews;
-(void)setInsetBoundsForSupplementaryViews:(CGRect)arg1 ;
-(BOOL)drawSeparatorOnVeryLastRow;
-(void)setDrawSeparatorOnVeryLastRow:(BOOL)arg1 ;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfSections;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(CGRect)footerFrame;
-(void)setSectionHeadersPinToVisibleBounds:(BOOL)arg1 ;
-(BOOL)sectionHeadersPinToVisibleBounds;
-(void)setFooterFrame:(CGRect)arg1 ;
-(void)setNumberOfSections:(unsigned long long)arg1 ;
@end

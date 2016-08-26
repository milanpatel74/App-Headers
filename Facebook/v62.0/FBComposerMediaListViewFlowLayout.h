/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet, NSMutableDictionary, UIDynamicAnimator;

@interface FBComposerMediaListViewFlowLayout : UICollectionViewFlowLayout {

	NSMutableSet* _visibleIndexPathsSet;
	NSMutableSet* _itemIndexPathsToBeRemoved;
	NSMutableSet* _itemIndexPathsToInsert;
	NSMutableDictionary* _currentLayoutAttributes;
	NSMutableDictionary* _cachedLayoutAttributes;
	UIDynamicAnimator* _dynamicAnimator;
	double _scrollingLastestDelta;
	BOOL _dynamicInteractionEnabled;

}

@property (assign,nonatomic) BOOL dynamicInteractionEnabled;              //@synthesize dynamicInteractionEnabled=_dynamicInteractionEnabled - In the implementation block
-(BOOL)_canEnabledDynamic;
-(void)_reloadDynamicBehaviors;
-(BOOL)dynamicInteractionEnabled;
-(CGPoint)_springCenterFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 scrollDelta:(double)arg3 ;
-(id)initWithScrollDirection:(long long)arg1 ;
-(void)invalidateDynamicItems;
-(void)setDynamicInteractionEnabled:(BOOL)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

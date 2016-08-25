/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface EBUSimpleTopPinnedHeaderSectionLayout : UICollectionViewFlowLayout {

	BOOL _allowPullDown;
	BOOL _headerAdjustsVisibilityOnScroll;
	double _lastScrollYOffset;
	double _lastHeaderYOffset;

}

@property (assign,nonatomic) BOOL allowPullDown;                                //@synthesize allowPullDown=_allowPullDown - In the implementation block
@property (assign,nonatomic) BOOL headerAdjustsVisibilityOnScroll;              //@synthesize headerAdjustsVisibilityOnScroll=_headerAdjustsVisibilityOnScroll - In the implementation block
@property (assign,nonatomic) double lastScrollYOffset;                          //@synthesize lastScrollYOffset=_lastScrollYOffset - In the implementation block
@property (assign,nonatomic) double lastHeaderYOffset;                          //@synthesize lastHeaderYOffset=_lastHeaderYOffset - In the implementation block
-(void)setHeaderAdjustsVisibilityOnScroll:(BOOL)arg1 ;
-(double)lastScrollYOffset;
-(double)lastHeaderYOffset;
-(void)setLastHeaderYOffset:(double)arg1 ;
-(void)setLastScrollYOffset:(double)arg1 ;
-(BOOL)allowPullDown;
-(BOOL)headerAdjustsVisibilityOnScroll;
-(void)setAllowPullDown:(BOOL)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIView;

@interface EBURatingStarsView : UIView {

	BOOL _accessibilityHalfStar;
	double _rating;
	unsigned long long _roundingBehavior;
	NSMutableArray* _starViews;
	UIView* _baselineView;
	double _interstarSpacing;
	unsigned long long _accessibilityWholeStarRating;
	CGSize _starSize;

}

@property (nonatomic,retain) NSMutableArray * starViews;                                   //@synthesize starViews=_starViews - In the implementation block
@property (assign,nonatomic,__weak) UIView * baselineView;                                 //@synthesize baselineView=_baselineView - In the implementation block
@property (assign,nonatomic) double interstarSpacing;                                      //@synthesize interstarSpacing=_interstarSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long accessibilityWholeStarRating;              //@synthesize accessibilityWholeStarRating=_accessibilityWholeStarRating - In the implementation block
@property (assign,nonatomic) BOOL accessibilityHalfStar;                                   //@synthesize accessibilityHalfStar=_accessibilityHalfStar - In the implementation block
@property (assign,nonatomic) double rating;                                                //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) double numberOfStars; 
@property (assign,nonatomic) unsigned long long roundingBehavior;                          //@synthesize roundingBehavior=_roundingBehavior - In the implementation block
@property (assign,nonatomic) CGSize starSize;                                              //@synthesize starSize=_starSize - In the implementation block
-(void)setRoundingBehavior:(unsigned long long)arg1 ;
-(id)initWithStarSize:(CGSize)arg1 ;
-(void)setStarSize:(CGSize)arg1 ;
-(void)setStarViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)starViews;
-(void)layoutStars;
-(BOOL)accessibilityHalfStar;
-(unsigned long long)accessibilityWholeStarRating;
-(CGSize)starSize;
-(void)updateStarImages;
-(void)setAccessibilityWholeStarRating:(unsigned long long)arg1 ;
-(unsigned long long)roundingBehavior;
-(void)setAccessibilityHalfStar:(BOOL)arg1 ;
-(id)imageForStarPercentage:(long long)arg1 ;
-(double)interstarSpacing;
-(void)setInterstarSpacing:(double)arg1 ;
-(id)init;
-(CGSize)intrinsicContentSize;
-(id)viewForBaselineLayout;
-(id)accessibilityLabel;
-(id)viewForLastBaselineLayout;
-(void)setBaselineView:(UIView *)arg1 ;
-(UIView *)baselineView;
-(double)rating;
-(void)setRating:(double)arg1 ;
-(double)numberOfStars;
@end

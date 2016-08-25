/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUViewItemSectionController.h>
#import <eBay/EBUDynamicHeightViewDelegate.h>

@class EBUProductRatingView, EBUProductFeatureDialsView, EBUDynamicHeightLabel, NSArray, NSString;

@interface EBUProductRatingsAndReviewsSectionController : EBUViewItemSectionController <EBUDynamicHeightViewDelegate> {

	EBUProductRatingView* _ratingView;
	EBUProductFeatureDialsView* _dialsView;
	EBUDynamicHeightLabel* _relevantReviewsHeadingView;
	NSArray* _reviewViews;

}

@property (nonatomic,retain) EBUProductRatingView * ratingView;                               //@synthesize ratingView=_ratingView - In the implementation block
@property (nonatomic,retain) EBUProductFeatureDialsView * dialsView;                          //@synthesize dialsView=_dialsView - In the implementation block
@property (nonatomic,retain) EBUDynamicHeightLabel * relevantReviewsHeadingView;              //@synthesize relevantReviewsHeadingView=_relevantReviewsHeadingView - In the implementation block
@property (nonatomic,retain) NSArray * reviewViews;                                           //@synthesize reviewViews=_reviewViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewHeightChanged:(id)arg1 ;
-(void)updateViewsForWidth:(double)arg1 ;
-(EBUProductFeatureDialsView *)dialsView;
-(void)setDialsView:(EBUProductFeatureDialsView *)arg1 ;
-(EBUDynamicHeightLabel *)relevantReviewsHeadingView;
-(void)setRelevantReviewsHeadingView:(EBUDynamicHeightLabel *)arg1 ;
-(long long)maxReviewCount;
-(id)seeAllReviewsView;
-(id)writeAReviewView;
-(void)setReviewViews:(NSArray *)arg1 ;
-(NSArray *)reviewViews;
-(id)init;
-(void)updateViews;
-(void)setRatingView:(EBUProductRatingView *)arg1 ;
-(EBUProductRatingView *)ratingView;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUMoreLikeThisSectionController.h>
#import <nautilus/EBNMerchDataManagerObserver.h>
#import <eBay/EBUModelObjectToCollectionCellSectionDelegate.h>

@class EBUViewItemSectionTitleLabel, EPHLoadingView, EBUListingSummaryView, NSString;

@interface EPHMoreLikeThisSectionController : EBUMoreLikeThisSectionController <EBNMerchDataManagerObserver, EBUModelObjectToCollectionCellSectionDelegate> {

	EBUViewItemSectionTitleLabel* _moreLikeThisLabel;
	EPHLoadingView* _loadingView;
	long long _sectionIndexMoreLikeThis;
	EBUListingSummaryView* _moreLikeThisMeasurementView;

}

@property (nonatomic,retain) EBUViewItemSectionTitleLabel * moreLikeThisLabel;                 //@synthesize moreLikeThisLabel=_moreLikeThisLabel - In the implementation block
@property (nonatomic,retain) EPHLoadingView * loadingView;                                     //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) long long sectionIndexMoreLikeThis;                               //@synthesize sectionIndexMoreLikeThis=_sectionIndexMoreLikeThis - In the implementation block
@property (nonatomic,retain) EBUListingSummaryView * moreLikeThisMeasurementView;              //@synthesize moreLikeThisMeasurementView=_moreLikeThisMeasurementView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClassesForIdentifiers;
-(id)cellIdentifierForModelObject:(id)arg1 ;
-(CGSize)cellSizeForModelObject:(id)arg1 maximumSize:(CGSize)arg2 ;
-(void)populateCell:(id)arg1 withModelObject:(id)arg2 ;
-(BOOL)wantsTapsForModelObject:(id)arg1 ;
-(EBUListingSummaryView *)moreLikeThisMeasurementView;
-(void)setMoreLikeThisMeasurementView:(EBUListingSummaryView *)arg1 ;
-(EBUViewItemSectionTitleLabel *)moreLikeThisLabel;
-(void)setMoreLikeThisLabel:(EBUViewItemSectionTitleLabel *)arg1 ;
-(long long)sectionIndexMoreLikeThis;
-(void)setSectionIndexMoreLikeThis:(long long)arg1 ;
-(void)merchDataManagerUpdated:(id)arg1 ;
-(id)init;
-(void)didSelectItemAtIndex:(long long)arg1 ;
-(void)updateViews;
-(EPHLoadingView *)loadingView;
-(void)setLoadingView:(EPHLoadingView *)arg1 ;
@end

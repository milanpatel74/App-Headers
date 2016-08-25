/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUViewItemSectionController.h>
#import <eBay/EBUShowMoreViewDelegate.h>

@class EBUViewItemSectionTitleLabel, EBUNameValueGridView, EBURowColumnGridView, EBUShowMoreView, TimeLeftCounter, NSString;

@interface EPHBiddingInfoSectionController : EBUViewItemSectionController <EBUShowMoreViewDelegate> {

	EBUViewItemSectionTitleLabel* _titleView;
	EBUNameValueGridView* _basicInfoView;
	EBURowColumnGridView* _biddingInfoView;
	EBUShowMoreView* _showMoreView;
	unsigned long long _currentShowState;
	EBURowColumnGridView* _topBiddingHistory;
	TimeLeftCounter* _timeLeftCounter;

}

@property (nonatomic,retain) EBUViewItemSectionTitleLabel * titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) EBUNameValueGridView * basicInfoView;                  //@synthesize basicInfoView=_basicInfoView - In the implementation block
@property (nonatomic,retain) EBURowColumnGridView * biddingInfoView;                //@synthesize biddingInfoView=_biddingInfoView - In the implementation block
@property (nonatomic,retain) EBUShowMoreView * showMoreView;                        //@synthesize showMoreView=_showMoreView - In the implementation block
@property (assign,nonatomic) unsigned long long currentShowState;                   //@synthesize currentShowState=_currentShowState - In the implementation block
@property (nonatomic,retain) EBURowColumnGridView * topBiddingHistory;              //@synthesize topBiddingHistory=_topBiddingHistory - In the implementation block
@property (nonatomic,retain) TimeLeftCounter * timeLeftCounter;                     //@synthesize timeLeftCounter=_timeLeftCounter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentShowState:(unsigned long long)arg1 ;
-(unsigned long long)currentShowState;
-(EBUShowMoreView *)showMoreView;
-(void)setShowMoreView:(EBUShowMoreView *)arg1 ;
-(TimeLeftCounter *)timeLeftCounter;
-(void)setTimeLeftCounter:(TimeLeftCounter *)arg1 ;
-(void)showMoreView:(id)arg1 didChangeShowState:(unsigned long long)arg2 ;
-(EBUNameValueGridView *)basicInfoView;
-(EBURowColumnGridView *)topBiddingHistory;
-(void)setBasicInfoView:(EBUNameValueGridView *)arg1 ;
-(EBURowColumnGridView *)biddingInfoView;
-(void)setBiddingInfoView:(EBURowColumnGridView *)arg1 ;
-(void)setTopBiddingHistory:(EBURowColumnGridView *)arg1 ;
-(void)dealloc;
-(id)init;
-(EBUViewItemSectionTitleLabel *)titleView;
-(void)setTitleView:(EBUViewItemSectionTitleLabel *)arg1 ;
-(void)didSelectItemAtIndex:(long long)arg1 ;
-(void)updateViews;
@end

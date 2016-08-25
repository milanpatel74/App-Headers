/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECAdDetailsCollectionViewCell.h>
#import <Gumtree/ECAdDetailsViewCell.h>

@protocol ECObserverSetToken;
@class UIView, NSLayoutConstraint, UILabel, UIButton, UIImageView, ECActivityIndicatorView, ECAdDetailsInfoView, ECBannerAdTabMetadata, NSString;

@interface ECAdDetailsBannerAdTabCollectionViewCell : ECAdDetailsCollectionViewCell <ECAdDetailsViewCell> {

	UIView* _topView;
	UIView* _bannerContainerView;
	NSLayoutConstraint* _bannerContainerHeightConstraint;
	UILabel* _label;
	UIButton* _toggleExpansionButton;
	UIImageView* _logoView;
	UIImageView* _chevronView;
	UIView* _bannerView;
	ECActivityIndicatorView* _activityIndicator;
	ECAdDetailsInfoView* _detailsInfoView;
	ECBannerAdTabMetadata* _representedObject;
	id<ECObserverSetToken> _stateObserverToken;
	id<ECObserverSetToken> _itemObserverToken;
	CGRect _bannerPlaceholderSizingRect;

}

@property (nonatomic,retain) UIView * topView;                                                  //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) UIView * bannerContainerView;                                      //@synthesize bannerContainerView=_bannerContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bannerContainerHeightConstraint;              //@synthesize bannerContainerHeightConstraint=_bannerContainerHeightConstraint - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIButton * toggleExpansionButton;                                  //@synthesize toggleExpansionButton=_toggleExpansionButton - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                                            //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                                         //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UIView * bannerView;                                               //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) ECActivityIndicatorView * activityIndicator;                       //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic,__weak) ECAdDetailsInfoView * detailsInfoView;                      //@synthesize detailsInfoView=_detailsInfoView - In the implementation block
@property (nonatomic,retain) ECBannerAdTabMetadata * representedObject;                         //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,retain) id<ECObserverSetToken> stateObserverToken;                         //@synthesize stateObserverToken=_stateObserverToken - In the implementation block
@property (nonatomic,retain) id<ECObserverSetToken> itemObserverToken;                          //@synthesize itemObserverToken=_itemObserverToken - In the implementation block
@property (assign,nonatomic) CGRect bannerPlaceholderSizingRect;                                //@synthesize bannerPlaceholderSizingRect=_bannerPlaceholderSizingRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeActivityIndicator;
-(void)setItem:(id)arg1 isSizingCell:(BOOL)arg2 ;
-(void)setDetailsInfoView:(ECAdDetailsInfoView *)arg1 ;
-(ECAdDetailsInfoView *)detailsInfoView;
-(UIView *)bannerContainerView;
-(id<ECObserverSetToken>)stateObserverToken;
-(id<ECObserverSetToken>)itemObserverToken;
-(NSLayoutConstraint *)bannerContainerHeightConstraint;
-(void)addActivityIndicatorWithConstraints;
-(void)removeBannerView;
-(void)setStateObserverToken:(id<ECObserverSetToken>)arg1 ;
-(CGRect)bannerPlaceholderSizingRect;
-(void)addBannerViewWithAd:(id)arg1 ;
-(void)setItemObserverToken:(id<ECObserverSetToken>)arg1 ;
-(void)bannerContainerViewCenterView:(id)arg1 ;
-(void)resetForReuse;
-(void)expansionToggleAction:(id)arg1 ;
-(void)setBannerContainerView:(UIView *)arg1 ;
-(void)setBannerContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIButton *)toggleExpansionButton;
-(void)setToggleExpansionButton:(UIButton *)arg1 ;
-(void)setBannerPlaceholderSizingRect:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIView *)topView;
-(ECActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(ECActivityIndicatorView *)arg1 ;
-(ECBannerAdTabMetadata *)representedObject;
-(void)setRepresentedObject:(ECBannerAdTabMetadata *)arg1 ;
-(void)setTopView:(UIView *)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(UIView *)bannerView;
-(UIImageView *)logoView;
-(void)setLogoView:(UIImageView *)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
@end

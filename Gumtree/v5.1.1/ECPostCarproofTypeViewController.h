/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>

@class UILabel, UIButton, ECFeatureProvider, ECCarproofConfig;

@interface ECPostCarproofTypeViewController : ECBaseViewController {

	/*^block*/id _typeSelectedHandler;
	unsigned long long _selectedType;
	UILabel* _headerLabel;
	UIButton* _claimsCheckboxButton;
	UILabel* _claimsTitleLabel;
	UILabel* _claimsSubtitleLabel;
	UILabel* _claimsPriceLabel;
	UIButton* _verifiedCheckboxButton;
	UILabel* _verifiedTitleLabel;
	UILabel* _verifiedSubtitleLabel;
	UILabel* _verifiedPriceLabel;
	UIButton* _alredyHaveCheckboxButton;
	UILabel* _alredyHaveTitleLabel;
	UILabel* _alredyHaveSubtitleLabel;
	UIButton* _doNotWantCheckboxButton;
	UILabel* _doNotWantTitleLabel;
	ECFeatureProvider* _featureProvider;
	ECCarproofConfig* _carproofConfig;

}

@property (assign,nonatomic) unsigned long long selectedType;                  //@synthesize selectedType=_selectedType - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                            //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UIButton * claimsCheckboxButton;                  //@synthesize claimsCheckboxButton=_claimsCheckboxButton - In the implementation block
@property (nonatomic,retain) UILabel * claimsTitleLabel;                       //@synthesize claimsTitleLabel=_claimsTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * claimsSubtitleLabel;                    //@synthesize claimsSubtitleLabel=_claimsSubtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * claimsPriceLabel;                       //@synthesize claimsPriceLabel=_claimsPriceLabel - In the implementation block
@property (nonatomic,retain) UIButton * verifiedCheckboxButton;                //@synthesize verifiedCheckboxButton=_verifiedCheckboxButton - In the implementation block
@property (nonatomic,retain) UILabel * verifiedTitleLabel;                     //@synthesize verifiedTitleLabel=_verifiedTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * verifiedSubtitleLabel;                  //@synthesize verifiedSubtitleLabel=_verifiedSubtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * verifiedPriceLabel;                     //@synthesize verifiedPriceLabel=_verifiedPriceLabel - In the implementation block
@property (nonatomic,retain) UIButton * alredyHaveCheckboxButton;              //@synthesize alredyHaveCheckboxButton=_alredyHaveCheckboxButton - In the implementation block
@property (nonatomic,retain) UILabel * alredyHaveTitleLabel;                   //@synthesize alredyHaveTitleLabel=_alredyHaveTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * alredyHaveSubtitleLabel;                //@synthesize alredyHaveSubtitleLabel=_alredyHaveSubtitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * doNotWantCheckboxButton;               //@synthesize doNotWantCheckboxButton=_doNotWantCheckboxButton - In the implementation block
@property (nonatomic,retain) UILabel * doNotWantTitleLabel;                    //@synthesize doNotWantTitleLabel=_doNotWantTitleLabel - In the implementation block
@property (nonatomic,retain) ECFeatureProvider * featureProvider;              //@synthesize featureProvider=_featureProvider - In the implementation block
@property (nonatomic,retain) ECCarproofConfig * carproofConfig;                //@synthesize carproofConfig=_carproofConfig - In the implementation block
@property (nonatomic,copy) id typeSelectedHandler;                             //@synthesize typeSelectedHandler=_typeSelectedHandler - In the implementation block
-(ECFeatureProvider *)featureProvider;
-(void)setFeatureProvider:(ECFeatureProvider *)arg1 ;
-(ECCarproofConfig *)carproofConfig;
-(id)initWithPostCarproofType:(unsigned long long)arg1 featureProvier:(id)arg2 carproofConfig:(id)arg3 ;
-(void)setTypeSelectedHandler:(id)arg1 ;
-(void)setSelectedType:(unsigned long long)arg1 ;
-(void)setCarproofConfig:(ECCarproofConfig *)arg1 ;
-(void)updatePrices;
-(unsigned long long)selectedType;
-(UILabel *)claimsTitleLabel;
-(UILabel *)claimsSubtitleLabel;
-(UILabel *)verifiedTitleLabel;
-(UILabel *)verifiedSubtitleLabel;
-(UILabel *)alredyHaveTitleLabel;
-(UILabel *)alredyHaveSubtitleLabel;
-(UILabel *)doNotWantTitleLabel;
-(UILabel *)claimsPriceLabel;
-(UILabel *)verifiedPriceLabel;
-(UIButton *)claimsCheckboxButton;
-(UIButton *)verifiedCheckboxButton;
-(UIButton *)alredyHaveCheckboxButton;
-(UIButton *)doNotWantCheckboxButton;
-(id)typeSelectedHandler;
-(void)callSelectedHandler;
-(void)clickOnClaimsCheckbox:(id)arg1 ;
-(void)clickOnVerifiedCheckbox:(id)arg1 ;
-(void)clickOnAlreadyHaveCheckbox:(id)arg1 ;
-(void)clickOnDoNotWantCheckbox:(id)arg1 ;
-(void)setClaimsCheckboxButton:(UIButton *)arg1 ;
-(void)setClaimsTitleLabel:(UILabel *)arg1 ;
-(void)setClaimsSubtitleLabel:(UILabel *)arg1 ;
-(void)setClaimsPriceLabel:(UILabel *)arg1 ;
-(void)setVerifiedCheckboxButton:(UIButton *)arg1 ;
-(void)setVerifiedTitleLabel:(UILabel *)arg1 ;
-(void)setVerifiedSubtitleLabel:(UILabel *)arg1 ;
-(void)setVerifiedPriceLabel:(UILabel *)arg1 ;
-(void)setAlredyHaveCheckboxButton:(UIButton *)arg1 ;
-(void)setAlredyHaveTitleLabel:(UILabel *)arg1 ;
-(void)setAlredyHaveSubtitleLabel:(UILabel *)arg1 ;
-(void)setDoNotWantCheckboxButton:(UIButton *)arg1 ;
-(void)setDoNotWantTitleLabel:(UILabel *)arg1 ;
-(id)init;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateSelection;
-(void)updateLabels;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
@end

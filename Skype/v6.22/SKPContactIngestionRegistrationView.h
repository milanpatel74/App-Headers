/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class MKDefaultButton, UILabel, UIView;

@interface SKPContactIngestionRegistrationView : UIView {

	/*^block*/id _nextBlock;
	/*^block*/id _allowBlock;
	/*^block*/id _learnMoreBlock;
	/*^block*/id _cancelBlock;
	MKDefaultButton* _backButton;
	UILabel* _titleLabel;
	UILabel* _explanationLabel;
	MKDefaultButton* _learnMoreButton;
	UIView* _iconContainerView;
	MKDefaultButton* _nextButton;

}

@property (nonatomic,retain) MKDefaultButton * backButton;                   //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * explanationLabel;                     //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (nonatomic,retain) MKDefaultButton * learnMoreButton;              //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIView * iconContainerView;                     //@synthesize iconContainerView=_iconContainerView - In the implementation block
@property (nonatomic,retain) MKDefaultButton * nextButton;                   //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,copy) id nextBlock;                                     //@synthesize nextBlock=_nextBlock - In the implementation block
@property (nonatomic,copy) id allowBlock;                                    //@synthesize allowBlock=_allowBlock - In the implementation block
@property (nonatomic,copy) id learnMoreBlock;                                //@synthesize learnMoreBlock=_learnMoreBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                   //@synthesize cancelBlock=_cancelBlock - In the implementation block
-(void)setupView;
-(id)allowBlock;
-(void)setNextBlock:(id)arg1 ;
-(void)setAllowBlock:(id)arg1 ;
-(void)setLearnMoreBlock:(id)arg1 ;
-(void)setExplanationLabel:(UILabel *)arg1 ;
-(UIView *)iconContainerView;
-(id)learnMoreBlock;
-(id)nextBlock;
-(id)constraintsForCancelButton;
-(id)constraintsForTitle;
-(id)constraintsForExplanationBelowTitle;
-(id)constraintsForLearnMoreButton;
-(id)constraintsForIconContainerView;
-(id)constraintsForNextButton;
-(void)setIconContainerView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(MKDefaultButton *)nextButton;
-(void)setNextButton:(MKDefaultButton *)arg1 ;
-(id)cancelBlock;
-(UILabel *)explanationLabel;
-(MKDefaultButton *)backButton;
-(MKDefaultButton *)learnMoreButton;
-(void)setCancelBlock:(id)arg1 ;
-(void)setBackButton:(MKDefaultButton *)arg1 ;
-(void)setLearnMoreButton:(MKDefaultButton *)arg1 ;
@end

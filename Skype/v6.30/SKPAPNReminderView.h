/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class MKParagraphView, UILabel, MKDefaultButton, NSLayoutConstraint;

@interface SKPAPNReminderView : UIView {

	/*^block*/id _takeActionBlock;
	/*^block*/id _notNowBlock;
	unsigned long long _style;
	unsigned long long _numberOfTimesShown;
	MKParagraphView* _paragraphView;
	UILabel* _iconLabel;
	MKDefaultButton* _takeActionButton;
	MKDefaultButton* _notNowButton;
	NSLayoutConstraint* _titleTopMarginConstraint;
	NSLayoutConstraint* _notNowButtonBottomMarginConstraint;
	NSLayoutConstraint* _takeActionButtomBottomMarginConstraint;

}

@property (assign,nonatomic) unsigned long long style;                                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTimesShown;                                    //@synthesize numberOfTimesShown=_numberOfTimesShown - In the implementation block
@property (nonatomic,retain) MKParagraphView * paragraphView;                                          //@synthesize paragraphView=_paragraphView - In the implementation block
@property (nonatomic,retain) UILabel * iconLabel;                                                      //@synthesize iconLabel=_iconLabel - In the implementation block
@property (nonatomic,retain) MKDefaultButton * takeActionButton;                                       //@synthesize takeActionButton=_takeActionButton - In the implementation block
@property (nonatomic,retain) MKDefaultButton * notNowButton;                                           //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTopMarginConstraint;                            //@synthesize titleTopMarginConstraint=_titleTopMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * notNowButtonBottomMarginConstraint;                  //@synthesize notNowButtonBottomMarginConstraint=_notNowButtonBottomMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * takeActionButtomBottomMarginConstraint;              //@synthesize takeActionButtomBottomMarginConstraint=_takeActionButtomBottomMarginConstraint - In the implementation block
@property (nonatomic,copy) id takeActionBlock;                                                         //@synthesize takeActionBlock=_takeActionBlock - In the implementation block
@property (nonatomic,copy) id notNowBlock;                                                             //@synthesize notNowBlock=_notNowBlock - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(UILabel *)iconLabel;
-(void)setIconLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)notNowButtonBottomMarginConstraint;
-(void)setTitleTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNotNowButtonBottomMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNotNowButton:(MKDefaultButton *)arg1 ;
-(void)createSubviews;
-(void)setParagraphView:(MKParagraphView *)arg1 ;
-(MKParagraphView *)paragraphView;
-(void)setNumberOfTimesShown:(unsigned long long)arg1 ;
-(void)setTakeActionBlock:(id)arg1 ;
-(unsigned long long)numberOfTimesShown;
-(void)setNotNowBlock:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 numberOfTimesShown:(unsigned long long)arg3 ;
-(void)setTakeActionButton:(MKDefaultButton *)arg1 ;
-(MKDefaultButton *)takeActionButton;
-(void)takeActionButtonPressed:(id)arg1 ;
-(void)notNowButtonPressed:(id)arg1 ;
-(NSLayoutConstraint *)takeActionButtomBottomMarginConstraint;
-(void)setTakeActionButtomBottomMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(id)takeActionBlock;
-(id)notNowBlock;
-(unsigned long long)style;
-(void)updateConstraints;
-(void)setStyle:(unsigned long long)arg1 ;
-(MKDefaultButton *)notNowButton;
-(id)viewConstraints;
-(NSLayoutConstraint *)titleTopMarginConstraint;
@end


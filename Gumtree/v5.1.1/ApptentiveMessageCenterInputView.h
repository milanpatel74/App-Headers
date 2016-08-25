/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIButton, ApptentiveAttachButton, UITextView, UIView, UIColor, NSLayoutConstraint, NSArray;

@interface ApptentiveMessageCenterInputView : UIView {

	UILabel* _titleLabel;
	UIButton* _sendButton;
	UIButton* _clearButton;
	ApptentiveAttachButton* _attachButton;
	UITextView* _messageView;
	UIView* _containerView;
	UIView* _sendBar;
	UILabel* _placeholderLabel;
	long long _orientation;
	UIColor* _borderColor;
	NSLayoutConstraint* _sendBarLeadingToSuperview;
	NSLayoutConstraint* _textViewTrailingToSuperview;
	NSLayoutConstraint* _sendBarBottomToTextView;
	NSLayoutConstraint* _titleLabelToClearButton;
	NSLayoutConstraint* _clearButtonToAttachButton;
	NSLayoutConstraint* _attachButtonToSendButton;
	NSLayoutConstraint* _buttonBaselines;
	NSLayoutConstraint* _buttonCenters;
	NSLayoutConstraint* _sendButtonVerticalCenter;
	NSLayoutConstraint* _clearButtonLeadingToSuperview;
	NSLayoutConstraint* _outerTopSpace;
	NSLayoutConstraint* _outerBottomSpace;
	double _regularOuterVerticalSpace;
	NSArray* _landscapeConstraints;
	NSArray* _portraitConstraints;
	NSArray* _landscapeSendBarConstraints;
	NSArray* _portraitSendBarConstraints;

}

@property (nonatomic,retain) NSLayoutConstraint * sendBarLeadingToSuperview;                  //@synthesize sendBarLeadingToSuperview=_sendBarLeadingToSuperview - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewTrailingToSuperview;                //@synthesize textViewTrailingToSuperview=_textViewTrailingToSuperview - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * sendBarBottomToTextView;                    //@synthesize sendBarBottomToTextView=_sendBarBottomToTextView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelToClearButton;                    //@synthesize titleLabelToClearButton=_titleLabelToClearButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * clearButtonToAttachButton;                  //@synthesize clearButtonToAttachButton=_clearButtonToAttachButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * attachButtonToSendButton;                   //@synthesize attachButtonToSendButton=_attachButtonToSendButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonBaselines;                            //@synthesize buttonBaselines=_buttonBaselines - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonCenters;                              //@synthesize buttonCenters=_buttonCenters - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * sendButtonVerticalCenter;                   //@synthesize sendButtonVerticalCenter=_sendButtonVerticalCenter - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * clearButtonLeadingToSuperview;              //@synthesize clearButtonLeadingToSuperview=_clearButtonLeadingToSuperview - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * outerTopSpace;                              //@synthesize outerTopSpace=_outerTopSpace - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * outerBottomSpace;                           //@synthesize outerBottomSpace=_outerBottomSpace - In the implementation block
@property (assign,nonatomic) double regularOuterVerticalSpace;                                //@synthesize regularOuterVerticalSpace=_regularOuterVerticalSpace - In the implementation block
@property (nonatomic,retain) NSArray * landscapeConstraints;                                  //@synthesize landscapeConstraints=_landscapeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * portraitConstraints;                                   //@synthesize portraitConstraints=_portraitConstraints - In the implementation block
@property (nonatomic,retain) NSArray * landscapeSendBarConstraints;                           //@synthesize landscapeSendBarConstraints=_landscapeSendBarConstraints - In the implementation block
@property (nonatomic,retain) NSArray * portraitSendBarConstraints;                            //@synthesize portraitSendBarConstraints=_portraitSendBarConstraints - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * sendButton;                                    //@synthesize sendButton=_sendButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * clearButton;                                   //@synthesize clearButton=_clearButton - In the implementation block
@property (assign,nonatomic,__weak) ApptentiveAttachButton * attachButton;                    //@synthesize attachButton=_attachButton - In the implementation block
@property (assign,nonatomic,__weak) UITextView * messageView;                                 //@synthesize messageView=_messageView - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                                   //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * sendBar;                                         //@synthesize sendBar=_sendBar - In the implementation block
@property (assign,nonatomic,__weak) UILabel * placeholderLabel;                               //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic) long long orientation;                                           //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                           //@synthesize borderColor=_borderColor - In the implementation block
-(UIView *)sendBar;
-(NSLayoutConstraint *)outerTopSpace;
-(void)setRegularOuterVerticalSpace:(double)arg1 ;
-(UITextView *)messageView;
-(NSLayoutConstraint *)sendBarLeadingToSuperview;
-(NSLayoutConstraint *)sendBarBottomToTextView;
-(NSLayoutConstraint *)textViewTrailingToSuperview;
-(NSLayoutConstraint *)titleLabelToClearButton;
-(NSLayoutConstraint *)attachButtonToSendButton;
-(NSLayoutConstraint *)clearButtonToAttachButton;
-(NSLayoutConstraint *)buttonCenters;
-(NSLayoutConstraint *)buttonBaselines;
-(NSLayoutConstraint *)clearButtonLeadingToSuperview;
-(NSLayoutConstraint *)sendButtonVerticalCenter;
-(void)setPortraitSendBarConstraints:(NSArray *)arg1 ;
-(ApptentiveAttachButton *)attachButton;
-(void)setLandscapeSendBarConstraints:(NSArray *)arg1 ;
-(double)regularOuterVerticalSpace;
-(NSArray *)portraitSendBarConstraints;
-(NSArray *)landscapeSendBarConstraints;
-(NSLayoutConstraint *)outerBottomSpace;
-(void)setClearButton:(UIButton *)arg1 ;
-(void)setAttachButton:(ApptentiveAttachButton *)arg1 ;
-(void)setMessageView:(UITextView *)arg1 ;
-(void)setSendBar:(UIView *)arg1 ;
-(void)setSendBarLeadingToSuperview:(NSLayoutConstraint *)arg1 ;
-(void)setTextViewTrailingToSuperview:(NSLayoutConstraint *)arg1 ;
-(void)setSendBarBottomToTextView:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelToClearButton:(NSLayoutConstraint *)arg1 ;
-(void)setClearButtonToAttachButton:(NSLayoutConstraint *)arg1 ;
-(void)setAttachButtonToSendButton:(NSLayoutConstraint *)arg1 ;
-(void)setButtonBaselines:(NSLayoutConstraint *)arg1 ;
-(void)setButtonCenters:(NSLayoutConstraint *)arg1 ;
-(void)setSendButtonVerticalCenter:(NSLayoutConstraint *)arg1 ;
-(void)setClearButtonLeadingToSuperview:(NSLayoutConstraint *)arg1 ;
-(void)setOuterTopSpace:(NSLayoutConstraint *)arg1 ;
-(void)setOuterBottomSpace:(NSLayoutConstraint *)arg1 ;
-(UIView *)containerView;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)awakeFromNib;
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)updateConstraints;
-(UIColor *)borderColor;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)clearButton;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(UIButton *)sendButton;
-(void)setSendButton:(UIButton *)arg1 ;
-(void)setPortraitConstraints:(NSArray *)arg1 ;
-(void)setLandscapeConstraints:(NSArray *)arg1 ;
-(NSArray *)portraitConstraints;
-(NSArray *)landscapeConstraints;
@end

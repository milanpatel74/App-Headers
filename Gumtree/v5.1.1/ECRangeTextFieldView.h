/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class ECTextField, UIImageView, UIButton;

@interface ECRangeTextFieldView : UIView {

	BOOL _enabled;
	ECTextField* _minValueTextField;
	ECTextField* _maxValueTextField;
	UIImageView* _backgroundImageView;
	UIButton* _resetButton;
	id _target;
	SEL _action;
	UIEdgeInsets _textFieldInsets;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIButton * resetButton;                         //@synthesize resetButton=_resetButton - In the implementation block
@property (nonatomic,retain) id target;                                      //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) ECTextField * minValueTextField;                //@synthesize minValueTextField=_minValueTextField - In the implementation block
@property (nonatomic,retain) ECTextField * maxValueTextField;                //@synthesize maxValueTextField=_maxValueTextField - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textFieldInsets;                   //@synthesize textFieldInsets=_textFieldInsets - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
+(id)textField;
-(void)textChangeNotification:(id)arg1 ;
-(void)setResetButton:(UIButton *)arg1 ;
-(UIButton *)resetButton;
-(void)reset:(id)arg1 ;
-(void)setMinValueTextField:(ECTextField *)arg1 ;
-(ECTextField *)minValueTextField;
-(void)setMaxValueTextField:(ECTextField *)arg1 ;
-(ECTextField *)maxValueTextField;
-(void)updateResetButton;
-(UIEdgeInsets)textFieldInsets;
-(void)setValueLabelForTextField:(id)arg1 withString:(id)arg2 ;
-(void)addResetTarget:(id)arg1 withAction:(SEL)arg2 ;
-(void)emf_applyStyle:(id)arg1 ;
-(void)setTextFieldInsets:(UIEdgeInsets)arg1 ;
-(BOOL)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(void)setEnabled:(BOOL)arg1 ;
-(id)target;
-(UIImageView *)backgroundImageView;
-(void)setAction:(SEL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

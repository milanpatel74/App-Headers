/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>
#import <Slack/SLKTypingIndicatorProtocol.h>

@class UIColor, UIFont, UILabel, NSMutableArray, NSLayoutConstraint, NSString;

@interface SLKTypingIndicatorView : UIView <SLKTypingIndicatorProtocol> {

	BOOL _visible;
	BOOL _canResignByTouch;
	double _interval;
	UIColor* _textColor;
	UIFont* _textFont;
	UIFont* _highlightFont;
	UILabel* _textLabel;
	NSMutableArray* _usernames;
	NSMutableArray* _timers;
	NSLayoutConstraint* _leftContraint;
	NSLayoutConstraint* _rightContraint;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) UILabel * textLabel;                              //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * usernames;                       //@synthesize usernames=_usernames - In the implementation block
@property (nonatomic,retain) NSMutableArray * timers;                          //@synthesize timers=_timers - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftContraint;               //@synthesize leftContraint=_leftContraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightContraint;              //@synthesize rightContraint=_rightContraint - In the implementation block
@property (assign,nonatomic) double interval;                                  //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) BOOL canResignByTouch;                            //@synthesize canResignByTouch=_canResignByTouch - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * textFont;                                //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,retain) UIFont * highlightFont;                           //@synthesize highlightFont=_highlightFont - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                        //@synthesize contentInset=_contentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isVisible,nonatomic) BOOL visible;                    //@synthesize visible=_visible - In the implementation block
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setHighlightFont:(UIFont *)arg1 ;
-(void)setCanResignByTouch:(BOOL)arg1 ;
-(void)removeUsername:(id)arg1 ;
-(void)insertUsername:(id)arg1 ;
-(void)slk_updateConstraintConstants;
-(void)slk_commonInit;
-(void)dismissIndicator;
-(void)setUsernames:(NSMutableArray *)arg1 ;
-(void)slk_setupConstraints;
-(void)slk_invalidateTimers;
-(NSMutableArray *)usernames;
-(UIFont *)highlightFont;
-(void)slk_prepareForReuse;
-(id)slk_timerWithIdentifier:(id)arg1 ;
-(void)slk_invalidateTimer:(id)arg1 ;
-(void)slk_shouldRemoveUsername:(id)arg1 ;
-(void)setLeftContraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightContraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftContraint;
-(NSLayoutConstraint *)rightContraint;
-(BOOL)canResignByTouch;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)contentInset;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UILabel *)textLabel;
-(UIColor *)textColor;
-(void)setVisible:(BOOL)arg1 ;
-(double)height;
-(id)attributedString;
-(BOOL)isVisible;
-(UIFont *)textFont;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(NSMutableArray *)timers;
-(void)setTimers:(NSMutableArray *)arg1 ;
@end

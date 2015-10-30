/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITextField.h>

@class UIView;

@interface SLKRecipientField : UITextField {

	BOOL _showCustomInputView;
	UIView* _customInputView;

}

@property (assign,getter=isShowingCustomInputView,nonatomic) BOOL showCustomInputView;              //@synthesize showCustomInputView=_showCustomInputView - In the implementation block
@property (nonatomic,retain) UIView * customInputView;                                              //@synthesize customInputView=_customInputView - In the implementation block
-(BOOL)isShowingCustomInputView;
-(UIView *)customInputView;
-(void)setShowCustomInputView:(BOOL)arg1 ;
-(void)setCustomInputView:(UIView *)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(NSRange)selectedRange;
-(id)inputView;
-(unsigned long long)accessibilityTraits;
@end


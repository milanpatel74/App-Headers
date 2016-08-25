/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITextViewDelegate.h>

@class PTHTextView, NSLayoutConstraint, PTHButton, UILabel, PTHTweetbotPostDraft, NSString;

@interface PTHTweetbotDirectMessageTextView : UIControl <UITextViewDelegate> {

	PTHTextView* _textView;
	NSLayoutConstraint* _textViewHeightConstraint;
	long long _directMessageMaxLength;
	PTHButton* _sendButton;
	UILabel* _counterLabel;
	PTHTweetbotPostDraft* _draft;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) PTHTweetbotPostDraft * draft;              //@synthesize draft=_draft - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PTHTweetbotPostDraft *)draft;
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(void)_send;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(id)keyCommands;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
@end

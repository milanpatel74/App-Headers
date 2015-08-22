/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class T1ComposeRichTextView, T1ComposeReplyContextView, T1ComposeViewController, UITextView;

@interface T1ComposeView : UIView {

	T1ComposeRichTextView* _richTextView;
	BOOL _showHeader;
	T1ComposeReplyContextView* _header;
	T1ComposeViewController* _composeViewController;
	long long _keyboardHeight;

}

@property (assign,nonatomic,__weak) T1ComposeViewController * composeViewController;              //@synthesize composeViewController=_composeViewController - In the implementation block
@property (nonatomic,readonly) T1ComposeReplyContextView * header;                                //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) T1ComposeRichTextView * richTextView; 
@property (assign,nonatomic) long long keyboardHeight;                                            //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (getter=isTextViewLoaded,nonatomic,readonly) BOOL textViewLoaded; 
@property (assign,getter=shouldShowHeader,nonatomic) BOOL showHeader;                             //@synthesize showHeader=_showHeader - In the implementation block
-(T1ComposeRichTextView *)richTextView;
-(void)updateHeaderFrame;
-(void)setShowHeader:(BOOL)arg1 ;
-(void)setKeyboardHeight:(long long)arg1 ;
-(BOOL)shouldShowHeader;
-(void)_fontSizeDidUpdate;
-(BOOL)isTextViewLoaded;
-(void)setComposeViewController:(T1ComposeViewController *)arg1 ;
-(long long)keyboardHeight;
-(T1ComposeViewController *)composeViewController;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UITextView *)textView;
-(T1ComposeReplyContextView *)header;
@end

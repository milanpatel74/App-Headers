/*
* This header is generated by classdump-dyld 0.7
* on Saturday, October 17, 2015 at 5:38:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/65DBB537-6872-4D18-8EFD-8C10AB6C53BD/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PLVInputBarDelegate;
@class NSObject, UITextView, UIButton, RACSignal, UILabel, UIImageView, NSString, NSAttributedString;

@interface PLVInputBar : UIView <UITextViewDelegate> {

	BOOL _dark;
	BOOL _disableDelegate;
	BOOL _disableDidChangeSelectionDelegate;
	NSObject*<PLVInputBarDelegate> _delegate;
	UITextView* _textView;
	UIButton* _uploadButton;
	UIButton* _sendButton;
	RACSignal* _textDidChangeSignal;
	UILabel* _placeholderLabel;
	UIImageView* _backgroundView;
	NSString* _completionWord;
	NSAttributedString* _preCorrection;

}

@property (assign,nonatomic,__weak) NSObject*<PLVInputBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UITextView * textView;                                //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * uploadButton;                              //@synthesize uploadButton=_uploadButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * sendButton;                                //@synthesize sendButton=_sendButton - In the implementation block
@property (assign,nonatomic) BOOL dark;                                                   //@synthesize dark=_dark - In the implementation block
@property (nonatomic,retain) RACSignal * textDidChangeSignal;                             //@synthesize textDidChangeSignal=_textDidChangeSignal - In the implementation block
@property (assign,nonatomic) BOOL disableDelegate;                                        //@synthesize disableDelegate=_disableDelegate - In the implementation block
@property (assign,nonatomic) BOOL disableDidChangeSelectionDelegate;                      //@synthesize disableDidChangeSelectionDelegate=_disableDidChangeSelectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) UILabel * placeholderLabel;                           //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * backgroundView;                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSString * completionWord;                                   //@synthesize completionWord=_completionWord - In the implementation block
@property (nonatomic,retain) NSAttributedString * preCorrection;                          //@synthesize preCorrection=_preCorrection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)uploadButton;
-(RACSignal *)textDidChangeSignal;
-(BOOL)dark;
-(id)completionColor;
-(void)uploadMedia;
-(void)setUploadButton:(UIButton *)arg1 ;
-(void)sendText;
-(void)setDark:(BOOL)arg1 ;
-(id)sanitizedStringFromAttributedString:(id)arg1 ;
-(void)setDisableDelegate:(BOOL)arg1 ;
-(void)setDisableDidChangeSelectionDelegate:(BOOL)arg1 ;
-(BOOL)disableDelegate;
-(void)setCompletionWord:(NSString *)arg1 ;
-(BOOL)disableDidChangeSelectionDelegate;
-(NSString *)completionWord;
-(void)setPreCorrection:(NSAttributedString *)arg1 ;
-(NSAttributedString *)preCorrection;
-(BOOL)hasCompletionInAttributedString:(id)arg1 ;
-(void)updateAutocorrectionType:(long long)arg1 ;
-(void)setTextDidChangeSignal:(RACSignal *)arg1 ;
-(void)setDelegate:(NSObject*<PLVInputBarDelegate>)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(NSObject*<PLVInputBarDelegate>)delegate;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundView;
-(void)setTextView:(UITextView *)arg1 ;
-(id)textColor;
-(void)setSelectedTextRange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(UITextView *)textView;
-(id)backgroundImageName;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(UIButton *)sendButton;
-(void)setSendButton:(UIButton *)arg1 ;
@end


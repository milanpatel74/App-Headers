/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBMTextViewInternalDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol FBCancelable, FBMGrowingTextViewDelegate;
@class FBMTextViewInternal, FBGrowingTextViewHeightCalculator, NSArray, NSString, UITextView, NSAttributedString, UIColor, UIFont;

@interface FBMGrowingTextView : UIView <FBMTextViewInternalDelegate, UITextViewDelegate> {

	FBMTextViewInternal* internalTextView;
	int minHeight;
	int maxHeight;
	unsigned long long maxNumberOfLines;
	unsigned long long minNumberOfLines;
	BOOL animateHeightChange;
	FBGrowingTextViewHeightCalculator* _heightCalculator;
	id<FBCancelable> _textTranslationOperation;
	NSArray* _cachedLeadingBarButtonGroups;
	NSArray* _cachedTrailingBarButtonGroups;
	id<FBMGrowingTextViewDelegate> delegate;
	NSString* _placeholderText;
	double _textContentOffset;
	/*^block*/id _textTranslator;

}

@property (assign) unsigned long long maxNumberOfLines; 
@property (assign) unsigned long long minNumberOfLines; 
@property (assign) BOOL animateHeightChange; 
@property (retain) UITextView * internalTextView; 
@property (assign,nonatomic,__weak) id<FBMGrowingTextViewDelegate> delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * placeholderText;                                    //@synthesize placeholderText=_placeholderText - In the implementation block
@property (assign,nonatomic) UIColor * placeholderTextColor; 
@property (assign,nonatomic) UIFont * font; 
@property (assign,nonatomic) UIColor * textColor; 
@property (assign,nonatomic) BOOL scrollsToTop; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL showsVerticalScrollIndicator; 
@property (assign,nonatomic) CGSize contentSize; 
@property (assign,nonatomic) double textContentOffset;                                    //@synthesize textContentOffset=_textContentOffset - In the implementation block
@property (nonatomic,copy) id textTranslator;                                             //@synthesize textTranslator=_textTranslator - In the implementation block
@property (assign,nonatomic) BOOL shouldHideCaret; 
@property (nonatomic,copy) NSString * textInputContextIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)linePadding;
-(id)initWithFrame:(CGRect)arg1 textInputContextIdentifier:(id)arg2 ;
-(unsigned long long)maxNumberOfLines;
-(void)setMaxNumberOfLines:(unsigned long long)arg1 ;
-(void)updateInternalTextViewScrollEnabled;
-(void)scrollCaretToVisible;
-(void)_updateHeight;
-(double)_heightForNumberOfLines:(unsigned long long)arg1 ;
-(void)_textDidChangeShouldNotifyDelegate:(BOOL)arg1 ;
-(void)_translateTextIfNecessary;
-(void)_notifyDelegateForTextChange;
-(void)growDidStop;
-(void)setTextInputContextIdentifier:(NSString *)arg1 ;
-(void)_setText:(id)arg1 shouldNotifyDelegate:(BOOL)arg2 ;
-(void)_updateTextWithoutMovingCursor:(/*^block*/id)arg1 ;
-(void)setMinNumberOfLines:(unsigned long long)arg1 ;
-(BOOL)shouldHideCaret;
-(void)setShouldHideCaret:(BOOL)arg1 ;
-(void)_didFinishEmoticonTranslationWithTranslatedText:(id)arg1 originalText:(id)arg2 ;
-(BOOL)internalTextViewCanHandlePasteAction:(id)arg1 ;
-(BOOL)internalTextViewHandlePasteAction:(id)arg1 ;
-(unsigned long long)minNumberOfLines;
-(id)firstResponderInChildViews;
-(void)replaceSelectedRangeWithString:(id)arg1 disableScroll:(BOOL)arg2 ;
-(void)saveAndClearAssistantItems;
-(void)restoreAssistantItems;
-(UITextView *)internalTextView;
-(void)setInternalTextView:(UITextView *)arg1 ;
-(BOOL)animateHeightChange;
-(void)setAnimateHeightChange:(BOOL)arg1 ;
-(double)textContentOffset;
-(void)setTextContentOffset:(double)arg1 ;
-(id)textTranslator;
-(void)setTextTranslator:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<FBMGrowingTextViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBMGrowingTextViewDelegate>)delegate;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(CGSize)contentSize;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isEditable;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)showsVerticalScrollIndicator;
-(BOOL)scrollsToTop;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(NSAttributedString *)attributedText;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSRange)selectedRange;
-(long long)textAlignment;
-(void)setSelectedRange:(NSRange)arg1 ;
-(BOOL)hasText;
-(void)deleteBackward;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(id)inputAccessoryView;
-(id)inputView;
-(NSString *)textInputContextIdentifier;
-(void)setEditable:(BOOL)arg1 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(void)setInputView:(id)arg1 ;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
@end

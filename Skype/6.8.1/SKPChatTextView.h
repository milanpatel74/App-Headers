//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, SKPChatTextViewStylesheet;

@interface SKPChatTextView : UITextView
{
    NSString *_placeholder;
    double _preferredMaxLayoutWidth;
    unsigned long long _maxNumberOfLines;
    SKPChatTextViewStylesheet *_stylesheet;
    double _maxHeight;
}

@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(readonly, nonatomic) SKPChatTextViewStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(nonatomic) unsigned long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)shouldDisplayPlaceholder;
- (void)setEditable:(_Bool)arg1;
- (id)accessibilityLabel;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)handleTextChange;
- (void)scrollCaretToVisibleIfNeeded;
- (void)setSelectedTextRange:(id)arg1;
- (void)onTextViewTextDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end


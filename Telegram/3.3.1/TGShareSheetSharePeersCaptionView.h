//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UIImageView, UILabel, UITextView;

@interface TGShareSheetSharePeersCaptionView : UIView <UITextViewDelegate>
{
    UIImageView *_backgroundView;
    UILabel *_placeholderView;
    UITextView *_textView;
    double _currentHeight;
    double _maxHeight;
    CDUnknownBlockType _heightChanged;
}

@property(copy, nonatomic) CDUnknownBlockType heightChanged; // @synthesize heightChanged=_heightChanged;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *text;
- (double)heightForText:(id)arg1 width:(double)arg2;
- (struct UIEdgeInsets)insets;
- (void)textViewDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


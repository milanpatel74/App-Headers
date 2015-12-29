//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItemView.h"

#import "UITextFieldDelegate.h"

@class NSString, TGTextField;

@interface TGPhoneCodeCollectionItemView : TGCollectionItemView <UITextFieldDelegate>
{
    TGTextField *_textField;
    CDUnknownBlockType _codeChanged;
}

@property(copy, nonatomic) CDUnknownBlockType codeChanged; // @synthesize codeChanged=_codeChanged;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)makeCodeFieldFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


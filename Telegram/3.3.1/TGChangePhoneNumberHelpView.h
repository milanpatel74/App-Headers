//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TGModernButton, UIImageView, UILabel;

@interface TGChangePhoneNumberHelpView : UIView
{
    struct UIEdgeInsets _insets;
    UIImageView *_iconView;
    UILabel *_label;
    TGModernButton *_changeButton;
    CDUnknownBlockType _changePhonePressed;
    CDUnknownBlockType _debugPressed;
}

@property(copy, nonatomic) CDUnknownBlockType debugPressed; // @synthesize debugPressed=_debugPressed;
@property(copy, nonatomic) CDUnknownBlockType changePhonePressed; // @synthesize changePhonePressed=_changePhonePressed;
- (void).cxx_destruct;
- (void)debugTapGesture:(id)arg1;
- (void)layoutSubviews;
- (void)setInsets:(struct UIEdgeInsets)arg1;
- (void)actionButtonPressed;
- (id)initWithFrame:(struct CGRect)arg1;

@end


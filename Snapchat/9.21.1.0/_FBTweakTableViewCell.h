//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class FBTweak, NSString, UIStepper, UISwitch, UITextField, UIView;

@interface _FBTweakTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UIView *_accessoryView;
    unsigned long long _mode;
    UISwitch *_switch;
    UITextField *_textField;
    UIStepper *_stepper;
    FBTweak *_tweak;
}

@property(retain, nonatomic) FBTweak *tweak; // @synthesize tweak=_tweak;
- (void).cxx_destruct;
- (void)_updateValue:(id)arg1 primary:(_Bool)arg2 write:(_Bool)arg3;
- (void)_stepperChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_switchChanged:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateMode:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

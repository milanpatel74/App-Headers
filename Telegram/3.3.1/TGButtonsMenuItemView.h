//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ASHandle, NSArray, TGHighlightableButton;

@interface TGButtonsMenuItemView : UITableViewCell
{
    ASHandle *_watcherHandle;
    NSArray *_buttons;
    TGHighlightableButton *_leftButton;
    TGHighlightableButton *_rightButton;
}

@property(retain, nonatomic) TGHighlightableButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) TGHighlightableButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) ASHandle *watcherHandle; // @synthesize watcherHandle=_watcherHandle;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)layoutSubviews;
- (id)createButtonWithTitle:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


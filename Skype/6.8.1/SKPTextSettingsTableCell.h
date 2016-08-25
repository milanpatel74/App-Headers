//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKTableViewCell.h"

@class NSString, UIColor, UIFont, UILabel;

@interface SKPTextSettingsTableCell : MKTableViewCell
{
    CDUnknownBlockType _actionBlock;
    NSString *_labelText;
    UIColor *_labelTextColor;
    UIFont *_labelFont;
    UILabel *_label;
}

+ (double)cellHeightForText:(id)arg1 cellWidth:(double)arg2 usingFont:(id)arg3;
+ (id)identifier;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)tapAction;
- (_Bool)shouldPreventHighlightedState;
- (void)layoutSubviews;
- (void)setupActions;
- (void)setupLayout;
- (id)init;

@end

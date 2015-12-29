//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchBar.h"

#import "UITextFieldDelegate.h"

@class MKSearchBarStylesheet, NSString, UIColor, UITextField;

@interface MKSearchBar : UISearchBar <UITextFieldDelegate>
{
    UIColor *_outerBackgroundColor;
    UIColor *_searchIconColor;
    long long _mk_searchBarStyle;
    MKSearchBarStylesheet *_stylesheet;
    UITextField *_textFieldSearchBar;
}

+ (id)searchBarWithFrame:(struct CGRect)arg1;
+ (long long)searchBarStyleFromClass;
@property(retain, nonatomic) UITextField *textFieldSearchBar; // @synthesize textFieldSearchBar=_textFieldSearchBar;
@property(retain, nonatomic) MKSearchBarStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(nonatomic) long long mk_searchBarStyle; // @synthesize mk_searchBarStyle=_mk_searchBarStyle;
@property(retain, nonatomic) UIColor *searchIconColor; // @synthesize searchIconColor=_searchIconColor;
@property(retain, nonatomic) UIColor *outerBackgroundColor; // @synthesize outerBackgroundColor=_outerBackgroundColor;
- (void).cxx_destruct;
- (void)setWidth:(float)arg1;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (double)borderWidthForState:(unsigned long long)arg1;
- (id)borderColorForState:(unsigned long long)arg1;
- (id)backgroundColorForState:(unsigned long long)arg1;
- (id)inputFieldInnerColorForState:(unsigned long long)arg1;
- (id)searchIconImageForState:(unsigned long long)arg1;
- (id)searchImageColorForState:(unsigned long long)arg1;
- (id)clearIconImageForState:(unsigned long long)arg1;
- (id)clearIconImageColorForState:(unsigned long long)arg1;
- (void)updateBackgroundColor;
- (id)backgroundImageForSearchBarWithInnerColor:(id)arg1 backgroundColor:(id)arg2 borderColor:(id)arg3 borderWidth:(double)arg4;
- (void)updateAppearance;
- (void)setupAppearance;
- (id)findTextFieldUnder:(id)arg1;
- (void)layoutSubviews;
- (void)mk_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSearchBarStyle:(long long)arg1 frame:(struct CGRect)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


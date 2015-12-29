//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

@class MKHeaderNavigationBarStylesheet, MKPresenceStatusView, NSString, UIButton, UIColor, UILabel, UIView;

@interface MKHeaderNavigationBar : UIToolbar
{
    _Bool _titleIsClickable;
    _Bool _onScreen;
    _Bool _shouldBlur;
    NSString *_title;
    UIColor *_titleColor;
    UIColor *_titleColorWhenNotClickable;
    UIColor *_highlightedColor;
    NSString *_caption;
    UIColor *_captionColor;
    UIColor *_bgColor;
    UIColor *_fgColor;
    UIView *_leftView;
    UIView *_rightView;
    long long _status;
    CDUnknownBlockType _titleBlock;
    CDUnknownBlockType _backBlock;
    long long _headerBarStyle;
    long long _barColorStyle;
    NSString *_badgeText;
    UIButton *_titleButton;
    UILabel *_captionLabel;
    NSString *_accessibilityBackButton;
    NSString *_accessibilityTitle;
    NSString *_accessibilityCaption;
    UIView *_customTitleView;
    UIView *_containerLeftView;
    UIView *_containerRightView;
    long long _currentOrientation;
    UIView *_separatorLineView;
    UIView *_backgroundProtectionView;
    MKPresenceStatusView *_statusView;
    UIView *_navigationBarContainerView;
    MKHeaderNavigationBarStylesheet *_stylesheet;
}

+ (id)participantsHeaderNavigationBarWhite;
+ (id)chatHeaderNavigationBarWhite;
+ (id)chatHeaderNavigationBarDarkGray;
+ (id)headerNavigationBarDarkGray;
+ (id)headerNavigationBarBlue;
+ (id)headerNavigationBarWhite;
@property(retain, nonatomic) MKHeaderNavigationBarStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) UIView *navigationBarContainerView; // @synthesize navigationBarContainerView=_navigationBarContainerView;
@property(retain, nonatomic) MKPresenceStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *backgroundProtectionView; // @synthesize backgroundProtectionView=_backgroundProtectionView;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(retain, nonatomic) UIView *containerRightView; // @synthesize containerRightView=_containerRightView;
@property(retain, nonatomic) UIView *containerLeftView; // @synthesize containerLeftView=_containerLeftView;
@property(retain, nonatomic) UIView *customTitleView; // @synthesize customTitleView=_customTitleView;
@property(retain, nonatomic) NSString *accessibilityCaption; // @synthesize accessibilityCaption=_accessibilityCaption;
@property(retain, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
@property(retain, nonatomic) NSString *accessibilityBackButton; // @synthesize accessibilityBackButton=_accessibilityBackButton;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic) _Bool shouldBlur; // @synthesize shouldBlur=_shouldBlur;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(nonatomic) long long barColorStyle; // @synthesize barColorStyle=_barColorStyle;
@property(nonatomic) long long headerBarStyle; // @synthesize headerBarStyle=_headerBarStyle;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(copy, nonatomic) CDUnknownBlockType titleBlock; // @synthesize titleBlock=_titleBlock;
@property(nonatomic) _Bool titleIsClickable; // @synthesize titleIsClickable=_titleIsClickable;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) UIColor *fgColor; // @synthesize fgColor=_fgColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *captionColor; // @synthesize captionColor=_captionColor;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *titleColorWhenNotClickable; // @synthesize titleColorWhenNotClickable=_titleColorWhenNotClickable;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didTouchUpInside:(id)arg1;
- (_Bool)shouldSlideOutWithOrientation:(long long)arg1;
- (double)heightBarForOrientation:(long long)arg1;
- (double)gapBetweenLabelsForOrientation:(long long)arg1;
- (double)heightStatusBarForOrientation:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (double)topMarginTitleForOrientation:(long long)arg1;
- (_Bool)isDoubleLineForOrientation:(long long)arg1;
- (void)adjustPresenceIndicatorIfNeeded;
- (id)createButtonWithFrame:(struct CGRect)arg1;
- (void)layoutBarButtons;
- (void)layoutLabels;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupBackgroundProtection;
- (void)setupSideViews;
- (void)setupLabels;
- (void)mk_commonInit;
- (id)initWithHeaderBarStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


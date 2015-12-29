//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKActivityIndicatorView, MKEmptyListViewStylesheet, NSAttributedString, NSString, UILabel;

@interface MKEmptyListView : UIView
{
    _Bool _activityIndicatorVisible;
    NSAttributedString *_title;
    NSString *_icon;
    UILabel *_titleLabel;
    MKEmptyListViewStylesheet *_stylesheet;
    UIView *_centerContainerView;
    UILabel *_iconLabel;
    MKActivityIndicatorView *_activityIndicator;
}

+ (id)emptyListViewWithFrame:(struct CGRect)arg1 attributedTitle:(id)arg2 icon:(id)arg3;
+ (id)emptyListViewWithFrame:(struct CGRect)arg1 title:(id)arg2 icon:(id)arg3;
+ (Class)titleLabelClass;
@property(retain, nonatomic) MKActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UIView *centerContainerView; // @synthesize centerContainerView=_centerContainerView;
@property(retain, nonatomic) MKEmptyListViewStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isActivityIndicatorVisible) _Bool activityIndicatorVisible; // @synthesize activityIndicatorVisible=_activityIndicatorVisible;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setupTitleLabel;
- (void)setupActivityIndicator;
- (void)setupIconLabel;
- (void)setupCenterContainerView;
- (void)mk_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface TGLocationTitleView : UIView
{
    UILabel *_titleLabel;
    UILabel *_addressLabel;
    long long _interfaceOrientation;
    double _backButtonWidth;
    double _actionsButtonWidth;
}

@property(nonatomic) double actionsButtonWidth; // @synthesize actionsButtonWidth=_actionsButtonWidth;
@property(nonatomic) double backButtonWidth; // @synthesize backButtonWidth=_backButtonWidth;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_findNavigationBar:(id)arg1;
@property(retain, nonatomic) NSString *address;
@property(retain, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end


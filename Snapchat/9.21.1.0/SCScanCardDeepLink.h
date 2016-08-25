//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCardDefault.h"

@class SCScanCardDeepLinkData, UIImageView, UILabel, UIView;

@interface SCScanCardDeepLink : SCScanCardDefault
{
    SCScanCardDeepLinkData *_deepLinkData;
    UILabel *_titleLabel;
    UIView *_headerBackgroundView;
    UIImageView *_imageView;
    _Bool _ifConsumed;
}

- (void).cxx_destruct;
- (void)_getDiscoverIconImage;
- (void)_didTapActionButton:(id)arg1;
- (void)_setupView;
- (void)_setup;
@property(readonly, nonatomic) UIView *deepLinkIcon;
@property(readonly, nonatomic) struct CGRect deepLinkIconFrame;
- (id)initWithDeepLinkActionData:(id)arg1;

@end

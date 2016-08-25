//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCardDefault.h"

@class SCBrowserViewController, SOJUScannableActionBarcodeOffer, UIImage, UIImageView, UILabel, UIView;

@interface SCScanCardBarcodeOffer : SCScanCardDefault
{
    SOJUScannableActionBarcodeOffer *_barcodeOffer;
    UIImageView *_imageView;
    UIView *_headerBackgroundView;
    UILabel *_productTitleLabel;
    UIView *_horizontalSeparator;
    UIView *_productRatingContiainerView;
    UILabel *_productPriceLabel;
    UIImageView *_productImageView;
    UIImage *_productImage;
    SCBrowserViewController *_browserViewController;
    _Bool _ifConsumed;
}

- (void).cxx_destruct;
- (void)_getProductImage;
- (void)_didTapActionButton:(id)arg1;
- (void)_drawSingleStarForPos:(int)arg1 WithImage:(id)arg2 ForHeight:(double)arg3 Width:(double)arg4;
- (void)_setupProductRatingWithHeight:(double)arg1 Width:(double)arg2 Rating:(double)arg3;
- (void)_setupView;
- (void)_setup;
- (id)initWithBarcodeOffer:(id)arg1;

@end

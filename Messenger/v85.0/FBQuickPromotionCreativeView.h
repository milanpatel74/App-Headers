/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBQuickPromotionInterstitialConfiguration, FBFacepileView, FBRichTextView, UIView, FBUserSession, UILabel, UIScrollView, FBNetworkImageView, UIImageView;

@interface FBQuickPromotionCreativeView : UIView {

	BOOL _facepileIsSet;
	CGRect _textLabelFrame;
	CGRect _subtitleTextViewFrame;
	CGRect _footerTextViewFrame;
	CGRect _footerDividerViewFrame;
	CGRect _imageViewFrame;
	CGRect _socialContextViewFrame;
	CGRect _facepileViewFrame;
	CGRect _contentScrollContainerFrame;
	double _freeVerticalSpace;
	FBQuickPromotionInterstitialConfiguration* _configuration;
	FBFacepileView* _facepileView;
	FBRichTextView* _socialContextView;
	UIView* _footerDividerView;
	FBUserSession* _session;
	UILabel* _textLabel;
	FBRichTextView* _subtitleTextView;
	FBRichTextView* _footerTextView;
	UIScrollView* _contentScrollContainer;
	FBNetworkImageView* _networkImageView;
	UIImageView* _animatedImageView;
	UIImageView* _imageOverlayView;

}

@property (nonatomic,readonly) UIScrollView * contentScrollContainer;              //@synthesize contentScrollContainer=_contentScrollContainer - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * networkImageView;                //@synthesize networkImageView=_networkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * animatedImageView;                      //@synthesize animatedImageView=_animatedImageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageOverlayView;                       //@synthesize imageOverlayView=_imageOverlayView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) FBRichTextView * subtitleTextView;                  //@synthesize subtitleTextView=_subtitleTextView - In the implementation block
@property (nonatomic,readonly) FBRichTextView * footerTextView;                    //@synthesize footerTextView=_footerTextView - In the implementation block
@property (nonatomic,readonly) FBRichTextView * socialContextView;                 //@synthesize socialContextView=_socialContextView - In the implementation block
-(FBNetworkImageView *)networkImageView;
-(FBRichTextView *)subtitleTextView;
-(void)setNetworkImageView:(FBNetworkImageView *)arg1 ;
-(void)unsetImage;
-(id)_animatedImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)_computeLayoutForBounds:(CGRect)arg1 ;
-(id)_networkImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setImageOverlayView:(UIImageView *)arg1 ;
-(UIScrollView *)contentScrollContainer;
-(void)setAnimatedImageView:(UIImageView *)arg1 ;
-(id)_standardLabelTruncatedString;
-(CGRect)_calculateImageViewFrameForSize:(CGSize)arg1 scale:(double)arg2 ;
-(UIImageView *)animatedImageView;
-(UIImageView *)imageOverlayView;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 configuration:(id)arg3 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 imageOverlayImage:(id)arg4 ;
-(void)setFacepileWithText:(id)arg1 imageURLs:(id)arg2 ;
-(void)unsetFacepile;
-(FBRichTextView *)socialContextView;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(FBRichTextView *)footerTextView;
-(BOOL)isTakeOverView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
@end

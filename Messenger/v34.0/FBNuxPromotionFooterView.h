/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, UILabel, UIButton, FBNetworkImageView, UIImageView;

@interface FBNuxPromotionFooterView : UIView {

	FBUserSession* _session;
	CGSize _dismissButtonSize;
	CGSize _imageSize;
	CGSize _titleLabelSize;
	CGSize _descriptionLabelSize;
	CGSize _buttonSize;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _primaryButton;
	UIButton* _dismissButton;
	FBNetworkImageView* _networkImageView;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * primaryButton;                         //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                         //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * networkImageView;              //@synthesize networkImageView=_networkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
-(UIButton *)primaryButton;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 buttonStyle:(unsigned long long)arg3 ;
-(void)unsetImage;
-(id)_networkImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setNetworkImageView:(FBNetworkImageView *)arg1 ;
-(id)_animatedImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(CGRect)_calculateImageFrameForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(FBNetworkImageView *)networkImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIButton *)dismissButton;
-(UILabel *)descriptionLabel;
@end

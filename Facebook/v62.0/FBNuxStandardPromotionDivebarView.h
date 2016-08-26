/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, UIView;

@interface FBNuxStandardPromotionDivebarView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _primaryButton;
	UIButton* _dismissButton;
	UIView* _image;

}

@property (nonatomic,readonly) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UIView * image;                          //@synthesize image=_image - In the implementation block
-(id)_animatedImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(UIButton *)primaryButton;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)unsetImage;
-(id)_createDismissButton;
-(void)_unsetImage;
-(id)_networkImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 session:(id)arg4 ;
-(CGRect)_calculateImageFrameForSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 session:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)image;
-(UILabel *)titleLabel;
-(UIButton *)dismissButton;
-(UILabel *)descriptionLabel;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class UIView, UIImage;

@interface IGDirectContentExpandableCell : IGDirectContentCell {

	BOOL _isAnimating;
	BOOL _expanded;
	UIView* _contentImageView;
	UIImage* _image;
	double _cornerRadius;
	double _currentUsernameXOffset;
	CGSize _expandedPhotoSize;
	CGSize _contractedPhotoSize;

}

@property (nonatomic,retain) UIView * contentImageView;                  //@synthesize contentImageView=_contentImageView - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                           //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) BOOL expanded;                              //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) CGSize expandedPhotoSize;                   //@synthesize expandedPhotoSize=_expandedPhotoSize - In the implementation block
@property (assign,nonatomic) CGSize contractedPhotoSize;                 //@synthesize contractedPhotoSize=_contractedPhotoSize - In the implementation block
@property (assign,nonatomic) double currentUsernameXOffset;              //@synthesize currentUsernameXOffset=_currentUsernameXOffset - In the implementation block
+(double)photoExpandedHeightForWidth:(double)arg1 postMediaSize:(CGSize)arg2 ;
+(double)contractedHeightForFrameWidth:(double)arg1 postMediaSize:(CGSize)arg2 ;
+(double)expandedHeightForWidth:(double)arg1 postMediaSize:(CGSize)arg2 ;
-(void)completeAnimation;
-(CGRect)tapTargetFrame;
-(double)usernameXOffset;
-(UIView *)contentImageView;
-(double)contractedUsernameXOffset;
-(void)setCurrentUsernameXOffset:(double)arg1 ;
-(double)contractedCornerRadius;
-(double)currentUsernameXOffset;
-(double)expandedUsernameXOffset;
-(double)expandedCornerRadius;
-(void)setIsAnimating:(BOOL)arg1 ;
-(CGSize)expandedPhotoSize;
-(CGSize)contractedPhotoSize;
-(CGSize)photoSizeForWidth:(double)arg1 ;
-(void)animateExpanded:(BOOL)arg1 withProgress:(double)arg2 ;
-(CGSize)photoSizeForHeight:(double)arg1 ;
-(void)setContentImageView:(UIView *)arg1 ;
-(void)setExpandedPhotoSize:(CGSize)arg1 ;
-(void)setContractedPhotoSize:(CGSize)arg1 ;
-(CGSize)photoSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(void)prepareForReuse;
-(BOOL)isAnimating;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)beginAnimation;
-(id)newImageView;
@end

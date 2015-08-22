/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIControl.h>

@class TFNTwitterCardData, UIViewController, UIImageView, UIImage, TFNDownload, UIButton;

@interface T1RevenueBaseCardForwardView : UIControl {

	BOOL _imageFailed;
	TFNTwitterCardData* _cardData;
	UIViewController* _hostingViewController;
	UIImageView* _imageView;
	UIImage* _image;
	TFNDownload* _imageDownload;
	UIButton* _ctaButton;
	CGSize _cardSize;
	CGSize _mediaSize;

}

@property (nonatomic,retain) UIViewController * hostingViewController;              //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (assign,nonatomic) CGSize cardSize;                                       //@synthesize cardSize=_cardSize - In the implementation block
@property (nonatomic,retain) TFNTwitterCardData * cardData;                         //@synthesize cardData=_cardData - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) TFNDownload * imageDownload;                           //@synthesize imageDownload=_imageDownload - In the implementation block
@property (assign,nonatomic) BOOL imageFailed;                                      //@synthesize imageFailed=_imageFailed - In the implementation block
@property (assign,nonatomic) CGSize mediaSize;                                      //@synthesize mediaSize=_mediaSize - In the implementation block
@property (nonatomic,retain) UIButton * ctaButton;                                  //@synthesize ctaButton=_ctaButton - In the implementation block
+(CGSize)cardSize;
-(TFNTwitterCardData *)cardData;
-(UIButton *)ctaButton;
-(void)setCtaButton:(UIButton *)arg1 ;
-(void)setMediaSize:(CGSize)arg1 ;
-(CGSize)cardSize;
-(void)setCardData:(TFNTwitterCardData *)arg1 ;
-(TFNDownload *)imageDownload;
-(void)setImageDownload:(TFNDownload *)arg1 ;
-(CGSize)mediaSize;
-(void)_imageDidUpdate;
-(void)loadMedia;
-(void)setHostingViewController:(UIViewController *)arg1 ;
-(void)setCardSize:(CGSize)arg1 ;
-(BOOL)imageFailed;
-(void)setImageFailed:(BOOL)arg1 ;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(UIImageView *)imageView;
-(void)update;
-(UIViewController *)hostingViewController;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end

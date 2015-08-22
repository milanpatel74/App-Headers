/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class TFNTwitterCardContext, TFNLayoutMetrics;

@interface T1NativeBuyNowCardFullViewLayoutState : NSObject {

	TFNTwitterCardContext* _cardContext;
	TFNLayoutMetrics* _layoutMetrics;
	CGSize _size;
	CGRect _imageViewFrame;
	CGRect _imageHighlightControlFrame;
	CGRect _productNameFrame;
	CGRect _productBylineFrame;
	CGRect _titleHighlightControlFrame;
	CGRect _callToActionButtonFrame;

}

@property (nonatomic,retain) TFNTwitterCardContext * cardContext;              //@synthesize cardContext=_cardContext - In the implementation block
@property (nonatomic,retain) TFNLayoutMetrics * layoutMetrics;                 //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) CGSize size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGRect imageViewFrame;                            //@synthesize imageViewFrame=_imageViewFrame - In the implementation block
@property (assign,nonatomic) CGRect imageHighlightControlFrame;                //@synthesize imageHighlightControlFrame=_imageHighlightControlFrame - In the implementation block
@property (assign,nonatomic) CGRect productNameFrame;                          //@synthesize productNameFrame=_productNameFrame - In the implementation block
@property (assign,nonatomic) CGRect productBylineFrame;                        //@synthesize productBylineFrame=_productBylineFrame - In the implementation block
@property (assign,nonatomic) CGRect titleHighlightControlFrame;                //@synthesize titleHighlightControlFrame=_titleHighlightControlFrame - In the implementation block
@property (assign,nonatomic) CGRect callToActionButtonFrame;                   //@synthesize callToActionButtonFrame=_callToActionButtonFrame - In the implementation block
-(void)setImageHighlightControlFrame:(CGRect)arg1 ;
-(CGRect)imageHighlightControlFrame;
-(void)setTitleHighlightControlFrame:(CGRect)arg1 ;
-(CGRect)titleHighlightControlFrame;
-(TFNTwitterCardContext *)cardContext;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(CGRect)imageViewFrame;
-(void)setImageViewFrame:(CGRect)arg1 ;
-(CGRect)callToActionButtonFrame;
-(void)setCallToActionButtonFrame:(CGRect)arg1 ;
-(CGRect)productNameFrame;
-(void)setProductNameFrame:(CGRect)arg1 ;
-(CGRect)productBylineFrame;
-(void)setProductBylineFrame:(CGRect)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setLayoutMetrics:(TFNLayoutMetrics *)arg1 ;
-(TFNLayoutMetrics *)layoutMetrics;
@end

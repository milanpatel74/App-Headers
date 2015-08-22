/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNFormCustomItem.h>

@protocol TFNFormFieldCellDelegate;
@class NSString, TFNFormAppearance, UIImage;

@interface TFNFormImageItem : TFNFormCustomItem {

	NSString* _accessibilityLabelOverride;
	TFNFormAppearance* _appearance;
	id<TFNFormFieldCellDelegate> _cellDelegate;
	double _imageTextSpacing;
	/*^block*/id _cellWasCreated;
	/*^block*/id _calculateImageSizeWithLayoutMetrics;
	/*^block*/id _calculateCellHeightWithLayoutMetrics;
	/*^block*/id _lazyImageFetchBlock;
	UIImage* _itemImage;

}

@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSString * accessibilityLabelOverride;                       //@synthesize accessibilityLabelOverride=_accessibilityLabelOverride - In the implementation block
@property (nonatomic,readonly) TFNFormAppearance * appearance;                              //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic,__weak) id<TFNFormFieldCellDelegate> cellDelegate;              //@synthesize cellDelegate=_cellDelegate - In the implementation block
@property (assign,nonatomic) double imageTextSpacing;                                       //@synthesize imageTextSpacing=_imageTextSpacing - In the implementation block
@property (nonatomic,copy) id cellWasCreated;                                               //@synthesize cellWasCreated=_cellWasCreated - In the implementation block
@property (nonatomic,copy) id calculateImageSizeWithLayoutMetrics;                          //@synthesize calculateImageSizeWithLayoutMetrics=_calculateImageSizeWithLayoutMetrics - In the implementation block
@property (nonatomic,copy) id calculateCellHeightWithLayoutMetrics;                         //@synthesize calculateCellHeightWithLayoutMetrics=_calculateCellHeightWithLayoutMetrics - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets paddingInsets; 
@property (nonatomic,copy) id lazyImageFetchBlock;                                          //@synthesize lazyImageFetchBlock=_lazyImageFetchBlock - In the implementation block
@property (nonatomic,retain) UIImage * itemImage;                                           //@synthesize itemImage=_itemImage - In the implementation block
-(void)setCellAtIndexPath:(/*^block*/id)arg1 ;
-(void)setSizeAtIndexPath:(/*^block*/id)arg1 ;
-(id)initWithText:(id)arg1 disclosure:(BOOL)arg2 ;
-(id)initWithImageFetchBlock:(/*^block*/id)arg1 text:(id)arg2 accessibilityLabelOverride:(id)arg3 appearance:(id)arg4 disclosure:(BOOL)arg5 cellDelegate:(id)arg6 ;
-(void)setCalculateImageSizeWithLayoutMetrics:(id)arg1 ;
-(NSString *)accessibilityLabelOverride;
-(UIEdgeInsets)paddingInsets;
-(double)imageTextSpacing;
-(id)calculateImageSizeWithLayoutMetrics;
-(id)calculateCellHeightWithLayoutMetrics;
-(/*^block*/id)sizeAtIndexPath;
-(id)initWithImage:(id)arg1 text:(id)arg2 accessibilityLabelOverride:(id)arg3 appearance:(id)arg4 disclosure:(BOOL)arg5 cellDelegate:(id)arg6 ;
-(void)setLazyImageFetchBlock:(id)arg1 ;
-(void)setImageTextSpacing:(double)arg1 ;
-(void)setCalculateCellHeightWithLayoutMetrics:(id)arg1 ;
-(/*^block*/id)cellAtIndexPath;
-(id<TFNFormFieldCellDelegate>)cellDelegate;
-(id)cellWasCreated;
-(id)lazyImageFetchBlock;
-(void)setSizeAtIndexPathTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setCellAtIndexPathTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setCellDelegate:(id<TFNFormFieldCellDelegate>)arg1 ;
-(void)setCellWasCreated:(id)arg1 ;
-(UIImage *)itemImage;
-(void)setItemImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(TFNFormAppearance *)appearance;
@end

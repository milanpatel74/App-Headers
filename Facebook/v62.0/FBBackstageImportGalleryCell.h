/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol FBBackstageImportGalleryCellDelegate;
@class FBBackstageCheckmarkView, UIView, UILabel, FBWebImageView;

@interface FBBackstageImportGalleryCell : UICollectionViewCell {

	FBBackstageCheckmarkView* _checkmark;
	UIView* _dimView;
	UIView* _gradientView;
	UILabel* _durationLabel;
	FBWebImageView* _thumbnailView;
	id<FBBackstageImportGalleryCellDelegate> _delegate;

}

@property (nonatomic,readonly) FBWebImageView * thumbnailView;                                      //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic,__weak) id<FBBackstageImportGalleryCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_makeGradientView;
-(id)_gradientConfigBuilder;
-(void)setPlayableWithDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBBackstageImportGalleryCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBBackstageImportGalleryCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(FBWebImageView *)thumbnailView;
-(void)_handleLongPress:(id)arg1 ;
@end

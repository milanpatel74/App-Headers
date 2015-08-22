/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGMediaThumbnailView, UIView;

@interface IGMediaThumbnailCell : UICollectionViewCell {

	BOOL _showHighlight;
	IGMediaThumbnailView* _thumbnailView;
	UIView* _highlightView;

}

@property (nonatomic,retain) IGMediaThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) BOOL showHighlight;                                //@synthesize showHighlight=_showHighlight - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                            //@synthesize highlightView=_highlightView - In the implementation block
-(void)setImageURL:(id)arg1 isVideo:(BOOL)arg2 synchronous:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)highlightView;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)setThumbnailView:(IGMediaThumbnailView *)arg1 ;
-(IGMediaThumbnailView *)thumbnailView;
-(void)setShowHighlight:(BOOL)arg1 ;
-(BOOL)showHighlight;
@end

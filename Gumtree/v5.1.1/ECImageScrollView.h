/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIImageView, NSString;

@interface ECImageScrollView : UIScrollView <UIScrollViewDelegate> {

	UIImageView* _imageView;
	CGSize _lastSize;

}

@property (assign,nonatomic) CGSize lastSize;                        //@synthesize lastSize=_lastSize - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateImageFrame;
-(void)setupGestureRecognizers;
-(CGSize)lastSize;
-(void)setLastSize:(CGSize)arg1 ;
-(void)recenter;
-(void)updateInsets;
-(void)zoomInToTapLocation:(CGPoint)arg1 ;
-(CGPoint)offsetThatFitsImageAndViewForTapOffset:(CGPoint)arg1 scale:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)setContentMode:(long long)arg1 ;
-(UIImageView *)imageView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)commonInit;
-(void)handleSingleTap:(id)arg1 ;
-(void)zoomOut;
-(void)handleDoubleTap:(id)arg1 ;
-(void)imageDidChange;
@end

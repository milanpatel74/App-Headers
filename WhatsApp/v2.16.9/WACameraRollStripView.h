/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>
#import <WhatsApp/_WACameraRollStripScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol WACameraRollStripViewDelegate;
@class _WACameraRollStripScrollView, WAAssetCollection, UIColor, NSString;

@interface WACameraRollStripView : UIView <_WACameraRollStripScrollViewDelegate, UIGestureRecognizerDelegate> {

	_WACameraRollStripScrollView* _scrollView;
	BOOL _userInteractionReported;
	WAAssetCollection* _assetCollection;
	id<WACameraRollStripViewDelegate> _delegate;
	double _imageRotationAngle;

}

@property (nonatomic,retain) WAAssetCollection * assetCollection;                            //@synthesize assetCollection=_assetCollection - In the implementation block
@property (assign,nonatomic,__weak) id<WACameraRollStripViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double imageRotationAngle;                                      //@synthesize imageRotationAngle=_imageRotationAngle - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationState; 
@property (nonatomic,retain) UIColor * baseColor; 
@property (assign,nonatomic) double thumbnailAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)setThumbnailAlpha:(double)arg1 ;
-(void)setImageRotationAngle:(double)arg1 ;
-(id)viewForMediaPickerAsset:(id)arg1 ;
-(void)expandIfPossible;
-(void)contractIfPossible;
-(double)thumbnailAlpha;
-(void)reportUserInteractionIfNeeded;
-(long long)numberOfItemsInCameraRollStripScrollView:(id)arg1 ;
-(void)cameraRollStripScrollView:(id)arg1 willDisplayCell:(id)arg2 atIndex:(long long)arg3 ;
-(void)cameraRollStripScrollView:(id)arg1 didHighlightItemAtIndex:(long long)arg2 ;
-(void)cameraRollStripScrollView:(id)arg1 didUnhighlightItemAtIndex:(long long)arg2 ;
-(void)cameraRollStripScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)cameraRollStripScrollView:(id)arg1 didDeselectItemAtIndex:(long long)arg2 ;
-(void)cameraRollStripScrollViewDidReceiveTouch:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WACameraRollStripViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<WACameraRollStripViewDelegate>)delegate;
-(double)imageRotationAngle;
-(void)setBaseColor:(UIColor *)arg1 ;
-(WAAssetCollection *)assetCollection;
-(void)setAssetCollection:(WAAssetCollection *)arg1 ;
-(void)setPresentationState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setPresentationState:(unsigned long long)arg1 ;
-(UIColor *)baseColor;
-(unsigned long long)presentationState;
@end

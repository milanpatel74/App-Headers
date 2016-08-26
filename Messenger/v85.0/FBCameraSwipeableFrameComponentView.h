/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBSwipeableFramesFilter, CATextLayer, FBSwipeableFramesAsset, CALayer;

@interface FBCameraSwipeableFrameComponentView : UIView {

	FBSwipeableFramesFilter* _filter;
	CATextLayer* _filterTitleLabel;
	FBSwipeableFramesAsset* _swipeableFrame;
	CALayer* _overlayLayer;
	CGRect _visibleAreaFrame;

}
-(void)_layoutSublayerView:(BOOL)arg1 ;
-(void)_setSwipeableFrame:(id)arg1 ;
-(void)_setSwipeableFilter:(id)arg1 ;
-(void)_updateFramesAndFilterUI;
-(void)_removeFilterTitleUIIfNeeded;
-(void)_removeAllFrameLayersExceptLayer:(id)arg1 ;
-(void)_insertFilterTitleUI;
-(void)setFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setSwipeableFrameAsset:(id)arg1 ;
-(void)layoutSubviews;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIButton;

@interface MOPUBReplayView : UIView {

	/*^block*/id _actionBlock;
	UIView* _overlayView;
	UIButton* _replayVideoButton;

}

@property (nonatomic,retain) UIView * overlayView;                      //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIButton * replayVideoButton;              //@synthesize replayVideoButton=_replayVideoButton - In the implementation block
@property (nonatomic,copy) id actionBlock;                              //@synthesize actionBlock=_actionBlock - In the implementation block
-(id)initWithFrame:(CGRect)arg1 displayMode:(unsigned long long)arg2 ;
-(UIButton *)replayVideoButton;
-(void)setReplayVideoButton:(UIButton *)arg1 ;
-(void)replayButtonTapped;
-(void)layoutSubviews;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

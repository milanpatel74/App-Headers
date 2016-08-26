/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMagicStoryHeaderViewDelegate;
@class FBGradientView, UIView, UIButton;

@interface FBMagicStoryHeaderView : UIView {

	FBGradientView* _gradientView;
	UIView* _opaqueBackgroundView;
	UIEdgeInsets _edgeInsets;
	UIButton* _upperLeftButton;
	UIButton* _stickyUpperLeftButton;
	CGSize _upperLeftButtonImageSize;
	BOOL _stickyButtonsShouldBeHidden;
	BOOL _hasOpaqueBackground;
	id<FBMagicStoryHeaderViewDelegate> _delegate;
	double _progressStartOffset;
	double _progress;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double progressStartOffset;                                      //@synthesize progressStartOffset=_progressStartOffset - In the implementation block
@property (assign,nonatomic) double progress;                                                 //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL hasOpaqueBackground;                                        //@synthesize hasOpaqueBackground=_hasOpaqueBackground - In the implementation block
-(id)_gradientView;
-(void)setProgressStartOffset:(double)arg1 ;
-(void)setHasOpaqueBackground:(BOOL)arg1 ;
-(id)_backButtonWithStickyStyle:(BOOL)arg1 ;
-(void)_setStickyButtonsHidden:(BOOL)arg1 ;
-(void)handleLeftButtonTap:(id)arg1 ;
-(double)progressStartOffset;
-(BOOL)hasOpaqueBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMagicStoryHeaderViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBMagicStoryHeaderViewDelegate>)delegate;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(id)_opaqueBackgroundView;
-(void)_updateProgress:(double)arg1 ;
@end

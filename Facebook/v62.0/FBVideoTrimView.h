/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBFilmStripViewDelegate.h>
#import <Facebook/FBTrimViewDelegate.h>

@protocol FBVideoTrimViewDelegate;
@class FBTrimView, FBFilmStripView, UIView, FBTimer, FBVideoClip, NSString;

@interface FBVideoTrimView : UIView <FBFilmStripViewDelegate, FBTrimViewDelegate> {

	long long _viewMode;
	FBTrimView* _trimView;
	FBFilmStripView* _filmStripView;
	double _pointsPerSecond;
	UIView* _trackheadView;
	BOOL _trimming;
	BOOL _scrubbing;
	BOOL _zoomOutAfterZoomIn;
	CGPoint _autoScrollLastPoint;
	CGPoint _autoScrollCurrentPoint;
	FBTimer* _autoScrollTimer;
	unsigned long long _lastTrimDraggingMode;
	id<FBVideoTrimViewDelegate> _delegate;
	FBVideoClip* _clip;
	SCD_Struct_FB257 _minTrimmedLength;
	SCD_Struct_FB257 _maxTrimmedLength;
	SCD_Struct_FB257 _scrubTime;

}

@property (assign,nonatomic,__weak) id<FBVideoTrimViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long viewMode;                                             //@synthesize viewMode=_viewMode - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB257 minTrimmedLength;                              //@synthesize minTrimmedLength=_minTrimmedLength - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB257 maxTrimmedLength;                              //@synthesize maxTrimmedLength=_maxTrimmedLength - In the implementation block
@property (nonatomic,retain) FBVideoClip * clip;                                             //@synthesize clip=_clip - In the implementation block
@property (nonatomic,readonly) unsigned long long draggingMode; 
@property (nonatomic,readonly) SCD_Struct_FB311 timeRange; 
@property (nonatomic,readonly) SCD_Struct_FB257 scrubTime;                                   //@synthesize scrubTime=_scrubTime - In the implementation block
@property (getter=isScrubbing,nonatomic,readonly) BOOL scrubbing;                            //@synthesize scrubbing=_scrubbing - In the implementation block
@property (getter=isTrimming,nonatomic,readonly) BOOL trimming;                              //@synthesize trimming=_trimming - In the implementation block
@property (getter=isZoomingFilmstrip,nonatomic,readonly) BOOL zoomingFilmstrip; 
@property (nonatomic,readonly) double trimRelativeCenterX; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)videoTrimViewHeight;
-(void)updatePlayerFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2 ;
-(CGRect)trimView:(id)arg1 contentRectInView:(id)arg2 ;
-(void)trimViewDidBeginInteraction:(id)arg1 ;
-(void)trimViewDidLongPress:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)trimViewDidEndInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)trimViewDidUpdateTrimRange:(id)arg1 ;
-(double)trimRelativeCenterX;
-(unsigned long long)draggingMode;
-(id)trackheadView;
-(void)_adjustTrimFrame:(CGRect*)arg1 forClippingWhenZoomingWithDragInsets:(UIEdgeInsets*)arg2 ;
-(void)_refreshPointsPerSecond;
-(double)_computePointsPerSecond;
-(void)postEditDidEnd;
-(void)_seekScrubberToTime:(SCD_Struct_FB257)arg1 forceUpdate:(BOOL)arg2 autohide:(BOOL)arg3 ;
-(SCD_Struct_FB311)_timeRangeForTrimRange:(CGSize)arg1 ;
-(void)_scrubToTime:(SCD_Struct_FB257)arg1 autohideScrubber:(BOOL)arg2 ;
-(void)_updateTrimRangeByKeepingLeftHandle:(BOOL)arg1 rightHandle:(BOOL)arg2 scrubAtStart:(BOOL)arg3 ;
-(void)postEditDidBegin;
-(void)_updateTrackheadVisibility;
-(void)_showScrubberWithAutohide:(BOOL)arg1 ;
-(void)_updateScrubTimeForTrim;
-(CGPoint)_autoScrollPoint;
-(void)_startAutoScroll;
-(void)_stopAutoScroll;
-(BOOL)_canMoveByOffset:(double)arg1 byKeepingLeftHand:(BOOL)arg2 rightHandle:(BOOL)arg3 ;
-(void)_autoScrollTimerDidFire;
-(void)setView:(id)arg1 size:(CGSize)arg2 ;
-(void)setView:(id)arg1 origin:(CGPoint)arg2 ;
-(SCD_Struct_FB257)minTrimmedLength;
-(SCD_Struct_FB257)maxTrimmedLength;
-(void)updateFilmCropOriginWithXProportion:(double)arg1 YProportion:(double)arg2 ;
-(void)filmStripViewDidScroll:(id)arg1 ;
-(void)filmStripViewWillBeginDragging:(id)arg1 ;
-(void)filmStripViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)filmStripViewDidEndDecelerating:(id)arg1 ;
-(void)filmStripViewDidBeginZooming:(id)arg1 ;
-(void)filmStripViewDidEndZooming:(id)arg1 ;
-(BOOL)filmStripView:(id)arg1 shouldBeginScrubbingAtTime:(SCD_Struct_FB257)arg2 ;
-(void)filmStripView:(id)arg1 didBeginScrubbingAtTime:(SCD_Struct_FB257)arg2 ;
-(void)filmStripView:(id)arg1 didScrubAtTime:(SCD_Struct_FB257)arg2 ;
-(void)filmStripViewDidEndScrubbing:(id)arg1 ;
-(void)resetThumbnailCache;
-(SCD_Struct_FB257)scrubTime;
-(void)setMinTrimmedLength:(SCD_Struct_FB257)arg1 ;
-(void)setMaxTrimmedLength:(SCD_Struct_FB257)arg1 ;
-(id)initWithFrame:(CGRect)arg1 enableColorFilter:(BOOL)arg2 ;
-(void)seekScrubberToTime:(SCD_Struct_FB257)arg1 ;
-(BOOL)isZoomingFilmstrip;
-(void)setDelegate:(id<FBVideoTrimViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBVideoTrimViewDelegate>)delegate;
-(FBVideoClip *)clip;
-(long long)viewMode;
-(void)setClip:(FBVideoClip *)arg1 ;
-(BOOL)isTrimming;
-(BOOL)isScrubbing;
-(SCD_Struct_FB311)timeRange;
-(void)setOverlayImage:(id)arg1 ;
-(void)setViewMode:(long long)arg1 ;
@end

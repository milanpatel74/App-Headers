/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>
#import <WhatsApp/WAVideoScrubberTrimmerDelegate.h>
#import <WhatsApp/WAVideoScrubberThumbnailBarDataSource.h>
#import <UIKit/UIToolbarDelegate.h>

@protocol WAVideoScrubberDelegate;
@class WAVideoScrubberTrimmer, UIToolbar, WAGradientView, WAVideoScrubberThumbnailBar, WAVideoScrubberSloMoBar, NSMutableDictionary, NSString;

@interface WAVideoScrubber : UIView <WAVideoScrubberTrimmerDelegate, WAVideoScrubberThumbnailBarDataSource, UIToolbarDelegate> {

	WAVideoScrubberTrimmer* _trimmer;
	UIToolbar* _blurView;
	WAGradientView* _bottomShadowView;
	WAVideoScrubberThumbnailBar* _thumbnailBar;
	WAVideoScrubberSloMoBar* _sloMoBar;
	BOOL _slowMotionEnabled;
	BOOL _trimmingEnabled;
	BOOL _isTrimmingVideo;
	BOOL _isAdjustingSlowMotion;
	BOOL _thumbnailingEnabled;
	id<WAVideoScrubberDelegate> _delegate;
	SCD_Struct_WA3 _maximumDuration;
	SCD_Struct_WA3 _assetDuration;
	SCD_Struct_WA3 _currentTime;
	SCD_Struct_WA4 _trimmedTimeRange;
	SCD_Struct_WA4 _slowMotionTimeRange;

}

@property (assign,nonatomic,__weak) id<WAVideoScrubberDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WA3 maximumDuration;                                   //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WA3 assetDuration;                                     //@synthesize assetDuration=_assetDuration - In the implementation block
@property (assign,nonatomic) BOOL slowMotionEnabled;                                             //@synthesize slowMotionEnabled=_slowMotionEnabled - In the implementation block
@property (assign,nonatomic) BOOL trimmingEnabled;                                               //@synthesize trimmingEnabled=_trimmingEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_WA4 trimmedTimeRange;                                    //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_WA4 slowMotionTimeRange;                                 //@synthesize slowMotionTimeRange=_slowMotionTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_WA3 currentTime;                                         //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) BOOL isTrimmingVideo;                                             //@synthesize isTrimmingVideo=_isTrimmingVideo - In the implementation block
@property (nonatomic,readonly) BOOL isAdjustingSlowMotion;                                       //@synthesize isAdjustingSlowMotion=_isAdjustingSlowMotion - In the implementation block
@property (assign,getter=isContentHidden,nonatomic) BOOL contentHidden; 
@property (nonatomic,readonly) double effectiveHeight; 
@property (assign,getter=isBottomShadowHidden,nonatomic) BOOL bottomShadowHidden; 
@property (assign,getter=isThumbnailingEnabled,nonatomic) BOOL thumbnailingEnabled;              //@synthesize thumbnailingEnabled=_thumbnailingEnabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * thumbnailCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)videoScrubberTrimmerDidBeginDraggingThumb:(id)arg1 ;
-(void)videoScrubberTrimmerDidChangeThumbValue:(id)arg1 ;
-(void)videoScrubberTrimmerDidEndDraggingThumb:(id)arg1 ;
-(void)setThumbHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGSize)videoScrubberThumbnailBarThumbnailAspectRatio:(id)arg1 ;
-(BOOL)isThumbnailingEnabled;
-(void)videoScrubberThumbnailBar:(id)arg1 videoFramesAtTimes:(id)arg2 size:(CGSize)arg3 tolerance:(SCD_Struct_WA3)arg4 block:(/*^block*/id)arg5 ;
-(void)setNeedsRegenerateThumbnails;
-(void)setThumbnailingEnabled:(BOOL)arg1 ;
-(void)configureWithAssetDuration:(SCD_Struct_WA3)arg1 maximumDuration:(SCD_Struct_WA3)arg2 ;
-(void)setSlowMotionEnabled:(BOOL)arg1 ;
-(void)setTrimmingEnabled:(BOOL)arg1 ;
-(BOOL)slowMotionEnabled;
-(double)effectiveHeight;
-(SCD_Struct_WA4)trimmedTimeRange;
-(void)setContentHidden:(BOOL)arg1 ;
-(BOOL)isTrimmingVideo;
-(BOOL)isAdjustingSlowMotion;
-(void)setTrimmedTimeRange:(SCD_Struct_WA4)arg1 ;
-(void)setTimeRange:(SCD_Struct_WA4)arg1 ofSlider:(id)arg2 ;
-(BOOL)trimmingEnabled;
-(void)videoScrubberPrecisionRangeSliderDidBeginDraggingHandle:(id)arg1 ;
-(void)videoScrubberPrecisionRangeSliderDidDragHandle:(id)arg1 ;
-(void)videoScrubberPrecisionRangeSliderDidEndDraggingHandle:(id)arg1 ;
-(void)videoScrubberPrecisionRangeSlider:(id)arg1 mayPresentRangeFrom:(float)arg2 to:(float)arg3 ;
-(void)videoScrubberPrecisionRangeSlider:(id)arg1 willPresentRangeFrom:(float)arg2 to:(float)arg3 around:(float)arg4 animationDuration:(double)arg5 ;
-(BOOL)isBottomShadowHidden;
-(void)setBottomShadowHidden:(BOOL)arg1 ;
-(BOOL)isContentHidden;
-(void)setCurrentTime:(SCD_Struct_WA3)arg1 ;
-(SCD_Struct_WA3)currentTime;
-(SCD_Struct_WA4)slowMotionTimeRange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAVideoScrubberDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<WAVideoScrubberDelegate>)delegate;
-(long long)positionForBar:(id)arg1 ;
-(SCD_Struct_WA3)maximumDuration;
-(NSMutableDictionary *)thumbnailCache;
-(void)setThumbnailCache:(NSMutableDictionary *)arg1 ;
-(void)setSlowMotionTimeRange:(SCD_Struct_WA4)arg1 ;
-(SCD_Struct_WA3)assetDuration;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class UIView;


@protocol FBMoveAndScaleViewProtocol <NSObject>
@property (assign,nonatomic,__weak) id<FBMoveAndScaleViewDelegate> delegate; 
@property (assign,nonatomic) double topLayoutGuideLength; 
@property (nonatomic,readonly) UIView * asUIView; 
@property (assign,nonatomic) CGSize minimumCroppedSize; 
@required
-(void)setTopLayoutGuideLength:(double)arg1;
-(double)topLayoutGuideLength;
-(void)setMinimumCroppedSize:(CGSize)arg1;
-(UIView *)asUIView;
-(CGSize)minimumCroppedSize;
-(void)zoomToCropSquareAnimated:(BOOL)arg1;
-(id)getCurrentCropPoints;
-(void)swapInHighResolutionImage:(id)arg1;
-(void)hideCropConstraintView;
-(void)hideBottomBar:(BOOL)arg1;
-(BOOL)isBottomBarHidden;
-(void)setDelegate:(id)arg1;
-(id<FBMoveAndScaleViewDelegate>)delegate;

@end

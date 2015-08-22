/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBBurstAnimationImageViewDelegate.h>
#import <Messenger/FBMagicStoryAssetViewProtocol.h>

@protocol FBMagicStoryBurstPhotoViewDelegate;
@class FBBurstAnimationImageView, FBMagicStoryBurstBadgeOverlayView, NSString;

@interface FBMagicStoryBurstPhotoView : UIView <FBBurstAnimationImageViewDelegate, FBMagicStoryAssetViewProtocol> {

	FBBurstAnimationImageView* _burstView;
	FBMagicStoryBurstBadgeOverlayView* _burstOverlayView;
	id<FBMagicStoryBurstPhotoViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryBurstPhotoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long currentImageIndex; 
@property (nonatomic,readonly) BOOL isAnimating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithAssets:(id)arg1 session:(id)arg2 ;
-(void)showBurstBadge:(BOOL)arg1 ;
-(void)setCurrentImageIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)currentImageIndex;
-(void)configureWithAssets:(id)arg1 initialIndex:(unsigned long long)arg2 session:(id)arg3 ;
-(void)burstAnimationImageViewDidChangeToIndex:(unsigned long long)arg1 ;
-(id)assetViewOrLayer;
-(void)playOneLoopWithCompletion:(/*^block*/id)arg1 ;
-(void)play;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMagicStoryBurstPhotoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMagicStoryBurstPhotoViewDelegate>)delegate;
-(void)prepareForReuse;
-(BOOL)isAnimating;
-(void)pause;
@end

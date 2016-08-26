/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGMediaPickerCell.h>

@class UIImageView, UILabel, SMetaDisposable;

@interface TGMediaAssetsVideoCell : TGMediaPickerCell {

	UIImageView* _shadowView;
	UIImageView* _iconView;
	UILabel* _durationLabel;
	SMetaDisposable* _adjustmentsDisposable;

}
-(id)transitionImage;
-(void)setItem:(id)arg1 signal:(id)arg2 ;
-(void)_layoutImageForOriginalSize:(CGSize)arg1 cropRect:(CGRect)arg2 cropOrientation:(long long)arg3 ;
-(void)_layoutImageWithoutAdjustments;
-(void)_transformLayoutForOrientation:(long long)arg1 originalSize:(CGSize*)arg2 cropRect:(CGRect*)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBWebRTCPhotoCircleView, UILabel, FBMUserName, UIImageView;

@interface FBWebRTCInfoView : UIView {

	FBWebRTCPhotoCircleView* _photoCircleView;
	UILabel* _nameLabel;
	UILabel* _statusLabel;
	UILabel* _disclaimerLabel;
	UILabel* _videoDisabledLabel;
	FBMUserName* _userName;
	BOOL _disclaimerLabelHidden;
	BOOL _videoDisabledLabelHidden;
	BOOL _disclaimerLabelHiddenByVideoDisabledLabel;
	BOOL _videoTheme;

}

@property (assign,nonatomic) BOOL photoHidden; 
@property (assign,nonatomic) BOOL disclaimerLabelHidden;                                  //@synthesize disclaimerLabelHidden=_disclaimerLabelHidden - In the implementation block
@property (assign,nonatomic) BOOL videoDisabledLabelHidden;                               //@synthesize videoDisabledLabelHidden=_videoDisabledLabelHidden - In the implementation block
@property (assign,nonatomic) BOOL disclaimerLabelHiddenByVideoDisabledLabel;              //@synthesize disclaimerLabelHiddenByVideoDisabledLabel=_disclaimerLabelHiddenByVideoDisabledLabel - In the implementation block
@property (assign,getter=isVideoTheme,nonatomic) BOOL videoTheme;                         //@synthesize videoTheme=_videoTheme - In the implementation block
@property (nonatomic,readonly) UIImageView * photoView; 
-(BOOL)isVideoTheme;
-(id)_createLabelWithFont:(id)arg1 color:(id)arg2 numberOfLines:(long long)arg3 ;
-(void)_updateColorsToTheme;
-(void)setDisclaimerLabelHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDisclaimerLabelHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setVideoDisabledLabelHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setLabel:(id)arg1 hidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)disclaimerLabelHiddenByVideoDisabledLabel;
-(void)setDisclaimerLabelHiddenByVideoDisabledLabel:(BOOL)arg1 ;
-(BOOL)disclaimerLabelHidden;
-(void)_setLabel:(id)arg1 hidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_hideDisclaimerLabelIfNeeded;
-(void)_setDisabledTextWithName:(id)arg1 ;
-(void)setDisclaimerLabelHidden:(BOOL)arg1 ;
-(void)setVideoTheme:(BOOL)arg1 ;
-(void)setVideomailTheme;
-(void)setVideoDisabledLabelHidden:(BOOL)arg1 ;
-(BOOL)photoHidden;
-(void)setPhotoHidden:(BOOL)arg1 ;
-(BOOL)videoDisabledLabelHidden;
-(UIImageView *)photoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setName:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
@end

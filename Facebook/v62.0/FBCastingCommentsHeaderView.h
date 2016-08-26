/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class PABlurView, FBNetworkImageView, UIView, UILabel, UIImageView;

@interface FBCastingCommentsHeaderView : UIView {

	PABlurView* _backgroundBlur;
	FBNetworkImageView* _backgroundImageView;
	UIView* _videoInfoView;
	UILabel* _titleLabel;
	UILabel* _liveLabel;
	UIView* _castingDeviceView;
	UILabel* _castingDeviceNameLabel;
	UIImageView* _castingDeviceImageView;

}
-(void)setupWithTitle:(id)arg1 imageURL:(id)arg2 isLive:(BOOL)arg3 castingDeviceImage:(id)arg4 castingDeviceName:(id)arg5 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

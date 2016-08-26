/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBGradientView, FBNetworkImageView, UILabel;

@interface FBEventsSideFeedRemindersHeaderView : UIView {

	FBGradientView* _gradientView;
	FBNetworkImageView* _imageView;
	UILabel* _nameLabel;
	UILabel* _timeLabel;
	UILabel* _supportingPersonsLabel;

}

@property (nonatomic,retain) FBNetworkImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                           //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timeLabel;                           //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * supportingPersonsLabel;              //@synthesize supportingPersonsLabel=_supportingPersonsLabel - In the implementation block
-(void)_configureLabelWithShadow:(id)arg1 ;
-(void)_configureCoverPhotoView;
-(UILabel *)supportingPersonsLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(FBNetworkImageView *)imageView;
-(void)setImageView:(FBNetworkImageView *)arg1 ;
-(UILabel *)nameLabel;
-(UILabel *)timeLabel;
@end

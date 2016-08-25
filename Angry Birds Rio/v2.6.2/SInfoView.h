/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface SInfoView : UIView {

	UIButton* _nextButton;
	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,retain) UIButton * nextButton;                //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
+(id)infoView;
-(void)dealloc;
-(void)awakeFromNib;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
@end

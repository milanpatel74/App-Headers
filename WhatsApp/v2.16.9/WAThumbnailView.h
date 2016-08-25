/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, UIImage;

@interface WAThumbnailView : UIView {

	UIImageView* _imageView;
	UIImageView* _checkmarkImageView;
	UIView* _dimmingView;
	UIImage* _placeholderImage;
	unsigned long long _state;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(UIImage *)image;
@end

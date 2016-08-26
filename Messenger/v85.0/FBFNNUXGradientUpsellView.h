/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface FBFNNUXGradientUpsellView : UIView {

	CAGradientLayer* _backgroundLayer;
	UIImageView* _themeIcon;
	UILabel* _titleLabel;
	UIView* _noteView;

}
-(void)_configureAppearance:(id)arg1 ;
-(long long)_calculateLabelLinesNumWithConstrain:(CGSize)arg1 label:(id)arg2 ;
-(void)_resetTitleFontSizeWithMaxHeight:(double)arg1 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 upsellDataSource:(id)arg3 nuxType:(unsigned long long)arg4 ;
-(void)layoutSubviews;
@end

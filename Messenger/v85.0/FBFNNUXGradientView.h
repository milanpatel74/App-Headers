/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, FBRichTextView, UIView, FBFNNUXShareWithButton, UIButton;

@interface FBFNNUXGradientView : UIView {

	UILabel* _subtitleLabel;
	FBRichTextView* _descriptionTextView;
	UIView* _privacyInfoView;
	UIView* _upsellView;
	FBFNNUXShareWithButton* _shareWithButton;
	UIButton* _turnOnButton;
	UIButton* _notNowButton;

}

@property (nonatomic,readonly) FBRichTextView * descriptionTextView;                  //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,readonly) FBFNNUXShareWithButton * shareWithButton;              //@synthesize shareWithButton=_shareWithButton - In the implementation block
@property (nonatomic,readonly) UIButton * turnOnButton;                               //@synthesize turnOnButton=_turnOnButton - In the implementation block
@property (nonatomic,readonly) UIButton * notNowButton;                               //@synthesize notNowButton=_notNowButton - In the implementation block
-(UIButton *)turnOnButton;
-(void)_configureAppearance:(id)arg1 ;
-(double)_calculatePrivacyInfoComponentsHeight;
-(id)initWithAppearance:(id)arg1 session:(id)arg2 upsellDataSource:(id)arg3 nuxType:(unsigned long long)arg4 ;
-(FBFNNUXShareWithButton *)shareWithButton;
-(UIButton *)notNowButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBRichTextView *)descriptionTextView;
@end

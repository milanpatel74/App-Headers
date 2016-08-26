/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBAuthenticationRoundedImageView, UIView, FBRichTextView, CALayer;

@interface FBDBLSettingsSSOAccountView : UIView {

	FBDBLSettingsSSOAccountMetrics* _metrics;
	FBAuthenticationRoundedImageView* _roundedImage;
	UIView* _instructionContainerView;
	FBRichTextView* _instructionTextView;
	FBRichTextView* _instructionStepsTextView;
	CALayer* _topAndBottomBorderLayer;
	FBRichTextView* _userNameTextView;

}

@property (nonatomic,readonly) FBRichTextView * userNameTextView;              //@synthesize userNameTextView=_userNameTextView - In the implementation block
-(FBRichTextView *)userNameTextView;
-(id)_makeUserNameTextView;
-(id)_makeInstructionsContainerView;
-(double)_getInstructionHeightConstrainedToSize:(CGSize)arg1 textView:(id)arg2 ;
-(id)_instructionText;
-(id)_ssoInstructions;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 gatekeeper:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)imageSize;
-(void)setImageURL:(id)arg1 ;
@end

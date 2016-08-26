/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSArray, UISwitch, NSString;

@interface FBFacecastSwitchView : UIView {

	UILabel* _label;
	UILabel* _subtitleLabel;
	NSArray* _accessibilityElements;
	UISwitch* _toggle;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,readonly) UISwitch * toggle;              //@synthesize toggle=_toggle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(UISwitch *)toggle;
@end

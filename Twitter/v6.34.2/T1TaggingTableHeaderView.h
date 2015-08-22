/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIView, TFNTokenField, NSString;

@interface T1TaggingTableHeaderView : UIView {

	UIImageView* _imageView;
	UILabel* _label;
	UIView* _borderTop;
	UIView* _borderBottom;
	TFNTokenField* _tokenField;

}

@property (nonatomic,readonly) TFNTokenField * tokenField;                       //@synthesize tokenField=_tokenField - In the implementation block
@property (nonatomic,copy) NSString * labelText; 
@property (assign,getter=isLabelHidden,nonatomic) BOOL labelHidden; 
-(double)_inlineSearchIconWidth;
-(double)_visibleImageHeight;
-(double)pullToRevealImageHeight;
-(void)setLabelHidden:(BOOL)arg1 ;
-(BOOL)isLabelHidden;
-(TFNTokenField *)tokenField;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 ;
-(double)visibleHeight;
@end

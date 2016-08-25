/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITextView.h>

@class NSString, UIColor;

@interface HPTextViewInternal : UITextView {

	BOOL _displayPlaceHolder;
	NSString* _placeholder;
	UIColor* _placeholderColor;

}

@property (nonatomic,retain) NSString * placeholder;                  //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;              //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) BOOL displayPlaceHolder;                 //@synthesize displayPlaceHolder=_displayPlaceHolder - In the implementation block
-(void)setDisplayPlaceHolder:(BOOL)arg1 ;
-(BOOL)displayPlaceHolder;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
@end

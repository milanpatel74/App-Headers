/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIControl.h>

@class SLKReaction, OLImageView, UILabel, UIImageView;

@interface SLKReactionButton : UIControl {

	BOOL _on;
	BOOL _addButton;
	BOOL _animating;
	BOOL _bounces;
	BOOL _localizedAddButton;
	unsigned long long _internalCount;
	SLKReaction* _reaction;
	OLImageView* _imageView;
	UILabel* _textLabel;
	UIImageView* _backgroundView;

}

@property (nonatomic,retain) SLKReaction * reaction;                                           //@synthesize reaction=_reaction - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                              //@synthesize on=_on - In the implementation block
@property (assign,getter=isAddButton,nonatomic) BOOL addButton;                                //@synthesize addButton=_addButton - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) BOOL bounces;                                                     //@synthesize bounces=_bounces - In the implementation block
@property (nonatomic,readonly) unsigned long long internalCount;                               //@synthesize internalCount=_internalCount - In the implementation block
@property (nonatomic,readonly) BOOL hasEmojiImage; 
@property (nonatomic,retain) OLImageView * imageView;                                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                              //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundView;                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,getter=isLocalizedAddButton,nonatomic) BOOL localizedAddButton;              //@synthesize localizedAddButton=_localizedAddButton - In the implementation block
+(id)localizedAddButton;
+(double)buttonWidthForCount:(long long)arg1 ;
+(double)labelWidthForCountString:(id)arg1 ;
+(double)buttonWidthForCountString:(id)arg1 ;
+(double)labelWidthForCount:(long long)arg1 ;
+(id)addButton;
-(void)setReaction:(SLKReaction *)arg1 ;
-(BOOL)isAddButton;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(SLKReaction *)reaction;
-(BOOL)hasEmojiImage;
-(void)setLocalizedAddButton:(BOOL)arg1 ;
-(void)handleGestureRecognizer:(id)arg1 ;
-(BOOL)isLocalizedAddButton;
-(id)copyLabel:(id)arg1 ;
-(unsigned long long)internalCount;
-(void)animateBounceEffectForView:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutIfNeeded;
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(void)setBounces:(BOOL)arg1 ;
-(BOOL)bounces;
-(id)backgroundImage;
-(double)width;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UILabel *)textLabel;
-(UIImageView *)backgroundView;
-(id)textColor;
-(double)height;
-(OLImageView *)imageView;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)commonInit;
-(void)bounce;
-(void)setImageView:(OLImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setAddButton:(BOOL)arg1 ;
@end


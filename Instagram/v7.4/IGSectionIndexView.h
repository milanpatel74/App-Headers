/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGSectionIndexViewDelegate;
@class NSArray, UILongPressGestureRecognizer;

@interface IGSectionIndexView : UIView {

	CGRect _desiredFrame;
	NSArray* _letters;
	id<IGSectionIndexViewDelegate> _delegate;
	NSArray* _letterViews;
	UILongPressGestureRecognizer* _press;
	NSRange _visibleRange;

}

@property (nonatomic,retain) NSArray * letters;                                           //@synthesize letters=_letters - In the implementation block
@property (assign,nonatomic) NSRange visibleRange;                                        //@synthesize visibleRange=_visibleRange - In the implementation block
@property (assign,nonatomic,__weak) id<IGSectionIndexViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * letterViews;                                       //@synthesize letterViews=_letterViews - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * press;                        //@synthesize press=_press - In the implementation block
-(NSArray *)letterViews;
-(NSArray *)letters;
-(void)onPress:(id)arg1 ;
-(unsigned long long)indexOfViewAtPoint:(CGPoint)arg1 ;
-(double)letterViewHeight;
-(void)setDesiredFrame:(CGRect)arg1 ;
-(void)setLetters:(NSArray *)arg1 ;
-(void)setLetterViews:(NSArray *)arg1 ;
-(void)setPress:(UILongPressGestureRecognizer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGSectionIndexViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGSectionIndexViewDelegate>)delegate;
-(UILongPressGestureRecognizer *)press;
-(void)setVisibleRange:(NSRange)arg1 ;
-(NSRange)visibleRange;
@end

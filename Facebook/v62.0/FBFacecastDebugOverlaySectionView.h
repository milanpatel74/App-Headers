/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBFacecastDebugOverlaySectionViewDelegate;
@class UILabel, UIView, NSDate, NSString;

@interface FBFacecastDebugOverlaySectionView : UIView {

	CGSize _largestEncounteredSize;
	UILabel* _titleLabel;
	UILabel* _collapsedLabel;
	UILabel* _dateLabel;
	UILabel* _textLabel;
	UIView* _activityIndicator;
	NSDate* _dateOfLastUpdate;
	BOOL _collapsed;
	id<FBFacecastDebugOverlaySectionViewDelegate> _delegate;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL collapsed;                                                             //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,nonatomic,__weak) id<FBFacecastDebugOverlaySectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_label;
-(void)_didTapTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBFacecastDebugOverlaySectionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFacecastDebugOverlaySectionViewDelegate>)delegate;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)collapsed;
-(void)setCollapsed:(BOOL)arg1 ;
@end

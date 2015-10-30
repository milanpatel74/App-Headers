/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray, UIImage, NSIndexSet, NSMutableArray, UIImageView;

@interface AKSegmentedControl : UIControl {

	NSArray* _buttonsArray;
	UIImage* _backgroundImage;
	UIImage* _separatorImage;
	NSIndexSet* _selectedIndexes;
	unsigned long long _segmentedControlMode;
	NSMutableArray* _separatorsArray;
	UIImageView* _backgroundImageView;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) NSArray * buttonsArray;                               //@synthesize buttonsArray=_buttonsArray - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                            //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * separatorImage;                             //@synthesize separatorImage=_separatorImage - In the implementation block
@property (nonatomic,retain) NSIndexSet * selectedIndexes;                         //@synthesize selectedIndexes=_selectedIndexes - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                       //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) unsigned long long segmentedControlMode;              //@synthesize segmentedControlMode=_segmentedControlMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * separatorsArray;                     //@synthesize separatorsArray=_separatorsArray - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                    //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
-(void)commonInitializer;
-(void)setSelectedIndexes:(NSIndexSet *)arg1 ;
-(void)setSegmentedControlMode:(unsigned long long)arg1 ;
-(void)segmentButtonPressed:(id)arg1 ;
-(void)rebuildSeparators;
-(void)setSelectedIndexes:(id)arg1 byExpandingSelection:(BOOL)arg2 ;
-(unsigned long long)segmentedControlMode;
-(NSMutableArray *)separatorsArray;
-(void)setSeparatorsArray:(NSMutableArray *)arg1 ;
-(NSIndexSet *)selectedIndexes;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIImage *)backgroundImage;
-(UIImageView *)backgroundImageView;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)updateButtons;
-(UIEdgeInsets)contentEdgeInsets;
-(UIImage *)separatorImage;
-(void)setSeparatorImage:(UIImage *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(NSArray *)buttonsArray;
-(void)setButtonsArray:(NSArray *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTableViewCell.h>

@class UIButton, UIImage;

@interface ECCheckmarkTableViewCell : ECBaseTableViewCell {

	UIButton* _checkButton;
	UIImage* _stateNormalImage;
	UIImage* _stateSelectedImage;

}

@property (nonatomic,retain) UIButton * checkButton;                    //@synthesize checkButton=_checkButton - In the implementation block
@property (nonatomic,retain) UIImage * stateNormalImage;                //@synthesize stateNormalImage=_stateNormalImage - In the implementation block
@property (nonatomic,retain) UIImage * stateSelectedImage;              //@synthesize stateSelectedImage=_stateSelectedImage - In the implementation block
-(UIButton *)checkButton;
-(void)setCheckButton:(UIButton *)arg1 ;
-(UIImage *)stateNormalImage;
-(UIImage *)stateSelectedImage;
-(void)setStateNormalImage:(UIImage *)arg1 ;
-(void)setStateSelectedImage:(UIImage *)arg1 ;
-(void)setDefaults;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)handleTap:(id)arg1 ;
@end

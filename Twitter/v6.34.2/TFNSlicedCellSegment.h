/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel;

@interface TFNSlicedCellSegment : UIView {

	UILabel* _labelLabel;
	UILabel* _valueLabel;
	/*^block*/id _action;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,copy) id action;                             //@synthesize action=_action - In the implementation block
-(id)_labelWithText:(id)arg1 isValue:(BOOL)arg2 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 action:(/*^block*/id)arg3 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(UILabel *)labelLabel;
-(UILabel *)valueLabel;
@end


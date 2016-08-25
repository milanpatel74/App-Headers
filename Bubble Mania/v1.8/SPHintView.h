/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SPHintView : UIView {

	NSString* _hintText;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * hintText;              //@synthesize hintText=_hintText - In the implementation block
@property (nonatomic,retain) UILabel * label;                //@synthesize label=_label - In the implementation block
-(NSString *)hintText;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setHintText:(NSString *)arg1 ;
-(void)setupSubviews;
@end

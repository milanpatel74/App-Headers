/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class NSString, UIColor;

@interface FBReactionSportsHeadToHeadComponent : CKCompositeComponent {

	double _leftValue;
	double _rightValue;
	NSString* _leftLabel;
	NSString* _rightLabel;
	UIColor* _leftColor;
	UIColor* _rightColor;
	NSString* _title;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) UIEdgeInsets insets;                     //@synthesize insets=_insets - In the implementation block
@property (nonatomic,readonly) double leftValue;                        //@synthesize leftValue=_leftValue - In the implementation block
@property (nonatomic,readonly) double rightValue;                       //@synthesize rightValue=_rightValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * leftLabel;               //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * rightLabel;              //@synthesize rightLabel=_rightLabel - In the implementation block
@property (nonatomic,readonly) UIColor * leftColor;                     //@synthesize leftColor=_leftColor - In the implementation block
@property (nonatomic,readonly) UIColor * rightColor;                    //@synthesize rightColor=_rightColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
+(id)newWithTitle:(id)arg1 leftValue:(double)arg2 rightValue:(double)arg3 leftLabel:(id)arg4 rightLabel:(id)arg5 leftColor:(id)arg6 rightColor:(id)arg7 insets:(UIEdgeInsets)arg8 ;
-(double)leftValue;
-(double)rightValue;
-(UIColor *)leftColor;
-(UIColor *)rightColor;
-(NSString *)title;
-(UIEdgeInsets)insets;
-(NSString *)leftLabel;
-(NSString *)rightLabel;
@end

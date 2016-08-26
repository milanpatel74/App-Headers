/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBRoundedRectImageSpec : FBValueObject <NSCopying> {

	double _topLeftRadius;
	double _topRightRadius;
	double _bottomLeftRadius;
	double _bottomRightRadius;
	UIColor* _innerColor;
	UIColor* _outerColor;
	UIColor* _innerStrokeColor;
	double _innerStrokeWidth;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) double topLeftRadius;                         //@synthesize topLeftRadius=_topLeftRadius - In the implementation block
@property (nonatomic,readonly) double topRightRadius;                        //@synthesize topRightRadius=_topRightRadius - In the implementation block
@property (nonatomic,readonly) double bottomLeftRadius;                      //@synthesize bottomLeftRadius=_bottomLeftRadius - In the implementation block
@property (nonatomic,readonly) double bottomRightRadius;                     //@synthesize bottomRightRadius=_bottomRightRadius - In the implementation block
@property (nonatomic,copy,readonly) UIColor * innerColor;                    //@synthesize innerColor=_innerColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * outerColor;                    //@synthesize outerColor=_outerColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * innerStrokeColor;              //@synthesize innerStrokeColor=_innerStrokeColor - In the implementation block
@property (nonatomic,readonly) double innerStrokeWidth;                      //@synthesize innerStrokeWidth=_innerStrokeWidth - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInset;                    //@synthesize contentInset=_contentInset - In the implementation block
-(double)topLeftRadius;
-(double)topRightRadius;
-(double)bottomLeftRadius;
-(double)bottomRightRadius;
-(id)initWithTopLeftRadius:(double)arg1 topRightRadius:(double)arg2 bottomLeftRadius:(double)arg3 bottomRightRadius:(double)arg4 innerColor:(id)arg5 outerColor:(id)arg6 innerStrokeColor:(id)arg7 innerStrokeWidth:(double)arg8 contentInset:(UIEdgeInsets)arg9 ;
-(UIColor *)innerStrokeColor;
-(double)innerStrokeWidth;
-(UIColor *)outerColor;
-(UIEdgeInsets)contentInset;
-(UIColor *)innerColor;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@interface FBTagSearchBarView : UIView {

	BOOL _openBottomRect;
	double _middlePoint;

}

@property (assign,nonatomic) double middlePoint;               //@synthesize middlePoint=_middlePoint - In the implementation block
@property (assign,nonatomic) BOOL openBottomRect;              //@synthesize openBottomRect=_openBottomRect - In the implementation block
-(BOOL)openBottomRect;
-(void)setOpenBottomRect:(BOOL)arg1 ;
-(void)setMiddlePoint:(double)arg1 ;
-(double)middlePoint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

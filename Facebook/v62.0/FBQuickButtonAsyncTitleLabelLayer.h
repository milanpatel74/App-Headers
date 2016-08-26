/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAsyncLayer.h>

@class FBQuickButtonStateContents, UIFont;

@interface FBQuickButtonAsyncTitleLabelLayer : FBAsyncLayer {

	FBQuickButtonStateContents* _stateContents;
	UIFont* _titleFont;
	CGRect _textBoundingRect;

}

@property (nonatomic,retain) FBQuickButtonStateContents * stateContents;              //@synthesize stateContents=_stateContents - In the implementation block
@property (assign,nonatomic) CGRect textBoundingRect;                                 //@synthesize textBoundingRect=_textBoundingRect - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                      //@synthesize titleFont=_titleFont - In the implementation block
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
-(id)drawParameters;
-(void)setStateContents:(FBQuickButtonStateContents *)arg1 ;
-(void)setTextBoundingRect:(CGRect)arg1 ;
-(FBQuickButtonStateContents *)stateContents;
-(CGRect)textBoundingRect;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
@end

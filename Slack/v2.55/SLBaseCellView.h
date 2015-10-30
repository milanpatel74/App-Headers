/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@interface SLBaseCellView : UIView {

	CGRect _rect;
	id _parent;

}

@property (assign,nonatomic,__weak) id parent;              //@synthesize parent=_parent - In the implementation block
-(void)drawHighlightedShortBackgroundColor:(CGContextRef)arg1 ;
-(void)drawHighlighted:(CGContextRef)arg1 ;
-(void)drawBackgroundColor:(CGContextRef)arg1 ;
-(void)drawShortBackgroundColor:(CGContextRef)arg1 ;
-(void)drawAccessoryView:(CGContextRef)arg1 ;
-(void)drawCheckmark:(CGContextRef)arg1 ;
-(void)drawCheckmarkOnLeft:(CGContextRef)arg1 ;
-(void)drawRadiomark:(CGContextRef)arg1 pressed:(BOOL)arg2 ;
-(void)drawCellSeparator:(CGContextRef)arg1 ;
-(void)drawCount:(CGContextRef)arg1 ;
-(void)drawMisc:(CGContextRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)parent;
-(void)setParent:(id)arg1 ;
@end


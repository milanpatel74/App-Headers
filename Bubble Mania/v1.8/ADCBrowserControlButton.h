/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ADCViewElement.h>

@class UIButton, NSString, UIImageView, UIView;

@interface ADCBrowserControlButton : ADCViewElement {

	BOOL enabled;
	UIButton* button;
	NSString* click_action;
	NSString* click_action_type;
	UIImageView* glow;
	UIView* owner;
	int position;
	id ad;

}

@property (assign,nonatomic) id ad; 
-(void)setAd:(id)arg1 ;
-(void)layout:(id)arg1 ;
-(void)freePlaybackResources;
-(void)buttonPushed:(id)arg1 ;
-(void)setGlow:(id)arg1 ;
-(void)not_dimmed;
-(id)init:(id)arg1 inAd:(id)arg2 withPosition:(int)arg3 ;
-(BOOL)show:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)update:(id)arg1 ;
-(id)ad;
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)dimmed;
@end

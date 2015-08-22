/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTooltipView, UIView;

@interface TFNTooltipManagedConfig : NSObject {

	TFNTooltipView* _tooltipView;
	UIView* _inView;
	unsigned long long _permittedArrowDirections;
	unsigned long long _animationType;

}

@property (nonatomic,retain) TFNTooltipView * tooltipView;                             //@synthesize tooltipView=_tooltipView - In the implementation block
@property (assign,nonatomic,__weak) UIView * inView;                                   //@synthesize inView=_inView - In the implementation block
@property (assign,nonatomic) unsigned long long permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (assign,nonatomic) unsigned long long animationType;                         //@synthesize animationType=_animationType - In the implementation block
-(TFNTooltipView *)tooltipView;
-(UIView *)inView;
-(id)initWithTooltip:(id)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animationType:(unsigned long long)arg4 ;
-(void)setTooltipView:(TFNTooltipView *)arg1 ;
-(void)setInView:(UIView *)arg1 ;
-(unsigned long long)permittedArrowDirections;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
-(void)setAnimationType:(unsigned long long)arg1 ;
-(unsigned long long)animationType;
@end

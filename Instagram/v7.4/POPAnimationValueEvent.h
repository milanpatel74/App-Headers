/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:21 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent {

	id _value;
	id _velocity;

}

@property (nonatomic,readonly) id value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) id velocity;              //@synthesize velocity=_velocity - In the implementation block
-(void)_appendDescription:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 value:(id)arg3 ;
-(void)setVelocity:(id)arg1 ;
-(id)value;
-(id)velocity;
@end

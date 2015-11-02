/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface WASpringAnimator : NSObject {

	double _x;
	double _v;
	double _initialVelocity;
	double _t;
	double _tension;
	double _friction;

}

@property (t,nonatomic,readonly) double t;                 //@synthesize t=_t - In the implementation block
@property (nonatomic,readonly) double value; 
@property (assign,nonatomic) double tension;               //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;              //@synthesize friction=_friction - In the implementation block
-(id)initWithInitialVelocity:(double)arg1 ;
-(void)setTension:(double)arg1 ;
-(void)advanceByTimeDelta:(double)arg1 ;
-(void)integrateState:(double)arg1 v:(double)arg2 speed:(double)arg3 outX:(inout double*)arg4 outV:(inout double*)arg5 ;
-(double)tension;
-(void)evaluateState:(double)arg1 :(double)arg2 :(double*)arg3 :(double*)arg4 ;
-(void)evaluateStateWithDerivative:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4 :(double)arg5 :(double*)arg6 :(double*)arg7 ;
-(void)reset;
-(double)value;
-(void)setFriction:(double)arg1 ;
-(double)friction;
-(double)t;
@end


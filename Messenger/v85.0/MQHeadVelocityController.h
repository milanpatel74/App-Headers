/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class MQNSDateVector3, MQHeadRotationController;

@interface MQHeadVelocityController : NSObject {

	MQFloatVector3 oldRotation;
	MQFloatVector3 velocity;
	MQFloatVector3 translation;
	MQFloatVector3 displacement;
	MQBoolVector3 trend;
	MQNSDateVector3* date;
	MQHeadRotationController* _rotationController;

}

@property (nonatomic,retain) MQHeadRotationController * rotationController;              //@synthesize rotationController=_rotationController - In the implementation block
-(float)checkByTrend:(BOOL)arg1 withLeftValue:(float)arg2 andRightValue:(float)arg3 andSuccessValue:(float)arg4 ;
-(MQFloatVector3)nullifyWithDisplacement:(MQFloatVector3)arg1 andNewRotation:(MQFloatVector3)arg2 andOldRotation:(MQFloatVector3)arg3 andTrendVector:(MQBoolVector3)arg4 ;
-(MQBoolVector3)swapTrendFromOriginal:(MQBoolVector3)arg1 usingDisplacement:(MQFloatVector3)arg2 andNullified:(MQFloatVector3)arg3 ;
-(MQFloatVector3)getVelo;
-(MQHeadRotationController *)rotationController;
-(void)setRotationController:(MQHeadRotationController *)arg1 ;
-(id)init;
-(void)pass;
@end

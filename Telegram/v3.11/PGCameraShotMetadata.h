/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGCameraShotMetadata : NSObject {

	BOOL _frontal;
	double _deviceAngle;

}

@property (assign,nonatomic) double deviceAngle;              //@synthesize deviceAngle=_deviceAngle - In the implementation block
@property (assign,nonatomic) BOOL frontal;                    //@synthesize frontal=_frontal - In the implementation block
+(double)relativeDeviceAngleFromAngle:(double)arg1 orientation:(long long)arg2 ;
-(BOOL)frontal;
-(double)deviceAngle;
-(void)setDeviceAngle:(double)arg1 ;
-(void)setFrontal:(BOOL)arg1 ;
@end

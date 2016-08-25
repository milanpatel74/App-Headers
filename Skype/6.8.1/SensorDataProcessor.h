//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

@interface SensorDataProcessor : NSObject
{
    struct SensorData m_SensorData;
    NSMutableArray *m_DeviceMotionArray;
    NSLock *m_DeviceMotionArrayLock;
    double m_RotxPrev;
    double m_RotyPrev;
    double m_ExposureTimePrev;
    double m_TimestampCameraPrev;
    double m_TimestampSensorPrev;
    double m_Angle2PixelX;
    double m_Angle2PixelY;
    int m_DeviceType;
    _Bool m_bIsFrontCamera;
    int m_Width;
    int m_Height;
    float m_Cam2pixelMatrix[4];
    _Bool m_shakeDetectionStarted;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *m_GyroPullThread;
    _Bool m_GyroPullThreadShouldStop;
}

+ (void)initialize;
- (void)setCameraData:(struct __CFDictionary *)arg1:(struct SensorData *)arg2;
- (void)dealloc;
- (void)stopSensorUpdates;
- (void)startSensorUpdates;
- (const struct SensorData *)getFrameData:(double)arg1:(struct opaqueCMSampleBuffer *)arg2;
- (void)rotationAngle2MotionVector:(float)arg1:(float)arg2:(float *)arg3:(float *)arg4;
- (void)pollMotionSensors;
- (void)configure:(unsigned char)arg1:(int)arg2:(int)arg3;
- (void)gyro_pull;
- (void)stopShakeDetection;
- (_Bool)deviceIsShaking;
- (void)startShakeDetection;
- (id)init;

@end

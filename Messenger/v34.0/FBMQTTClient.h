/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBMQTTClient <NSObject>
@property (assign,nonatomic) BOOL useVOIP; 
@property (assign,nonatomic) int mqttKeepAliveTime; 
@property (assign,nonatomic) int mqttForegroundKeepAliveTime; 
@property (assign,nonatomic) float pingResponseTimeout; 
@property (assign,nonatomic) float connectTimeout; 
@property (assign,nonatomic) double lastMqttActivityTimeSecond; 
@property (assign,nonatomic,__weak) id<FBMQTTClientDelegate> delegate; 
@property (assign,nonatomic) BOOL inBackground; 
@property (readonly) int connectStatus; 
@required
-(float)pingResponseTimeout;
-(void)setPingResponseTimeout:(float)arg1;
-(BOOL)useVOIP;
-(BOOL)inBackground;
-(void)setLastMqttActivityTimeSecond:(double)arg1;
-(double)lastMqttActivityTimeSecond;
-(void)runKeepAlive;
-(int)mqttKeepAliveTime;
-(id)initClientWithParameter:(id)arg1;
-(void)subscribeToPatterns:(id)arg1;
-(void)unsubscribeFromPatterns:(id)arg1;
-(void)publishMessage:(id)arg1;
-(void)runExtraKeepAliveWhenSystemAwake:(double)arg1;
-(void)pauseForegroundKeepAlive;
-(void)resumeForegroundKeepAlive;
-(id)connectionDebugInfo;
-(void)setUseVOIP:(BOOL)arg1;
-(void)setMqttKeepAliveTime:(int)arg1;
-(int)mqttForegroundKeepAliveTime;
-(void)setMqttForegroundKeepAliveTime:(int)arg1;
-(void)setInBackground:(BOOL)arg1;
-(int)connectStatus;
-(void)setDelegate:(id)arg1;
-(id<FBMQTTClientDelegate>)delegate;
-(void)stop;
-(void)start;
-(float)connectTimeout;
-(void)setConnectTimeout:(float)arg1;

@end

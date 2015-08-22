/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class NSString, NSMutableArray;

@interface MarauderEventBatch : TBaseStruct <TBase, NSCoding> {

	long long __thrift_timeStampInMilliseconds;
	NSString* __thrift_deviceID;
	NSString* __thrift_appID;
	NSString* __thrift_appVersion;
	NSMutableArray* __thrift_events;
	NSString* __thrift_platformSoftwareVersion;
	NSString* __thrift_platformHardwareVersion;
	BOOL __thrift_timeStampInMilliseconds_set;
	BOOL __thrift_deviceID_set;
	BOOL __thrift_appID_set;
	BOOL __thrift_appVersion_set;
	BOOL __thrift_events_set;
	BOOL __thrift_platformSoftwareVersion_set;
	BOOL __thrift_platformHardwareVersion_set;

}

@property (assign,nonatomic) long long timeStampInMilliseconds; 
@property (nonatomic,retain) NSString * deviceID; 
@property (nonatomic,retain) NSString * appID; 
@property (nonatomic,retain) NSString * appVersion; 
@property (nonatomic,retain) NSMutableArray * events; 
@property (nonatomic,retain) NSString * platformSoftwareVersion; 
@property (nonatomic,retain) NSString * platformHardwareVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlatformSoftwareVersion:(NSString *)arg1 ;
-(void)setPlatformHardwareVersion:(NSString *)arg1 ;
-(id)toDict;
-(void)setTimeStampInMilliseconds:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(long long)timeStampInMilliseconds;
-(BOOL)timeStampInMillisecondsIsSet;
-(void)unsetTimeStampInMilliseconds;
-(id)initWithTimeStampInMilliseconds:(long long)arg1 deviceID:(id)arg2 appID:(id)arg3 appVersion:(id)arg4 events:(NSMutableArray*)arg5 platformSoftwareVersion:(id)arg6 platformHardwareVersion:(id)arg7 ;
-(BOOL)deviceIDIsSet;
-(void)unsetDeviceID;
-(BOOL)appIDIsSet;
-(void)unsetAppID;
-(BOOL)appVersionIsSet;
-(void)unsetAppVersion;
-(BOOL)eventsIsSet;
-(void)unsetEvents;
-(NSString *)platformSoftwareVersion;
-(BOOL)platformSoftwareVersionIsSet;
-(void)unsetPlatformSoftwareVersion;
-(NSString *)platformHardwareVersion;
-(BOOL)platformHardwareVersionIsSet;
-(void)unsetPlatformHardwareVersion;
-(BOOL)makeImmutable;
-(NSMutableArray *)events;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceID;
-(void)write:(id)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appID;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface AFSDKInstallTrackerData : NSObject {

	NSString* _uid;
	unsigned long long _type;
	NSString* _scheme;
	NSNumber* _appid;
	NSDate* _deadline;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) NSString * uid;                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * scheme;                      //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,retain) NSNumber * appid;                       //@synthesize appid=_appid - In the implementation block
@property (nonatomic,retain) NSDate * deadline;                      //@synthesize deadline=_deadline - In the implementation block
@property (nonatomic,copy) id callback;                              //@synthesize callback=_callback - In the implementation block
-(void)setAppid:(NSNumber *)arg1 ;
-(NSNumber *)appid;
-(NSDate *)deadline;
-(void)setDeadline:(NSDate *)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(id)init;
-(NSString *)scheme;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uid;
-(void)setScheme:(NSString *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

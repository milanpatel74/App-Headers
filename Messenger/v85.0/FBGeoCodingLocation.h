/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBGeoCodingLocation : FBValueObject <NSCopying> {

	NSString* _address;
	NSString* _city;
	NSString* _state;
	double _latitude;
	double _longitude;

}

@property (nonatomic,copy,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * city;                 //@synthesize city=_city - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                     //@synthesize longitude=_longitude - In the implementation block
-(id)initWithAddress:(id)arg1 city:(id)arg2 state:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 ;
-(NSString *)state;
-(NSString *)city;
-(NSString *)address;
-(double)latitude;
-(double)longitude;
@end

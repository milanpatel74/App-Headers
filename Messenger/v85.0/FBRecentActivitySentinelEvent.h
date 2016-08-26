/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBRecentActivitySentinelEvent : NSObject {

	int _type;
	int _channel;
	NSString* _eventName;
	NSString* _module;
	NSDictionary* _extra;
	/*^block*/id _extraBlock;

}

@property (nonatomic,readonly) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                 //@synthesize module=_module - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;              //@synthesize extra=_extra - In the implementation block
@property (nonatomic,copy,readonly) id extraBlock;                     //@synthesize extraBlock=_extraBlock - In the implementation block
@property (nonatomic,readonly) int channel;                            //@synthesize channel=_channel - In the implementation block
-(NSString *)module;
-(NSDictionary *)extra;
-(id)extraBlock;
-(id)initWithType:(int)arg1 eventName:(id)arg2 module:(id)arg3 extra:(id)arg4 extraBlock:(/*^block*/id)arg5 channel:(int)arg6 ;
-(int)type;
-(NSString *)eventName;
-(int)channel;
@end

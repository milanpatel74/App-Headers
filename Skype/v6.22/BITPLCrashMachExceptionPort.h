/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BITPLCrashMachExceptionPort : NSObject {

	unsigned _mask;
	unsigned _port;
	int _behavior;
	int _flavor;

}

@property (nonatomic,readonly) unsigned server_port;              //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) unsigned mask;                     //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) int behavior;                      //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) int flavor;                        //@synthesize flavor=_flavor - In the implementation block
+(id)exceptionPortsForTask:(unsigned)arg1 mask:(unsigned)arg2 error:(id*)arg3 ;
+(id)exceptionPortsForThread:(unsigned)arg1 mask:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithServerPort:(unsigned)arg1 mask:(unsigned)arg2 behavior:(int)arg3 flavor:(int)arg4 ;
-(BOOL)registerForTask:(unsigned)arg1 previousPortSet:(id*)arg2 error:(id*)arg3 ;
-(BOOL)registerForThread:(unsigned)arg1 previousPortSet:(id*)arg2 error:(id*)arg3 ;
-(unsigned)server_port;
-(void)dealloc;
-(unsigned)mask;
-(int)behavior;
-(int)flavor;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSSet;

@interface FlurryPLCrashMachExceptionPortSet : NSObject <NSFastEnumeration> {

	NSSet* _state_set;
	plcrash_mach_exception_port_set _asyncSafeRepresentation;

}

@property (nonatomic,readonly) NSSet * set;                                                          //@synthesize state_set=_state_set - In the implementation block
@property (nonatomic,readonly) plcrash_mach_exception_port_set asyncSafeRepresentation;              //@synthesize asyncSafeRepresentation=_asyncSafeRepresentation - In the implementation block
-(id)initWithAsyncSafeRepresentation:(plcrash_mach_exception_port_set)arg1 ;
-(plcrash_mach_exception_port_set)asyncSafeRepresentation;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_Fl6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(NSSet *)set;
-(id)initWithSet:(id)arg1 ;
@end

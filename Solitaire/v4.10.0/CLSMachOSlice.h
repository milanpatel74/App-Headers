/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSString, NSArray;

@interface CLSMachOSlice : NSObject {

	CLSMachOSlice* _slice;
	NSString* _uuidString;
	NSArray* _linkedDylibs;
	SCD_Struct_FA37 _minimumOSVersion;
	SCD_Struct_FA37 _linkedSDKVersion;

}

@property (nonatomic,copy,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSString * architectureName; 
@property (nonatomic,readonly) NSArray * linkedDylibs; 
@property (nonatomic,readonly) SCD_Struct_FA37 minimumOSVersion;              //@synthesize minimumOSVersion=_minimumOSVersion - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FA37 linkedSDKVersion;              //@synthesize linkedSDKVersion=_linkedSDKVersion - In the implementation block
+(id)runningSlice;
-(id)initWithSlice:(CLSMachOSlice*)arg1 ;
-(NSString *)architectureName;
-(NSArray *)linkedDylibs;
-(SCD_Struct_FA37)minimumOSVersion;
-(SCD_Struct_FA37)linkedSDKVersion;
-(NSString *)uuid;
@end


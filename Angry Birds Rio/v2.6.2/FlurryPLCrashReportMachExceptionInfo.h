/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FlurryPLCrashReportMachExceptionInfo : NSObject {

	unsigned long long _type;
	NSArray* _codes;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * codes;                      //@synthesize codes=_codes - In the implementation block
-(id)initWithType:(unsigned long long)arg1 codes:(id)arg2 ;
-(NSArray *)codes;
-(void)dealloc;
-(unsigned long long)type;
@end

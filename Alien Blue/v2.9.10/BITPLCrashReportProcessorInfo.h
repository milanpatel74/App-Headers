/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BITPLCrashReportProcessorInfo : NSObject {

	int _typeEncoding;
	unsigned long long _type;
	unsigned long long _subtype;

}

@property (nonatomic,readonly) int typeEncoding;                        //@synthesize typeEncoding=_typeEncoding - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long subtype;              //@synthesize subtype=_subtype - In the implementation block
-(id)initWithTypeEncoding:(int)arg1 type:(unsigned long long)arg2 subtype:(unsigned long long)arg3 ;
-(unsigned long long)type;
-(unsigned long long)subtype;
-(int)typeEncoding;
@end

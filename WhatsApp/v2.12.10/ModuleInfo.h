/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface ModuleInfo : NSObject {

	unsigned _base;
	NSString* _name;
	NSString* _arch;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * arch;              //@synthesize arch=_arch - In the implementation block
@property (assign,nonatomic) unsigned base;                //@synthesize base=_base - In the implementation block
+(id)loadedModules;
-(void)setArch:(NSString *)arg1 ;
-(NSString *)arch;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned)base;
-(void)setBase:(unsigned)arg1 ;
@end

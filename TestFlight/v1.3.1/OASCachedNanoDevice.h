/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OASObjectCacheObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OASCachedNanoDevice : OASObjectCacheObject <NSCopying> {

	BOOL _paired;
	BOOL _active;
	NSString* _UDID;
	NSString* _productType;
	NSString* _systemName;
	NSString* _systemVersion;
	NSString* _systemBuildVersion;
	NSString* _localizedModelName;

}

@property (nonatomic,retain) NSString * UDID;                                        //@synthesize UDID=_UDID - In the implementation block
@property (assign,nonatomic) BOOL paired;                                            //@synthesize paired=_paired - In the implementation block
@property (assign,nonatomic) BOOL active;                                            //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSString * productType;                                 //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * systemName;                                  //@synthesize systemName=_systemName - In the implementation block
@property (nonatomic,retain) NSString * systemVersion;                               //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,retain) NSString * systemBuildVersion;                          //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * localizedModelName;                          //@synthesize localizedModelName=_localizedModelName - In the implementation block
@property (nonatomic,readonly) NSString * whitespaceStrippedSystemName; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * publicDescription; 
+(BOOL)insertObjectOnUpdate;
+(id)cachedNanoDeviceFromNRDevice:(id)arg1 ;
+(id)primaryKey;
+(id)objectType;
-(void)setUDID:(NSString *)arg1 ;
-(NSString *)whitespaceStrippedSystemName;
-(NSString *)publicDescription;
-(void)setLocalizedModelName:(NSString *)arg1 ;
-(NSString *)localizedModelName;
-(BOOL)paired;
-(void)setSystemName:(NSString *)arg1 ;
-(id)description;
-(NSString *)systemVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)systemName;
-(NSString *)UDID;
-(NSString *)userAgent;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(NSString *)systemBuildVersion;
-(void)setSystemVersion:(NSString *)arg1 ;
@end


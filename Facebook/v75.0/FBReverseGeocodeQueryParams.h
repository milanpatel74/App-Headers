/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSArray, NSString;

@interface FBReverseGeocodeQueryParams : FBGraphQLInput {

	NSArray* _gpsPoints;
	NSString* _language;
	NSString* _provider;

}

@property (nonatomic,copy) NSArray * gpsPoints;              //@synthesize gpsPoints=_gpsPoints - In the implementation block
@property (nonatomic,copy) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * provider;              //@synthesize provider=_provider - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)gpsPoints;
-(void)setGpsPoints:(NSArray *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
@end


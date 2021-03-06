/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray, NSDate, NSString, GADLocation, NSNumber, NSDictionary;

@interface GADRequest : NSObject <NSCopying> {

	NSMutableDictionary* _networkExtrasMap;
	NSMutableDictionary* _additionalParameters;
	NSArray* _testDevices;
	long long _gender;
	NSDate* _birthday;
	NSArray* _keywords;
	NSString* _contentURL;
	NSString* _requestAgent;
	GADLocation* _location;
	NSNumber* _childDirectedTreatment;
	NSDictionary* _privateMediationExtras;
	NSArray* _formatParameters;
	long long _responseType;

}

@property (nonatomic,copy) NSArray * testDevices;                              //@synthesize testDevices=_testDevices - In the implementation block
@property (assign,nonatomic) long long gender;                                 //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSDate * birthday;                                  //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,copy) NSArray * keywords;                                 //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) NSString * contentURL;                              //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSString * requestAgent;                            //@synthesize requestAgent=_requestAgent - In the implementation block
@property (nonatomic,copy) GADLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSNumber * childDirectedTreatment;                  //@synthesize childDirectedTreatment=_childDirectedTreatment - In the implementation block
@property (nonatomic,copy) NSDictionary * privateMediationExtras;              //@synthesize privateMediationExtras=_privateMediationExtras - In the implementation block
@property (nonatomic,copy) NSArray * formatParameters;                         //@synthesize formatParameters=_formatParameters - In the implementation block
@property (assign,nonatomic) long long responseType;                           //@synthesize responseType=_responseType - In the implementation block
+(id)sdkVersionIdentifiers;
+(id)sdkVersionMetadata;
+(id)extendedSDKVersionNumber;
+(id)requestWithConnector:(id)arg1 adapter:(id)arg2 ;
+(long long)requestTypeFromString:(id)arg1 ;
+(id)request;
+(void)initialize;
+(id)sdkVersion;
-(void)configureNetworkExtrasWithConnector:(id)arg1 adapter:(id)arg2 ;
-(void)addAdapterListWithConnector:(id)arg1 adapter:(id)arg2 ;
-(BOOL)isATestDevice;
-(id)adNetworkExtrasFor:(Class)arg1 ;
-(NSNumber *)childDirectedTreatment;
-(NSArray *)testDevices;
-(id)networkExtrasAdditionalParameters;
-(void)setTestDevices:(NSArray *)arg1 ;
-(void)setPrivateMediationExtras:(NSDictionary *)arg1 ;
-(void)setChildDirectedTreatment:(NSNumber *)arg1 ;
-(void)setRequestAgent:(NSString *)arg1 ;
-(void)removeAdNetworkExtrasFor:(Class)arg1 ;
-(id)birthdayString;
-(id)contentURLString;
-(void)setLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 ;
-(void)tagForChildDirectedTreatment:(BOOL)arg1 ;
-(void)addAdditionalParametersFromDictionary:(id)arg1 ;
-(void)setBirthdayWithMonth:(long long)arg1 day:(long long)arg2 year:(long long)arg3 ;
-(void)setLocationWithDescription:(id)arg1 ;
-(NSString *)requestAgent;
-(NSDictionary *)privateMediationExtras;
-(NSArray *)formatParameters;
-(void)setFormatParameters:(NSArray *)arg1 ;
-(void)registerAdNetworkExtras:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GADLocation *)location;
-(id)parameters;
-(void)setLocation:(GADLocation *)arg1 ;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(id)genderString;
-(NSDate *)birthday;
-(void)setBirthday:(NSDate *)arg1 ;
-(void)setResponseType:(long long)arg1 ;
-(NSString *)contentURL;
-(void)setContentURL:(NSString *)arg1 ;
-(long long)responseType;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)keywords;
@end


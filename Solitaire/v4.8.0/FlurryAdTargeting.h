/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSDictionary;

@interface FlurryAdTargeting : NSObject {

	BOOL _testAdsEnabled;
	int _gender;
	CLLocation* _location;
	NSDictionary* _userCookies;
	NSDictionary* _keywords;
	unsigned long long _age;

}

@property (nonatomic,retain) CLLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDictionary * userCookies;              //@synthesize userCookies=_userCookies - In the implementation block
@property (nonatomic,retain) NSDictionary * keywords;                 //@synthesize keywords=_keywords - In the implementation block
@property (assign,nonatomic) BOOL testAdsEnabled;                     //@synthesize testAdsEnabled=_testAdsEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long age;                  //@synthesize age=_age - In the implementation block
@property (assign,nonatomic) int gender;                              //@synthesize gender=_gender - In the implementation block
+(id)targeting;
-(NSDictionary *)userCookies;
-(BOOL)testAdsEnabled;
-(void)setTestAdsEnabled:(BOOL)arg1 ;
-(void)setUserCookies:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)hash;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(void)setAge:(unsigned long long)arg1 ;
-(unsigned long long)age;
-(void)setKeywords:(NSDictionary *)arg1 ;
-(NSDictionary *)keywords;
@end


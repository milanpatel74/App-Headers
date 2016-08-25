/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSArray, NSDictionary;

@interface GADCustomEventRequest : NSObject {

	BOOL _userHasLocation;
	BOOL _isTesting;
	long long _userGender;
	NSDate* _userBirthday;
	double _userLatitude;
	double _userLongitude;
	double _userLocationAccuracyInMeters;
	NSString* _userLocationDescription;
	NSArray* _userKeywords;
	NSDictionary* _additionalParameters;

}

@property (nonatomic,readonly) long long userGender;                                  //@synthesize userGender=_userGender - In the implementation block
@property (nonatomic,copy,readonly) NSDate * userBirthday;                            //@synthesize userBirthday=_userBirthday - In the implementation block
@property (nonatomic,readonly) BOOL userHasLocation;                                  //@synthesize userHasLocation=_userHasLocation - In the implementation block
@property (nonatomic,readonly) double userLatitude;                                   //@synthesize userLatitude=_userLatitude - In the implementation block
@property (nonatomic,readonly) double userLongitude;                                  //@synthesize userLongitude=_userLongitude - In the implementation block
@property (nonatomic,readonly) double userLocationAccuracyInMeters;                   //@synthesize userLocationAccuracyInMeters=_userLocationAccuracyInMeters - In the implementation block
@property (nonatomic,copy,readonly) NSString * userLocationDescription;               //@synthesize userLocationDescription=_userLocationDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userKeywords;                           //@synthesize userKeywords=_userKeywords - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalParameters;              //@synthesize additionalParameters=_additionalParameters - In the implementation block
@property (nonatomic,readonly) BOOL isTesting;                                        //@synthesize isTesting=_isTesting - In the implementation block
-(id)initWithConnector:(id)arg1 ;
-(BOOL)userHasLocation;
-(long long)userGender;
-(NSDate *)userBirthday;
-(double)userLatitude;
-(double)userLongitude;
-(double)userLocationAccuracyInMeters;
-(NSString *)userLocationDescription;
-(NSArray *)userKeywords;
-(NSDictionary *)additionalParameters;
-(BOOL)isTesting;
@end

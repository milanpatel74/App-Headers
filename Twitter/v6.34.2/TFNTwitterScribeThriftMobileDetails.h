/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TBase.h>
#import <Twitter/NSCoding.h>

@class NSString;

@interface TFNTwitterScribeThriftMobileDetails : NSObject <TBase, NSCoding> {

	BOOL _mobileCarrierIsSet;
	BOOL _orientationIsSet;
	BOOL _signalStrengthIsSet;
	BOOL _limitAdTracking;
	BOOL _limitAdTrackingIsSet;
	BOOL _mobileNetworkOperatorCountryCodeIsSet;
	BOOL _mobileNetworkOperatorIsoCountryCodeIsSet;
	BOOL _mobileNetworkOperatorCodeIsSet;
	BOOL _mobileNetworkOperatorNameIsSet;
	BOOL _mobileSimProviderIsoCountryCodeIsSet;
	BOOL _mobileSimProviderCodeIsSet;
	BOOL _mobileSimProviderNameIsSet;
	BOOL _radioStatusIsSet;
	int _signalStrength;
	NSString* _mobileCarrier;
	long long _orientation;
	NSString* _mobileNetworkOperatorCountryCode;
	NSString* _mobileNetworkOperatorIsoCountryCode;
	NSString* _mobileNetworkOperatorCode;
	NSString* _mobileNetworkOperatorName;
	NSString* _mobileSimProviderIsoCountryCode;
	NSString* _mobileSimProviderCode;
	NSString* _mobileSimProviderName;
	long long _radioStatus;

}

@property (nonatomic,copy) NSString * mobileCarrier;                                       //@synthesize mobileCarrier=_mobileCarrier - In the implementation block
@property (nonatomic,readonly) BOOL mobileCarrierIsSet;                                    //@synthesize mobileCarrierIsSet=_mobileCarrierIsSet - In the implementation block
@property (assign,nonatomic) long long orientation;                                        //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) BOOL orientationIsSet;                                      //@synthesize orientationIsSet=_orientationIsSet - In the implementation block
@property (assign,nonatomic) int signalStrength;                                           //@synthesize signalStrength=_signalStrength - In the implementation block
@property (nonatomic,readonly) BOOL signalStrengthIsSet;                                   //@synthesize signalStrengthIsSet=_signalStrengthIsSet - In the implementation block
@property (assign,nonatomic) BOOL limitAdTracking;                                         //@synthesize limitAdTracking=_limitAdTracking - In the implementation block
@property (nonatomic,readonly) BOOL limitAdTrackingIsSet;                                  //@synthesize limitAdTrackingIsSet=_limitAdTrackingIsSet - In the implementation block
@property (nonatomic,copy) NSString * mobileNetworkOperatorCountryCode;                    //@synthesize mobileNetworkOperatorCountryCode=_mobileNetworkOperatorCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL mobileNetworkOperatorCountryCodeIsSet;                 //@synthesize mobileNetworkOperatorCountryCodeIsSet=_mobileNetworkOperatorCountryCodeIsSet - In the implementation block
@property (nonatomic,copy) NSString * mobileNetworkOperatorIsoCountryCode;                 //@synthesize mobileNetworkOperatorIsoCountryCode=_mobileNetworkOperatorIsoCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL mobileNetworkOperatorIsoCountryCodeIsSet;              //@synthesize mobileNetworkOperatorIsoCountryCodeIsSet=_mobileNetworkOperatorIsoCountryCodeIsSet - In the implementation block
@property (nonatomic,copy) NSString * mobileNetworkOperatorCode;                           //@synthesize mobileNetworkOperatorCode=_mobileNetworkOperatorCode - In the implementation block
@property (nonatomic,readonly) BOOL mobileNetworkOperatorCodeIsSet;                        //@synthesize mobileNetworkOperatorCodeIsSet=_mobileNetworkOperatorCodeIsSet - In the implementation block
@property (nonatomic,copy) NSString * mobileNetworkOperatorName;                           //@synthesize mobileNetworkOperatorName=_mobileNetworkOperatorName - In the implementation block
@property (nonatomic,readonly) BOOL mobileNetworkOperatorNameIsSet;                        //@synthesize mobileNetworkOperatorNameIsSet=_mobileNetworkOperatorNameIsSet - In the implementation block
@property (nonatomic,copy) NSString * mobileSimProviderIsoCountryCode;                     //@synthesize mobileSimProviderIsoCountryCode=_mobileSimProviderIsoCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL mobileSimProviderIsoCountryCodeIsSet;                  //@synthesize mobileSimProviderIsoCountryCodeIsSet=_mobileSimProviderIsoCountryCodeIsSet - In the implementation block
@property (nonatomic,copy) NSString * mobileSimProviderCode;                               //@synthesize mobileSimProviderCode=_mobileSimProviderCode - In the implementation block
@property (nonatomic,readonly) BOOL mobileSimProviderCodeIsSet;                            //@synthesize mobileSimProviderCodeIsSet=_mobileSimProviderCodeIsSet - In the implementation block
@property (nonatomic,copy) NSString * mobileSimProviderName;                               //@synthesize mobileSimProviderName=_mobileSimProviderName - In the implementation block
@property (nonatomic,readonly) BOOL mobileSimProviderNameIsSet;                            //@synthesize mobileSimProviderNameIsSet=_mobileSimProviderNameIsSet - In the implementation block
@property (assign,nonatomic) long long radioStatus;                                        //@synthesize radioStatus=_radioStatus - In the implementation block
@property (nonatomic,readonly) BOOL radioStatusIsSet;                                      //@synthesize radioStatusIsSet=_radioStatusIsSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setRadioStatus:(long long)arg1 ;
-(long long)radioStatus;
-(BOOL)radioStatusIsSet;
-(void)setMobileCarrier:(NSString *)arg1 ;
-(void)setLimitAdTracking:(BOOL)arg1 ;
-(void)setMobileNetworkOperatorCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkOperatorIsoCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkOperatorCode:(NSString *)arg1 ;
-(void)setMobileNetworkOperatorName:(NSString *)arg1 ;
-(void)setMobileSimProviderIsoCountryCode:(NSString *)arg1 ;
-(void)setMobileSimProviderCode:(NSString *)arg1 ;
-(void)setMobileSimProviderName:(NSString *)arg1 ;
-(id)initWithMobileCarrier:(id)arg1 orientation:(long long)arg2 signalStrength:(int)arg3 limitAdTracking:(BOOL)arg4 mobileNetworkOperatorCountryCode:(id)arg5 mobileNetworkOperatorIsoCountryCode:(id)arg6 mobileNetworkOperatorCode:(id)arg7 mobileNetworkOperatorName:(id)arg8 mobileSimProviderIsoCountryCode:(id)arg9 mobileSimProviderCode:(id)arg10 mobileSimProviderName:(id)arg11 radioStatus:(long long)arg12 ;
-(NSString *)mobileCarrier;
-(BOOL)mobileCarrierIsSet;
-(BOOL)orientationIsSet;
-(BOOL)signalStrengthIsSet;
-(BOOL)limitAdTracking;
-(BOOL)limitAdTrackingIsSet;
-(NSString *)mobileNetworkOperatorCountryCode;
-(BOOL)mobileNetworkOperatorCountryCodeIsSet;
-(NSString *)mobileNetworkOperatorIsoCountryCode;
-(BOOL)mobileNetworkOperatorIsoCountryCodeIsSet;
-(NSString *)mobileNetworkOperatorCode;
-(BOOL)mobileNetworkOperatorCodeIsSet;
-(NSString *)mobileNetworkOperatorName;
-(BOOL)mobileNetworkOperatorNameIsSet;
-(NSString *)mobileSimProviderIsoCountryCode;
-(BOOL)mobileSimProviderIsoCountryCodeIsSet;
-(NSString *)mobileSimProviderCode;
-(BOOL)mobileSimProviderCodeIsSet;
-(NSString *)mobileSimProviderName;
-(BOOL)mobileSimProviderNameIsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)orientation;
-(void)validate;
-(void)setOrientation:(long long)arg1 ;
-(void)write:(id)arg1 ;
-(int)signalStrength;
-(void)setSignalStrength:(int)arg1 ;
@end

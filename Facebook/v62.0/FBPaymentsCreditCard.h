/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCreditCard.h>
@class NSString, FBStreetAddress;


@protocol FBPaymentsCreditCard <NSObject>
@property (nonatomic,copy) NSString * association; 
@property (nonatomic,copy) NSString * chargeIdentifier; 
@property (nonatomic,copy) NSString * cardNumber; 
@property (nonatomic,copy) NSString * expirationMonth; 
@property (nonatomic,copy) NSString * expirationYear; 
@property (nonatomic,copy) NSString * securityCode; 
@property (nonatomic,copy) NSString * zipCode; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * isAdsFundingSource; 
@property (nonatomic,retain) FBStreetAddress * billingAddress; 
@property (nonatomic,copy) NSString * adAccountID; 
@required
+(id)cardIcon:(id)arg1;
+(id)errorMessageForCode:(unsigned long long)arg1;
+(BOOL)isNumberCorrectLength:(id)arg1;
+(id)typeFromNumber:(id)arg1;
+(BOOL)isSecurityCodeCorrectLength:(id)arg1 association:(id)arg2;
+(BOOL)isZipCodeMaxLength:(id)arg1;
+(BOOL)isBillingInfoMaxLength:(id)arg1;
+(BOOL)isLuhnCompliant:(id)arg1;
+(BOOL)isZipCodeCorrectLength:(id)arg1;
+(BOOL)isBillingInfoCorrectLength:(id)arg1;
-(void)setIsAdsFundingSource:(id)arg1;
-(void)setAdAccountID:(id)arg1;
-(id)cardIcon;
-(id)typeFromNumber;
-(BOOL)isLuhnCompliant;
-(BOOL)isNumberCorrectLength;
-(BOOL)isSecurityCodeCorrectLength;
-(BOOL)isZipCodeCorrectLength;
-(BOOL)isZipCodeMaxLength;
-(BOOL)isAddressCorrectLength;
-(BOOL)isCityCorrectLength;
-(BOOL)isStateCorrectLength;
-(BOOL)isAddressMaxLength;
-(BOOL)isCityMaxLength;
-(BOOL)isStateMaxLength;
-(NSString *)chargeIdentifier;
-(NSString *)expirationMonth;
-(NSString *)expirationYear;
-(NSString *)adAccountID;
-(NSString *)zipCode;
-(NSString *)isAdsFundingSource;
-(void)setAssociation:(id)arg1;
-(void)setZipCode:(id)arg1;
-(void)setExpirationMonth:(id)arg1;
-(void)setExpirationYear:(id)arg1;
-(void)setChargeIdentifier:(id)arg1;
-(NSString *)middleName;
-(void)setMiddleName:(id)arg1;
-(NSString *)state;
-(void)setState:(id)arg1;
-(void)setAddress:(id)arg1;
-(void)setCountry:(id)arg1;
-(NSString *)country;
-(void)setCity:(id)arg1;
-(void)setSecurityCode:(id)arg1;
-(NSString *)securityCode;
-(NSString *)city;
-(NSString *)cardNumber;
-(void)setCardNumber:(id)arg1;
-(void)setFirstName:(id)arg1;
-(void)setLastName:(id)arg1;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)address;
-(NSString *)association;
-(FBStreetAddress *)billingAddress;
-(void)setBillingAddress:(id)arg1;

@end


@class NSString, FBStreetAddress;

@interface FBPaymentsCreditCard : NSObject <FBPaymentsCreditCard> {

	NSString* _association;
	NSString* _chargeIdentifier;
	NSString* _cardNumber;
	NSString* _expirationMonth;
	NSString* _expirationYear;
	NSString* _securityCode;
	NSString* _zipCode;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _address;
	NSString* _city;
	NSString* _state;
	NSString* _country;
	NSString* _isAdsFundingSource;
	FBStreetAddress* _billingAddress;
	NSString* _adAccountID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * association;                          //@synthesize association=_association - In the implementation block
@property (nonatomic,copy) NSString * chargeIdentifier;                     //@synthesize chargeIdentifier=_chargeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * cardNumber;                           //@synthesize cardNumber=_cardNumber - In the implementation block
@property (nonatomic,copy) NSString * expirationMonth;                      //@synthesize expirationMonth=_expirationMonth - In the implementation block
@property (nonatomic,copy) NSString * expirationYear;                       //@synthesize expirationYear=_expirationYear - In the implementation block
@property (nonatomic,copy) NSString * securityCode;                         //@synthesize securityCode=_securityCode - In the implementation block
@property (nonatomic,copy) NSString * zipCode;                              //@synthesize zipCode=_zipCode - In the implementation block
@property (nonatomic,copy) NSString * firstName;                            //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * middleName;                           //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                             //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * address;                              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * city;                                 //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * country;                              //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * isAdsFundingSource;                   //@synthesize isAdsFundingSource=_isAdsFundingSource - In the implementation block
@property (nonatomic,retain) FBStreetAddress * billingAddress;              //@synthesize billingAddress=_billingAddress - In the implementation block
@property (nonatomic,copy) NSString * adAccountID;                          //@synthesize adAccountID=_adAccountID - In the implementation block
+(id)cardIcon:(id)arg1 ;
+(id)errorMessageForCode:(unsigned long long)arg1 ;
+(BOOL)isNumberCorrectLength:(id)arg1 ;
+(id)typeFromNumber:(id)arg1 ;
+(BOOL)isSecurityCodeCorrectLength:(id)arg1 association:(id)arg2 ;
+(BOOL)isZipCodeMaxLength:(id)arg1 ;
+(BOOL)isBillingInfoMaxLength:(id)arg1 ;
+(BOOL)isLuhnCompliant:(id)arg1 ;
+(BOOL)isZipCodeCorrectLength:(id)arg1 ;
+(BOOL)isBillingInfoCorrectLength:(id)arg1 ;
-(void)setIsAdsFundingSource:(NSString *)arg1 ;
-(void)setAdAccountID:(NSString *)arg1 ;
-(id)cardIcon;
-(id)typeFromNumber;
-(BOOL)isLuhnCompliant;
-(BOOL)isNumberCorrectLength;
-(BOOL)isSecurityCodeCorrectLength;
-(BOOL)isZipCodeCorrectLength;
-(BOOL)isZipCodeMaxLength;
-(BOOL)isAddressCorrectLength;
-(BOOL)isCityCorrectLength;
-(BOOL)isStateCorrectLength;
-(BOOL)isAddressMaxLength;
-(BOOL)isCityMaxLength;
-(BOOL)isStateMaxLength;
-(NSString *)chargeIdentifier;
-(NSString *)expirationMonth;
-(NSString *)expirationYear;
-(NSString *)adAccountID;
-(NSString *)zipCode;
-(NSString *)isAdsFundingSource;
-(void)setAssociation:(NSString *)arg1 ;
-(void)setZipCode:(NSString *)arg1 ;
-(void)setExpirationMonth:(NSString *)arg1 ;
-(void)setExpirationYear:(NSString *)arg1 ;
-(void)setChargeIdentifier:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)country;
-(void)setCity:(NSString *)arg1 ;
-(void)setSecurityCode:(NSString *)arg1 ;
-(NSString *)securityCode;
-(NSString *)city;
-(NSString *)cardNumber;
-(void)setCardNumber:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)address;
-(NSString *)association;
-(FBStreetAddress *)billingAddress;
-(void)setBillingAddress:(FBStreetAddress *)arg1 ;
@end


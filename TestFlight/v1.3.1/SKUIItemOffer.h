/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface SKUIItemOffer : NSObject {

	NSString* _actionParameters;
	NSString* _buttonText;
	NSString* _confirmationText;
	long long _fileSize;
	NSString* _fileSizeText;
	long long _offerType;
	float _price;

}

@property (nonatomic,readonly) NSString * actionParameters;                  //@synthesize actionParameters=_actionParameters - In the implementation block
@property (nonatomic,readonly) NSString * buttonText;                        //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,readonly) NSString * confirmationText;                  //@synthesize confirmationText=_confirmationText - In the implementation block
@property (nonatomic,readonly) long long fileSize;                           //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) NSString * fileSizeText; 
@property (nonatomic,readonly) NSDictionary * lookupDictionary; 
@property (nonatomic,readonly) long long offerType;                          //@synthesize offerType=_offerType - In the implementation block
@property (nonatomic,readonly) float price;                                  //@synthesize price=_price - In the implementation block
-(long long)fileSize;
-(NSString *)buttonText;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)cacheRepresentation;
-(void)_setFileSizeWithAssets:(id)arg1 ;
-(void)_setFileSizeWithFlavors:(id)arg1 ;
-(id)initWithButtonText:(id)arg1 ;
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)initWithOfferDictionary:(id)arg1 ;
-(id)initWithRedownloadToken:(id)arg1 ;
-(NSString *)fileSizeText;
-(NSDictionary *)lookupDictionary;
-(long long)offerType;
-(void)_addActionParameterWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)actionParameters;
-(NSString *)confirmationText;
-(float)price;
@end

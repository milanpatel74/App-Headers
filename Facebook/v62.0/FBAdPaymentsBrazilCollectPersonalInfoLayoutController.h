/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAdPaymentsFormLayoutDelegate.h>
#import <Facebook/FBAdPaymentsFormLayoutDataSource.h>

@class FBUserSession, NSDictionary, FBAdPaymentsFreeTextComponentController, FBAdPaymentsBrazilTaxIDPostalComponentController, FBAdPaymentsFormLayout, NSString;

@interface FBAdPaymentsBrazilCollectPersonalInfoLayoutController : NSObject <FBAdPaymentsFormLayoutDelegate, FBAdPaymentsFormLayoutDataSource> {

	FBUserSession* _session;
	NSDictionary* _formComponentsByIndexPath;
	unsigned long long _collectionMode;
	FBAdPaymentsFreeTextComponentController* _legalNameComponentController;
	FBAdPaymentsBrazilTaxIDPostalComponentController* _postalComponentController;
	FBAdPaymentsFreeTextComponentController* _streetAddressComponentController;
	FBAdPaymentsFreeTextComponentController* _streetNumberComponentController;
	FBAdPaymentsFreeTextComponentController* _streetAddressTwoComponentController;
	FBAdPaymentsFreeTextComponentController* _neighborhoodComponentController;
	FBAdPaymentsFreeTextComponentController* _cityComponentController;
	FBAdPaymentsFreeTextComponentController* _stateComponentController;
	FBAdPaymentsFormLayout* _formLayout;

}

@property (nonatomic,readonly) FBAdPaymentsFormLayout * formLayout;                                                        //@synthesize formLayout=_formLayout - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFreeTextComponentController * legalNameComponentController;                     //@synthesize legalNameComponentController=_legalNameComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsBrazilTaxIDPostalComponentController * postalComponentController;               //@synthesize postalComponentController=_postalComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFreeTextComponentController * streetAddressComponentController;                 //@synthesize streetAddressComponentController=_streetAddressComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFreeTextComponentController * streetNumberComponentController;                  //@synthesize streetNumberComponentController=_streetNumberComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFreeTextComponentController * streetAddressTwoComponentController;              //@synthesize streetAddressTwoComponentController=_streetAddressTwoComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFreeTextComponentController * neighborhoodComponentController;                  //@synthesize neighborhoodComponentController=_neighborhoodComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFreeTextComponentController * cityComponentController;                          //@synthesize cityComponentController=_cityComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFreeTextComponentController * stateComponentController;                         //@synthesize stateComponentController=_stateComponentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBAdPaymentsFreeTextComponentController *)legalNameComponentController;
-(unsigned long long)numberOfSectionsForUserInfoLayout;
-(unsigned long long)numberOfItemsForUserInfoLayoutAtSectionIndex:(unsigned long long)arg1 ;
-(FBAdPaymentsFreeTextComponentController *)streetAddressComponentController;
-(FBAdPaymentsFreeTextComponentController *)neighborhoodComponentController;
-(void)updateCollectionMode:(unsigned long long)arg1 ;
-(FBAdPaymentsFreeTextComponentController *)streetNumberComponentController;
-(id)initWithSession:(id)arg1 collectionMode:(unsigned long long)arg2 ;
-(FBAdPaymentsFreeTextComponentController *)streetAddressTwoComponentController;
-(void)_setupComponents;
-(CGSize)layoutContainerSizeForIndexPath:(id)arg1 withConstraintSize:(CGSize)arg2 ;
-(CGSize)layoutFormHeaderSizeWithConstraintSize:(CGSize)arg1 forSection:(unsigned long long)arg2 ;
-(CGSize)layoutFormFooterSizeWithConstraintSize:(CGSize)arg1 forSection:(unsigned long long)arg2 ;
-(double)preferredLayoutContainerWidthForIndexPath:(id)arg1 ;
-(unsigned long long)numberOfSectionsForFormLayout:(id)arg1 ;
-(unsigned long long)numberOfRowsForFormLayout:(id)arg1 inSection:(unsigned long long)arg2 ;
-(unsigned long long)numberOfColsForFormLayout:(id)arg1 inSection:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 ;
-(FBAdPaymentsFormLayout *)formLayout;
-(FBAdPaymentsFreeTextComponentController *)cityComponentController;
-(FBAdPaymentsBrazilTaxIDPostalComponentController *)postalComponentController;
-(FBAdPaymentsFreeTextComponentController *)stateComponentController;
-(id)formComponentAtIndexPath:(id)arg1 ;
@end

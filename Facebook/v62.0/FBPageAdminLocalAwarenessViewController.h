/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesPromotionViewController.h>
#import <Facebook/FBAICallToActionComponentValidationControllerDelegate.h>
#import <Facebook/FBAICallToActionComponentValidationControllerDataSource.h>

@class FBAdInterfacesLogger, FBPageAdminLocalAwarenessRequestProvider, FBAICallToActionComponentValidationController, NSMutableOrderedSet, FBLWILocalAwarenessNewFormatExperimentContext, NSString;

@interface FBPageAdminLocalAwarenessViewController : FBAdInterfacesPromotionViewController <FBAICallToActionComponentValidationControllerDelegate, FBAICallToActionComponentValidationControllerDataSource> {

	FBAdInterfacesLogger* _logger;
	FBPageAdminLocalAwarenessRequestProvider* _requestProvider;
	FBAICallToActionComponentValidationController* _callToActionComponentValidationController;
	NSMutableOrderedSet* _orderedComponents;
	FBLWILocalAwarenessNewFormatExperimentContext* _newFormatExperimentContext;

}

@property (nonatomic,readonly) FBAICallToActionComponentValidationController * callToActionComponentValidationController;              //@synthesize callToActionComponentValidationController=_callToActionComponentValidationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SEL)fetchMoreUnifiedAudiencesAction;
-(BOOL)shouldShowFooter;
-(id)initWithSession:(id)arg1 page:(id)arg2 aymtActionData:(id)arg3 placement:(id)arg4 restoreSavedSettings:(BOOL)arg5 ;
-(Class)componentProvider;
-(id)mutator;
-(id)tipCopyForTag:(long long)arg1 ;
-(id)availableTipTags;
-(id)orderedComponents;
-(BOOL)hasAnyValidAccounts;
-(id)boostedComponentApp;
-(void)promotionDataModelDidInitialize:(id)arg1 ;
-(unsigned long long)totalComponentCount;
-(unsigned long long)componentForBoostedComponentSpecElement:(unsigned long long)arg1 ;
-(id)componentModels;
-(id)addPaymentMessage;
-(id)addPaymentButtonTitle;
-(id)requestProvider;
-(id)promotableObjectID;
-(id)footerButtonTitle:(id)arg1 ;
-(BOOL)isFooterButtonEnabled:(id)arg1 ;
-(unsigned long long)creativeViewControllerConfiguration;
-(id)_callToActionComponentValidationController;
-(void)targetingComponent:(id)arg1 didChangeTargetingSpec:(id)arg2 ;
-(BOOL)_isCallToActionSectionEnabled;
-(id)_targetingDisplayLocation;
-(id)_footerButtonTitleForCreateWithDataModel:(id)arg1 ;
-(BOOL)canHandleAction:(id)arg1 ;
-(void)validationController:(id)arg1 setCallToActions:(id)arg2 ;
-(void)validationController:(id)arg1 setCallToActionValidating:(BOOL)arg2 ;
-(void)validationController:(id)arg1 setCallToActionValidationError:(id)arg2 ;
-(id)callToActionsForValidationController:(id)arg1 ;
-(id)selectedTargetingSpecForValidationController:(id)arg1 ;
-(id)footerTitle:(id)arg1 ;
-(id)pageURLString;
-(id)helpCenterURL;
-(id)targetingComponentConfigurationsForAudienceOption:(id)arg1 targetingSpec:(id)arg2 ;
-(BOOL)_isSelectedBudgetValid:(id)arg1 ;
-(id)headerModelWithDataModel:(id)arg1 ;
-(FBAICallToActionComponentValidationController *)callToActionComponentValidationController;
-(id)title;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)logger;
-(id)validator;
@end

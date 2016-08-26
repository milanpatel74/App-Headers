/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesPromotionViewController.h>

@class FBAdInterfacesLogger, FBAdInterfacesWebsiteURLValidator, NSSet;

@interface FBPageAdminPromoteWebsiteViewController : FBAdInterfacesPromotionViewController {

	FBAdInterfacesLogger* _logger;
	FBAdInterfacesWebsiteURLValidator* _urlValidator;
	NSSet* _availableTipTags;

}
-(BOOL)shouldShowFooter;
-(id)initWithSession:(id)arg1 page:(id)arg2 aymtActionData:(id)arg3 placement:(id)arg4 ;
-(id)mutator;
-(id)tipCopyForTag:(long long)arg1 ;
-(id)availableTipTags;
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
-(BOOL)canShowInstagramPlacement;
-(id)helpCenterURL;
-(id)headerModelWithDataModel:(id)arg1 ;
-(id)title;
-(id)logger;
-(id)validator;
@end

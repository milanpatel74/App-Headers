/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/GADIntermitting.h>

@class GADIntermission, UIViewController, GADSlot, GADOpener, NSString;

@interface GADOverlayProxy : NSObject <GADIntermitting> {

	GADIntermission* _intermission;
	UIViewController* _viewController;
	GADSlot* _slot;
	GADOpener* _opener;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) GADSlot * slot;                                   //@synthesize slot=_slot - In the implementation block
@property (nonatomic,retain) GADOpener * opener;                                      //@synthesize opener=_opener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GADIntermission * intermission;                        //@synthesize intermission=_intermission - In the implementation block
+(id)overlayProxyForViewController:(id)arg1 ;
-(void)relinquishScreenWithCompletion:(/*^block*/id)arg1 ;
-(GADIntermission *)intermission;
-(void)presentFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldDismissOnApplicationEnteringForeground;
-(GADOpener *)opener;
-(void)setOpener:(GADOpener *)arg1 ;
-(GADSlot *)slot;
-(id)init;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)setSlot:(GADSlot *)arg1 ;
@end

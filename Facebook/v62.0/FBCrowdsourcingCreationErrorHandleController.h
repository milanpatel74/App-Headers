/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol FBCrowdsourcingCreationErrorHandlerDelegate;
@class NSString, FBNearbyPlace, NSMutableArray;

@interface FBCrowdsourcingCreationErrorHandleController : NSObject <UIAlertViewDelegate> {

	NSString* _APIsuggestedName;
	FBNearbyPlace* _existingPlace;
	int _alertType;
	NSMutableArray* _overrideIDs;
	id<FBCrowdsourcingCreationErrorHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingCreationErrorHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newAlertWithError:(id)arg1 suggestedName:(id)arg2 ;
-(id)_newAlertViewForInvalidPlaceNameError:(id)arg1 ;
-(id)_newAlertViewForPlaceTooSimilarError:(id)arg1 attemptedName:(id)arg2 ;
-(void)handleError:(id)arg1 extraData:(id)arg2 ;
-(void)setDelegate:(id<FBCrowdsourcingCreationErrorHandlerDelegate>)arg1 ;
-(id<FBCrowdsourcingCreationErrorHandlerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

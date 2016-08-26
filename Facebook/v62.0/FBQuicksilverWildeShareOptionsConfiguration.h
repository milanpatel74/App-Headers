/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBQuicksilverShareOptionsConfiguration.h>

@protocol FBNavigationCoordinator;
@class FBQuicksilverGameInfo, FBUserSession, FBQuicksilverViewController, NSString;

@interface FBQuicksilverWildeShareOptionsConfiguration : NSObject <FBComposerFlowDelegate, FBQuicksilverShareOptionsConfiguration> {

	FBQuicksilverGameInfo* _gameInfo;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBUserSession* _session;
	FBQuicksilverViewController* _viewController;

}

@property (assign,nonatomic,__weak) FBQuicksilverViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompletedWithResult:(id)arg1 ;
-(id)initWithGameInfo:(id)arg1 navigationCoordinator:(id)arg2 session:(id)arg3 ;
-(void)_didSelectShareNow:(id)arg1 ;
-(void)_didSelectShareInNewPost:(id)arg1 ;
-(id)actionSheetButtonItemsForShareOptions;
-(void)_didSelectSendInMessenger:(id)arg1 ;
-(void)setViewController:(FBQuicksilverViewController *)arg1 ;
-(FBQuicksilverViewController *)viewController;
@end

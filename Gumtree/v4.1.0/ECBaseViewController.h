/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Gumtree/BackButtonHandlerProtocol.h>

@class NSString, ECNotificationObserver, ECThemedBackgroundView, UINavigationItem, NSArray;

@interface ECBaseViewController : UIViewController <BackButtonHandlerProtocol> {

	BOOL _presentingModalLogin;
	BOOL _skipThemedBackground;
	BOOL _shouldTrackPageView;
	NSString* _identifier;
	/*^block*/id _apptentiveHandler;
	NSString* _trackingName;
	NSString* _parentTrackingName;
	ECNotificationObserver* _loginObserver;
	ECNotificationObserver* _conversationsRetrievedObserver;
	ECThemedBackgroundView* _forcedLoginBackgroundView;

}

@property (nonatomic,readonly) BOOL shouldSelectViewControllerAsRoot; 
@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UINavigationItem * relevantNavigationitem; 
@property (nonatomic,copy) id apptentiveHandler;                                                   //@synthesize apptentiveHandler=_apptentiveHandler - In the implementation block
@property (assign,nonatomic) BOOL skipThemedBackground;                                            //@synthesize skipThemedBackground=_skipThemedBackground - In the implementation block
@property (assign,nonatomic) BOOL shouldTrackPageView;                                             //@synthesize shouldTrackPageView=_shouldTrackPageView - In the implementation block
@property (nonatomic,retain) NSString * trackingName;                                              //@synthesize trackingName=_trackingName - In the implementation block
@property (nonatomic,retain) NSString * parentTrackingName;                                        //@synthesize parentTrackingName=_parentTrackingName - In the implementation block
@property (nonatomic,retain) ECNotificationObserver * loginObserver;                               //@synthesize loginObserver=_loginObserver - In the implementation block
@property (nonatomic,retain) ECNotificationObserver * conversationsRetrievedObserver;              //@synthesize conversationsRetrievedObserver=_conversationsRetrievedObserver - In the implementation block
@property (nonatomic,readonly) NSArray * debugServices; 
@property (nonatomic,retain) ECThemedBackgroundView * forcedLoginBackgroundView;                   //@synthesize forcedLoginBackgroundView=_forcedLoginBackgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replyViaPhoneWithAd:(id)arg1 useEchelon:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)replyViaSMSWithAd:(id)arg1 useEchelon:(BOOL)arg2 messageDelegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)replyViaEmailWithAd:(id)arg1 ;
-(void)replyViaWebWithAd:(id)arg1 ;
-(void)replyViaChatWithAd:(id)arg1 ;
-(void)closeNudgeWithOption:(long long)arg1 ;
-(void)callPhoneWithNumber:(id)arg1 forAD:(id)arg2 ;
-(void)sendSMSToPhoneWithNumber:(id)arg1 forAD:(id)arg2 messageDelegate:(id)arg3 ;
-(void)displayReplyAdController:(id)arg1 ;
-(void)loginToChatWithAd:(id)arg1 ;
-(id)chatDialogViewControllerWithAd:(id)arg1 ;
-(void)displayChatDialogAfterLoginFromReplyViaEmailWithAd:(id)arg1 ;
-(void)promoteAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)manageAction:(id)arg1 userAdManager:(id)arg2 completionHandler:(/*^block*/id)arg3 showProgressIndicator:(BOOL)arg4 ;
-(void)toggleFavoriteAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fullscreenImageActionWithImages:(id)arg1 firstImage:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showMapAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAction:(id)arg1 userAdManager:(id)arg2 completionHandler:(/*^block*/id)arg3 showProgressIndicator:(BOOL)arg4 ;
-(void)editAdAction:(id)arg1 userAdManager:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)purchaseInsertionAdAction:(id)arg1 userAdManager:(id)arg2 completionHandler:(/*^block*/id)arg3 showProgressIndicator:(BOOL)arg4 ;
-(void)activateAdAction:(id)arg1 userAdManager:(id)arg2 completionHandler:(/*^block*/id)arg3 showProgressIndicator:(BOOL)arg4 ;
-(void)pauseAdAction:(id)arg1 userAdManager:(id)arg2 completionHandler:(/*^block*/id)arg3 showProgressIndicator:(BOOL)arg4 ;
-(id)showProgressIfNeeded:(BOOL)arg1 ;
-(void)purchaseInsertionWithFeatureProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)updateValues;
-(void)updateEnable;
-(void)setTrackingName:(NSString *)arg1 ;
-(NSString *)trackingName;
-(void)trackPageView;
-(void)setSkipThemedBackground:(BOOL)arg1 ;
-(void)setParentTrackingName:(NSString *)arg1 ;
-(long long)authenticationMode;
-(void)showLoginIfNotLoggedInForMode:(long long)arg1 ;
-(BOOL)shouldRemoveCellWhenRemovingWatchlist;
-(void)setShouldTrackPageView:(BOOL)arg1 ;
-(BOOL)shouldTrackPageView;
-(void)updateOnTabChange:(BOOL)arg1 ;
-(NSString *)parentTrackingName;
-(void)updateData;
-(void)showRegistrationPage;
-(void)performActionUponAppBecomingActive;
-(void)performActionUponAppResigningActive;
-(void)setLoginObserver:(ECNotificationObserver *)arg1 ;
-(void)setApptentiveHandler:(id)arg1 ;
-(void)willLoseFocus;
-(void)willGainFocus;
-(id)apptentiveHandler;
-(ECNotificationObserver *)loginObserver;
-(void)removeForcedLoginBackgroundView;
-(void)showLoginIfRequired;
-(void)showLogout:(/*^block*/id)arg1 ;
-(id)mailOfRegistrationInfo:(id)arg1 ;
-(BOOL)shouldDisplayRegistrationAlertWithRegistrationInfo:(id)arg1 ;
-(BOOL)shouldDisplayIForgotAlertForURL:(id)arg1 ;
-(void)showIForgotAlertWithMail:(id)arg1 ;
-(void)showRegistrationAlertWithMail:(id)arg1 ;
-(NSArray *)debugServices;
-(void)updateNavigationBar;
-(UINavigationItem *)relevantNavigationitem;
-(void)finishUpdatingNavigationBar;
-(BOOL)shouldAddForcedLoginView;
-(ECThemedBackgroundView *)forcedLoginBackgroundView;
-(void)updateAccessibilityIdentifier;
-(BOOL)skipThemedBackground;
-(BOOL)needsOptOutFromExtendedLayoutChanges;
-(void)dismissSelf;
-(id)signInControllerForLoginMode:(long long)arg1 ;
-(void)showSignInController:(id)arg1 forDeviceIdiom:(long long)arg2 ;
-(void)handleShakeGesture;
-(BOOL)shouldSelectViewControllerAsRoot;
-(ECNotificationObserver *)conversationsRetrievedObserver;
-(void)setConversationsRetrievedObserver:(ECNotificationObserver *)arg1 ;
-(void)setForcedLoginBackgroundView:(ECThemedBackgroundView *)arg1 ;
-(BOOL)requiresAuthentication;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)dismissViewController;
@end

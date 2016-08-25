//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKEventEditViewDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class GADAdView, GADSlot, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSURL, UIViewController;

@interface GADOpener : NSObject <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, EKEventEditViewDelegate, UIAlertViewDelegate>
{
    NSMapTable *_confirmationAlertURLs;
    NSMutableSet *_allowedAppURLs;
    _Bool _didOpenAnotherApplication;
    _Bool _autoClickProtected;
    UIViewController *_viewController;
    NSURL *_referringURL;
    GADAdView *_adView;
    GADSlot *_slot;
    id <GADOpenerDelegate> _delegate;
    NSString *_navigationURL;
    NSMutableDictionary *_cachedStoreProductViewController;
}

@property(retain, nonatomic) NSMutableDictionary *cachedStoreProductViewController; // @synthesize cachedStoreProductViewController=_cachedStoreProductViewController;
@property(nonatomic, getter=isAutoClickProtected) _Bool autoClickProtected; // @synthesize autoClickProtected=_autoClickProtected;
@property(copy, nonatomic) NSString *navigationURL; // @synthesize navigationURL=_navigationURL;
@property(nonatomic) __weak id <GADOpenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didOpenAnotherApplication; // @synthesize didOpenAnotherApplication=_didOpenAnotherApplication;
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
@property(nonatomic) __weak GADAdView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) NSURL *referringURL; // @synthesize referringURL=_referringURL;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)openCalendarWithDictionary:(id)arg1;
- (void)openSmsComposer:(id)arg1;
- (void)openEmailComposer:(id)arg1;
- (void)presentComposerController:(id)arg1;
- (void)openApp:(id)arg1;
- (void)openWebAppWithResizeProperties:(id)arg1;
- (void)expandToWebAppWithSupportedOrientations:(unsigned long long)arg1 usingCustomClose:(_Bool)arg2;
- (void)openWebAppWithHTML:(id)arg1 supportedOrientations:(unsigned long long)arg2 usingCustomClose:(_Bool)arg3;
- (void)openWebApp:(id)arg1 supportedOrientations:(unsigned long long)arg2 usingCustomClose:(_Bool)arg3;
- (id)overlayWithOrientations:(unsigned long long)arg1 useCustomClose:(_Bool)arg2;
- (void)configureOverlay:(id)arg1 orientations:(unsigned long long)arg2 usingCustomClose:(_Bool)arg3;
- (void)openBrowserToURL:(id)arg1 supportedOrientations:(unsigned long long)arg2;
- (void)openInAppPurchase:(id)arg1 quantity:(long long)arg2 reportingURLStringFormats:(id)arg3;
- (void)fetchInAppStoreForProductID:(id)arg1;
- (void)openInAppStoreWithProductID:(id)arg1 fallbackURL:(id)arg2 shouldWaitForFetch:(_Bool)arg3;
- (void)openInAppStore:(id)arg1 fallbackURL:(id)arg2;
- (void)confirmClickToURL:(id)arg1 message:(id)arg2;
- (id)confirmationMessageForURL:(id)arg1;
- (_Bool)shouldPerformOpenAction;
- (void)didOpen;
- (void)didOpenInApp;
- (void)didOpenExternalApp;
- (void)disableAutoCollapseForResize;
- (_Bool)canOpenContent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

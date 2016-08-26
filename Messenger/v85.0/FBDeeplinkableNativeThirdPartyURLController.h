/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBStoreProductViewControllerDelegate.h>
#import <Messenger/SFSafariViewControllerDelegate.h>

@class UIViewController, UIActionSheet, UIAlertView, NSString, NSArray, NSDictionary, FBNativeThirdPartyURLHandler, FBUserSession, NSURL, FBAppLinkProperties, FBItemOverlayInfo, SFSafariViewController;

@interface FBDeeplinkableNativeThirdPartyURLController : NSObject <UIActionSheetDelegate, UIAlertViewDelegate, FBStoreProductViewControllerDelegate, SFSafariViewControllerDelegate> {

	UIViewController* _viewController;
	UIActionSheet* _actionSheet;
	UIAlertView* _alertView;
	NSString* _appID;
	NSString* _appStoreID;
	NSArray* _buttons;
	NSDictionary* _extra;
	FBNativeThirdPartyURLHandler* _nativeThirdPartyURLHandler;
	FBUserSession* _session;
	NSString* _source;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;
	NSURL* _url;
	NSURL* _webURL;
	NSString* _backtrackID;
	/*^block*/id _whenClosedBlock;
	/*^block*/id _completionBlock;
	FBAppLinkProperties* _properties;
	FBItemOverlayInfo* _overlayInfo;
	BOOL _usesSafariViewController;
	SFSafariViewController* _safariViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openURL:(id)arg1 viewController:(id)arg2 trackingCodes:(id)arg3 trackingNodes:(id)arg4 properties:(id)arg5 overlayInfo:(id)arg6 extra:(id)arg7 completionBlock:(/*^block*/id)arg8 whenClosedBlock:(/*^block*/id)arg9 ;
-(void)openWebURL;
-(void)logEventConversion;
-(void)logEventForAppLinkType:(id)arg1 openedURL:(id)arg2 ;
-(BOOL)openNativeURL;
-(void)openStoreURL;
-(void)openURL:(id)arg1 viewController:(id)arg2 trackingCodes:(id)arg3 trackingNodes:(id)arg4 extra:(id)arg5 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
@end

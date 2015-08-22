/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBBugReportModalViewControllerPresenting <NSObject>
@optional
-(void)presentWebView:(id)arg1 delegate:(id)arg2;
-(void)presentPhotoPermissionsRequestWithDelegate:(id)arg1;
-(id)descriptionSuffix;
-(void)pushNavigationViewController:(id)arg1;
-(void)popNavigationViewController;
-(void)logAnalyticsEvent:(id)arg1 extra:(id)arg2;
-(id)userid;
-(id)urlForAbuseReportComponent;
-(id)urlForSendFeedback;
-(id)viewControllerForURL:(id)arg1 onBugReporterNavStack:(BOOL)arg2;
-(void)presentWebViewForURL:(id)arg1;
-(BOOL)isViewControllerPresented:(id)arg1;
-(BOOL)shouldEnableShakeToReportInRedesign;
-(id)configuration;

@required
-(id)currentWindow;
-(void)presentPhotoPermissionsRequestFromView:(id)arg1;
-(id)uploaderWithUserSession:(id)arg1;
-(BOOL)shouldEnableShakeToReport;
-(void)presentViewController:(id)arg1;
-(void)dismissViewController:(id)arg1;

@end

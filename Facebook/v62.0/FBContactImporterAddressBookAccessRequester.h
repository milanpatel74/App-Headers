/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBContactImporterAddressBookAccessRequesterDelegate;
@class NSObject;

@interface FBContactImporterAddressBookAccessRequester : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _successCallback;
	/*^block*/id _failureCallback;
	id<FBContactImporterAddressBookAccessRequesterDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBContactImporterAddressBookAccessRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isAddressBookAuthorizationStatusDetermined;
+(BOOL)isAddressBookAuthorizationGranted;
-(id)initWithDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(void)requestAddressBookAccess;
-(void)_accessGranted;
-(void)_accessDenied;
-(void)_displayPreAlert;
-(void)_preAlertDenied;
-(void)_preAlertGranted;
-(void)_displaySystemAlert;
-(id<FBContactImporterAddressBookAccessRequesterDelegate>)delegate;
@end

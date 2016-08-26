/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface FBCreativePlatformSharedAssetAttachmentLoader : NSObject {

	NSString* _attachmentTypeString;
	NSString* _attachmentID;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
-(id)initWithAttachmentTypeString:(id)arg1 attachmentID:(id)arg2 callbackQueue:(id)arg3 ;
-(void)loadAttachmentWithCompletion:(/*^block*/id)arg1 ;
-(void)_didFailWithErrorCode:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadAttachmentFromAssetWithCompletion:(/*^block*/id)arg1 ;
-(void)_didSucceedWithAttachment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didCompleteWithAttachment:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

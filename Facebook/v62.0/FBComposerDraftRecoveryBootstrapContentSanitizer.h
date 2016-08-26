/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBComposerDraftRecoveryAssetLibraryLoader;

@interface FBComposerDraftRecoveryBootstrapContentSanitizer : NSObject {

	FBUserSession* _session;
	FBComposerDraftRecoveryAssetLibraryLoader* _assetLibraryLoader;

}
-(void)sanitizeSavedBootstrapContent:(id)arg1 validBootstrapContentBlock:(/*^block*/id)arg2 noValidBootstrapContentBlock:(/*^block*/id)arg3 ;
-(void)_sanitizeBootstrapContentAfterSanitizingAttachments:(id)arg1 validBootstrapContentBlock:(/*^block*/id)arg2 ;
-(void)_sanitizeAttachments:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_initAssetLibraryIfNeededForAttachments:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

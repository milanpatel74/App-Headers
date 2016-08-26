/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FB360DetachablePhotoViewProvider.h>

@class FBNetwork360PhotoComponent, NSString;

@interface FB360PhotoSupportingComponent : CKCompositeComponent <FB360DetachablePhotoViewProvider> {

	FBNetwork360PhotoComponent* _360PhotoNetworkComponent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithPhoto:(id)arg1 attributes:(id)arg2 scenePath:(id)arg3 tapAction:(SEL)arg4 prefetcherModule:(id)arg5 analyticsModule:(id)arg6 options:(const FB360PhotoComponentOptionsRef)arg7 session:(id)arg8 ;
-(id)detachRendererView;
-(id)rendererViewContainerView;
-(void)attachRendererView:(id)arg1 ;
@end

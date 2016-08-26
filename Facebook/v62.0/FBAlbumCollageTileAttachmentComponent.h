/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class NSArray, FBPhotoComponent, FBFeedEventBus;

@interface FBAlbumCollageTileAttachmentComponent : CKCompositeComponent {

	NSArray* _photos;
	FBPhotoComponent* _photoComponent;
	FBPhotoComponent* _photoAttachmentWithUntaggedFaces;
	FBFeedEventBus* _eventBus;

}

@property (nonatomic,readonly) FBPhotoComponent * photoComponent;                                //@synthesize photoComponent=_photoComponent - In the implementation block
@property (nonatomic,copy,readonly) NSArray * photos;                                            //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) FBPhotoComponent * photoAttachmentWithUntaggedFaces;              //@synthesize photoAttachmentWithUntaggedFaces=_photoAttachmentWithUntaggedFaces - In the implementation block
+(id)newWithCollageItem:(id)arg1 shouldRenderShadow:(BOOL)arg2 isLastComponentUnderOverlay:(BOOL)arg3 shouldOpenFullscreenVideo:(BOOL)arg4 shouldSuppressLoopingAutoplay:(BOOL)arg5 videoOverlayTapAction:(SEL)arg6 aggregationKey:(id)arg7 photoTapSelector:(SEL)arg8 mediaForceTouchIntentTarget:(id)arg9 toolbox:(id)arg10 options:(const FBAlbumCollageAttachmentComponentOptions*)arg11 invisibleMediaCount:(unsigned long long)arg12 ;
-(FBPhotoComponent *)photoComponent;
-(FBPhotoComponent *)photoAttachmentWithUntaggedFaces;
-(void)viewerDidTapVideoPlay:(id)arg1 ;
-(NSArray *)photos;
@end

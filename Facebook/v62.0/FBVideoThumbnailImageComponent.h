/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FBVideoThumbnailImageComponent : CKCompositeComponent
+(id)newWithThumbnailURL:(id)arg1 imageDownloader:(id)arg2 scenePath:(id)arg3 size:(const CKComponentSize*)arg4 includePlayIcon:(BOOL)arg5 ;
+(id)newWithThumbnail:(id)arg1 size:(const CKComponentSize*)arg2 includePlayIcon:(BOOL)arg3 ;
+(id)_thumbnailComponentForURL:(id)arg1 imageDownloader:(id)arg2 scenePath:(id)arg3 size:(const CKComponentSize*)arg4 ;
+(id)_videoComponentWithThumbnailComponent:(id)arg1 includePlayIcon:(BOOL)arg2 ;
@end

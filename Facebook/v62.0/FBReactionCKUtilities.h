/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBReactionCKUtilities : NSObject
+(id)removeChild:(id)arg1 fromUnitComponent:(id)arg2 isParentPaginated:(BOOL)arg3 fromUnit:(id)arg4 ;
+(id)removeChildren:(id)arg1 fromUnitComponent:(id)arg2 isParentPaginated:(BOOL)arg3 fromUnit:(id)arg4 ;
+(id)childOfUnitComponent:(id)arg1 inComponentTrace:(id)arg2 ;
+(id)appendComponentTraceInReactionContext:(id)arg1 withBrick:(id)arg2 ;
+(id)verticalDividerComponentWithInsets:(UIEdgeInsets)arg1 ;
+(id)horizontalDividerComponentWithInsets:(UIEdgeInsets)arg1 ;
+(id)buttonComponentForText:(id)arg1 selectedText:(id)arg2 selected:(BOOL)arg3 selector:(SEL)arg4 ;
+(id)buttonComponentForImage:(id)arg1 selectedImage:(id)arg2 imageSize:(CGSize)arg3 selected:(BOOL)arg4 selector:(SEL)arg5 ;
+(id)wrapComponentWithShadowedBorders:(id)arg1 ;
+(id)topAlignedButtonComponentForImage:(id)arg1 selectedImage:(id)arg2 imageSize:(CGSize)arg3 selector:(SEL)arg4 ;
+(id)_removeChild:(id)arg1 fromUnitComponentPaginated:(id)arg2 fromUnit:(id)arg3 ;
+(id)_removeChild:(id)arg1 fromUnitComponentNonPaginated:(id)arg2 fromUnit:(id)arg3 ;
+(id)_removeChildren:(id)arg1 fromUnitComponentNonPaginated:(id)arg2 fromUnit:(id)arg3 ;
+(id)_removeChildren:(id)arg1 fromUnitComponentPaginated:(id)arg2 fromUnit:(id)arg3 ;
+(id)updateReactionContext:(id)arg1 addRenderIdiom:(unsigned long long)arg2 ;
+(id)updateReactionContext:(id)arg1 unsetRenderIdiom:(unsigned long long)arg2 ;
+(id)updateReactionContext:(id)arg1 addToUserInfoWithKey:(id)arg2 value:(id)arg3 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableDictionary;

@interface CKComponentDataSourceAttachController : NSObject {

	NSMutableDictionary* _scopeIdentifierToAttachedViewMap;

}
-(void)attachComponentLayout:(CKComponentLayout*)arg1 withScopeIdentifier:(int)arg2 withBoundsAnimation:(CKComponentBoundsAnimation)arg3 toView:(id)arg4 ;
-(void)_detachComponentLayoutFromView:(id)arg1 ;
-(void)detachComponentLayoutWithScopeIdentifier:(int)arg1 ;
-(id)attachStateForScopeIdentifier:(int)arg1 ;
-(id)init;
-(void)dealloc;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBCommerceEventListenerAnnouncer, NSString;

@interface FBCommerceProductDetailsUserInteractionsHScrollComponent : CKCompositeComponent {

	FBCommerceEventListenerAnnouncer* _announcer;
	unsigned long long _numberOfImages;
	NSString* _productID;
	CKTypedComponentAction<> _swipeAction;

}
+(id)newWithSection:(id)arg1 context:(id)arg2 imageTapAction:(CKTypedComponentAction<>)arg3 swipeAction:(CKTypedComponentAction<>)arg4 bleedoutTarget:(Class)arg5 ;
+(id)initialState;
-(void)component:(id)arg1 scrollViewDidScroll:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBDrawerCellDelegate.h>

@protocol FBNotificationsDrawerComponentNUXHandling, FBNotificationsDrawerComponentTransitionHandling;
@class FBNotificationsDrawerNUXComponentModel, NSString;

@interface FBNotificationsDrawerNUXComponentController : CKComponentController <FBDrawerCellDelegate> {

	unsigned long long _drawerCellState;
	FBNotificationsDrawerNUXComponentModel* _componentModel;
	id<FBNotificationsDrawerComponentNUXHandling> _NUXHandler;
	id<FBNotificationsDrawerComponentTransitionHandling> _transitionHandler;

}

@property (assign,nonatomic,__weak) FBNotificationsDrawerNUXComponentModel * componentModel;                             //@synthesize componentModel=_componentModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBNotificationsDrawerComponentNUXHandling> NUXHandler;                            //@synthesize NUXHandler=_NUXHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBNotificationsDrawerComponentTransitionHandling> transitionHandler;              //@synthesize transitionHandler=_transitionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentTreeWillAppear;
-(void)didSelectDrawerItemWithIdentifier:(id)arg1 withSwipeToEdgeGesture:(BOOL)arg2 ;
-(void)drawerCellComponentDidTransitionToState:(unsigned long long)arg1 ;
-(BOOL)shouldPeekDrawer;
-(BOOL)shouldBounceForTapWhenClosed;
-(void)setComponentModel:(FBNotificationsDrawerNUXComponentModel *)arg1 ;
-(void)setNUXHandler:(id<FBNotificationsDrawerComponentNUXHandling>)arg1 ;
-(void)setTransitionHandler:(id<FBNotificationsDrawerComponentTransitionHandling>)arg1 ;
-(FBNotificationsDrawerNUXComponentModel *)componentModel;
-(id<FBNotificationsDrawerComponentNUXHandling>)NUXHandler;
-(id<FBNotificationsDrawerComponentTransitionHandling>)transitionHandler;
@end
